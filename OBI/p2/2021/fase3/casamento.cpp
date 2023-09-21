#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1, s2;

    cin >> s1 >> s2;

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    while(s1.size() < s2.size()) s1+='0';
    while(s2.size() < s1.size()) s2+='0';

    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    string ans1 = "", ans2 = "";

    for (int i = 0; i < s1.size(); i++)
    {
	if (s1[i] == s2[i]) ans1+=s1[i], ans2+=s2[i];
	else if (s1[i] > s2[i]) ans1+=s1[i];
	else ans2+=s2[i];
    }

    if (ans1 > ans2) swap(ans1, ans2);

    cout << ans1 << " " << ans2 << "\n";
	
    return 0;
}

