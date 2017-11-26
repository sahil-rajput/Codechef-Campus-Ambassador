#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <queue>
#define x first
#define y second
#define pi 3.14159
using namespace std;

long long minCost(vector<pair<int,int> > G[],int src,int n){
    
    bool visit[n+5];
    memset(visit,false,sizeof(visit));
    long long ans=0;
    priority_queue<pair<int,int>, vector<pair<int,int> >,greater<pair<int,int> > > pq;
    pq.push({0,src});
    while(!pq.empty()){
        
        pair<int,int> temp = pq.top();
        pq.pop();
        if(visit[temp.second])
          continue;
        visit[temp.y] = true;
        ans+=temp.x;
        for(int i=0;i<G[temp.y].size();++i){
            
            int v = (G[temp.y][i]).x;
            int wt = (G[temp.y][i]).y;
            
            if(!visit[v])
                pq.push({wt,v});
        }
    }
    return ans;
}

int main() {
    
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> > arr[n+5];
    for(int i=0;i<m;i++){
        
        int x,y,z;
        cin>>x>>y>>z;
        arr[x].push_back({y,z});
        arr[y].push_back({x,z});
    }
    int src;    
    cin>>src;
    double ans = minCost(arr,src,n); 
    printf("%.3lf",(double)((double)pi*ans));
    return 0;
}