#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d",&x)
#define sll(x) scanf("%lld",&x)
#define ms(array,value) memset(array,value,sizeof(array))
#define iterate(it, s) for(auto it=s.begin(); it!=s.end(); it++)
#define bcnt __builtin_popcount
#define pb(x) push_back(x)
#define sc scanf
#define pf printf
#define F first
#define S second
//--------------------------
#define llu long long int unsigned
#define li long int
#define ll long long
#define lli long long int
//--------------------------
const double PI=3.141592653589793238462643383279502884197169399375105820974944;
const int sz = 100005;
#define INF 1000000000
#define mod 1000000007
//--------------------------
ll gcd(ll i, ll j){ll temp;if(i<j){temp=i;i=j;j=temp;}while(i%j!=0){
                   temp=i;i=j;j=temp%j;}return j;}
ll lcm(ll i, ll j){ll ans=(i*j);ans/=gcd(i, j);return ans;}
ll modpow(ll n, ll p){ll ans=1;while(p>0){if(p&1)ans=(ans*n)%mod;
                   n=(n*n)%mod;p=p/2;}return ans;}
//--------------------------
map<char,string> mem;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
	string str,ans = "";
	mem.clear();
	for(int i=0;i<26;i++)
	  mem['A'+i] = "noinput";
	for(int i=0;i<8;i++){
	  string var = "";
	  cin>>str;
	  cin.ignore();
	  int l = str.length();
	  for(int j=0;j<l;j++){

	    var += to_string(i+2);
	    if(mem[str[j]].length()>var.length())
	      mem[str[j]] = var;
	  }
	}
	bool flag = true;
	getline(cin,str);
	int l = str.length();
	for(int i=0;i<l;i++){
	  if(str[i] == ' ')
	    ans+="0";
	  else if(mem[str[i]] == "noinput")
	    flag = false;
	  else
	    ans+=mem[str[i]];
	}
	if(flag)
	  cout<<ans<<endl;
	else
	  cout<<"NAN\n";
	}
	return 0;
}
