        #include<bits/stdc++.h>
        using namespace std;
         
        #define ll long long int
        #define pii pair < int , pair < int , int > >
        #define pi pair < int , int >
        #define pp pair < ll , ll >
        #define mod 1000000007
        #define pb push_back
        #define mp make_pair
        #define sf(a) scanf("%lld",&a)
         
        ll count(ll n)
        {
            ll dp[n+1];
            for (int i=0; i <= n; i++)
            {
                if (i <= 2)
                   dp[i] = i;
                else
                   dp[i] = (dp[i-1] + (i-1) * dp[i-2]) % mod;
            }
            return dp[n] % mod;
        }
         
        int main()
        {
        	ll t;
        	sf(t);
        	while(t--)
        	{
        	    ll n;
        	    sf(n);
        	    cout << count(n) << "\n";
        	}
        	return 0;
        }  