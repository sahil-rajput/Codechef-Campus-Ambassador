#include<bits/stdc++.h>
using namespace std;   
bool isPerfectSquare(long long x)
{
    long long s = sqrt(x);
    return (s*s == x);
}
bool isFibonacci(long long n)
{
    return isPerfectSquare(5*n*n + 4) ||
           isPerfectSquare(5*n*n - 4);
}
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    long long n;
    cin>>n;
    if(isFibonacci(n))
    	cout<< "Yes\n";
    else
    	cout<< "No\n" ;
  }
  return 0;
}