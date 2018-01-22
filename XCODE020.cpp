//author code
#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int n;
int c;
int e;
int ans;
int val,cst;
char str[5];
int arr[2][N];
void update(int row , int idx , int val)
{
  while(idx < N)
  {
    arr[row][idx]=max(arr[row][idx],val);
    idx += idx&-idx;
  }
}
int query(int row,int idx)
{
  int res=0;
  while(idx>0)
  {
    res=max(res,arr[row][idx]);
    idx -= idx&-idx;
  }
  return res;
}
int main()
{
    scanf("%d%d%d",&n,&c,&e);
    for(int i = 1 ; i <= n ; ++i)
    {
      scanf("%d %d %s" ,&val,&cst,str);
      if(str[0]=='C')
      {
        if(cst<=c)
        {
          int tmp1=query(0 , e);
          int tmp2=query(1 , c - cst);
          int tmp3=max(tmp1 , tmp2);
          if(tmp3)
          {
            ans=max(ans,tmp3+val);
          }
        }
        update(1,cst,val);
      }
      else
      {
        if(cst<=e)
        {
          int tmp1=query(0,e-cst);
          int tmp2=query(1,c);
          int tmp3=max(tmp1,tmp2);
          if(tmp3)
          {
            ans=max(ans,tmp3+val);
          }
        }
        update(0,cst,val);
      }
    }
    printf("%d\n",ans);
  return 0;
}