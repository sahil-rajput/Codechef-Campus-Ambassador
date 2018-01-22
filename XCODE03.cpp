#include <bits/stdc++.h>
using namespace std;
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
