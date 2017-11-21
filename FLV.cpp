#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    if(k == 0 || n == k)
    {
		cout<<0<<" "<<0<<endl; 
		return 0;
	}
	cout<<1<<" "<<min(n-k,2*k);
    return 0;
}