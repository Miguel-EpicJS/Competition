#include <bits/stdc++.h>

using namespace std;

// LIS https://noic.com.br/materiais-informatica/curso/lis/metodo-1/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;

    cin >> t;

    while(t--)
    {
	long long a, b, n;

	cin >> n;

	string s, ss;

	cin >> s;

	ss = s;
	sort(ss.begin(), ss.end());

	if (ss == s) cout << "0\n";
	else
	{

	    string x = "";
	    vector<int> pilha;
	    int ans = 0;
	    vector<int> pos;

	    for (int i = 0; i < n; i++)
	    {
		auto it = lower_bound(pilha.begin(), pilha.end(), s[i]*-1);
		if (it == pilha.end()) pilha.push_back(s[i]*-1), pos.push_back(i);
		else *it = s[i]*-1, pos[it-pilha.begin()] = i;
	    }


	    reverse(pilha.begin(), pilha.end());
	    for (int i = 0; i < pilha.size(); i++)
	    {
		s[pos[i]] =(char) (-1*pilha[i]);
	    }

	    int sub = 1;
	    while(pilha[sub] == pilha[sub-1])sub++;

	    if (s == ss) cout << pilha.size()-1<<"\n";
	    else cout << "-1\n";



    	}
	    
    }

    return 0;
}

