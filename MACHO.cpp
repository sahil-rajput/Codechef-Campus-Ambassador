#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;
     
int getVal(char c){
    switch(c){
        case 'a':
        case 'b':
        case 'd':
        case 'e':
        case 'g':
        case 'o':
        case 'p':
        case 'q':
        case 'A':
        case 'D':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case '6':
        case '9':
        case '4':
        case '0':
            return 1;
            break;
        case 'B':
        case '8':
            return 2;
            break;
        default:
            return 0;
            break;
    }
}
int getVal(string s1){

    int l1 = s1.size();
    int hole = 0, chara = 0;
    int coll = 0;
    for(int i=0;i<l1;i++){

        int x = getVal(s1[i]);
        if(x >= 1)
            hole+=x;
        else
            chara++;
    }
    return (hole/2 + chara/2);
}
string getRes(string s1,string s2){
    
    int v1 = getVal(s1);
    int v2 = getVal(s2);
    if(v1 == v2)
        return "both";
    else if(v1 > v2)
        return "mrinal";
    else
        return "rahul";
}
int main() {
    	
	int t;
	cin>>t;
	while(t--){
	    string s1,s2;
	    cin>>s1;
	    cin>>s2;
    	    
	    cout<<getRes(s1,s2)<<endl;
	}
	return 0;
}