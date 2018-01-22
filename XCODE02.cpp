//Tester Code
#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
typedef long long LL;
typedef pair<int, int> pii;
int n;
int c;
int eli;
vector<pii> cc, e;
int solve(int c, vector<pii> &v) 
{
    int pos = 0;
    int sz = (int)v.size();
    int mx = 0;
    int mx2 = 0;
    int ans = 0;
    for (int i=sz-1;i>=0;--i) 
    {
        while (pos<sz && v[pos].first+v[i].first<=c)
        {
            if (v[pos].second>mx)
            {
                mx2 = mx;
                mx = v[pos].second;
            } 
            else
            {
                mx2 = max(mx2,v[pos].second);
            }
            ++pos;
        }
        int cur=0;
        if (i<pos && v[i].second==mx) 
        {
            cur=mx2;
        } 
        else
        {
            cur=mx;
        }
        if (cur>0)
        {
            ans=max(ans,cur+v[i].second);
        }
    }
    return ans;
}
int main() 
{
    scanf("%d%d%d", &n, &c, &eli);
    for(int i=0;i<n;i++)
    {
        int a,b;
        char t;
        scanf("%d%d %c", &a,&b,&t);
        if (t == 'C') 
        {
            cc.pb(mp(b,a));
        } 
        else
        {
            e.pb(mp(b,a));
        }
    }
    sort(cc.begin(), cc.end());
    sort(e.begin(), e.end());
    int ans = 0;
    int a1 = 0, a2 = 0;
    for (pii x : cc) 
        if (x.first <= c) 
        {
            a1 = max(a1, x.second);
        }
    for (pii x : e) 
        if (x.first <= eli) 
        {
            a2 = max(a2, x.second);
        }
    if (a1 > 0 && a2 > 0) 
    {
        ans = a1 + a2;
    }
    ans = max(ans, solve(c, cc));
    ans = max(ans, solve(eli, e));
    cout<<ans<<endl;
    return 0;
}