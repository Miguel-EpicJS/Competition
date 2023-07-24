#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    string s1 = "0", s2 = "0";

    for (int i = 0; i < n; i++)
    {
	char x;
	cin >> x;
	s1.push_back(x);
    }

    for (int i = 0; i < m; i++)
    {
	char x;
	cin >> x;
	s2.push_back(x);
    }

    while(s1.size() < s2.size()) s1.push_back('0');
    while(s2.size() < s1.size()) s2.push_back('0');

    string temp = "0", res = "0";
    while (temp.size() < s1.size()) temp.push_back('0');

    res = temp;

    int z = 0;

    for (int i = s1.size()-1; i >= 0; i--)
    {
	z = (s1[i]-'0')+ (s2[i]-'0')+ (temp[i]-'0');
	if (z <= 1) res[i] = z+'0';
	else if (z == 2) res[i] = '0', temp[i-1] = '1';
	else res[i] = '1', temp[i-1] = '1';
    }

    int i = 0;
    if (res[0] == '0')i++;
    for (; i < res.size(); i++)
    {
	cout << res[i] << " ";
    }
    return 0;
}

