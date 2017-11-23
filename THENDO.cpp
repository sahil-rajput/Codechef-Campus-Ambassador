#include <bits/stdc++.h>

# define xx first
# define yy second
# define pb push_back
# define pp pop_back
# define eps 1e-4
# define PI acos(-1) 

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vint;

long double dot(pair<double , double> a , pair<double , double> b)
{
	return ((a.xx*b.yy) - (a.yy*b.xx))/2.000000000;
}

long double gcd(long double a, long double b) 
{
    return fabs(b) < eps ? a : gcd(b,fmod(a,b));
}
pair<double , double> p[3]; 
int main()
{
	ios_base::sync_with_stdio (0);
	for(int i=0 ; i<3 ; i++)
		cin>>p[i].xx>>p[i].yy;
	long double a = sqrt((p[1].xx-p[0].xx) * (p[1].xx-p[0].xx) + (p[1].yy-p[0].yy) * (p[1].yy-p[0].yy));
	long double b = sqrt((p[2].xx-p[1].xx) * (p[2].xx-p[1].xx) + (p[2].yy-p[1].yy) * (p[2].yy-p[1].yy));
	long double c = sqrt((p[0].xx-p[2].xx) * (p[0].xx-p[2].xx) + (p[0].yy-p[2].yy) * (p[0].yy-p[2].yy));
	long double R = (a*b*c) / (4.00000000 * abs(dot({p[1].xx-p[0].xx , p[1].yy-p[0].yy} , {p[2].xx-p[0].xx , p[2].yy-p[0].yy})));

	long double A = acos((b*b + c*c - a*a) / (2.0000000*b*c));
	long double B = acos((a*a + c*c - b*b) / (2.0000000*a*c));
	long double C = acos((a*a + b*b - c*c) / (2.0000000*b*a));
	long double ans = PI / gcd(A,gcd(B,C));
	ans = ans / 2.000000000 * R * R * sin(2.00000000*PI / ans);
	cout<<fixed<<setprecision(10)<<ans<<endl;
	return 0;
}