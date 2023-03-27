#include <bits/stdc++.h>

using namespace std;


int main(){

    string s1,s2;

    cin>>s1>>s2;

    for(int i=0;i<s1.length();i++){

	if(s2[i]-s1[i]<0){

	    cout<<"NO";

	    return 0;

	}

    }

    cout<<"YES";

    return 0;

}
