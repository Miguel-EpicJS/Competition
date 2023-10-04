#include <bits/stdc++.h>
 
using namespace std;
 
int m, s;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
 
    cin >> m >> s;
 
    if (m == 1 && s == 0)
    {
	cout << "0 0\n";
    }
    else if (s > m*9 || s == 0)
    {
	cout << "-1 -1\n";
    }
    else
    {
	string s2 = "", s1 = "";
	int ms2 = s;
 
	while (ms2 > 0)
	{
	    if (ms2 >= 9) ms2 -= 9, s2 += '9';
	    else s2 += (ms2 + '0'), ms2 = 0;
	}
 
	s1 = s2;
	reverse(s1.begin(), s1.end());
	deque<char> ss1(s1.begin(), s1.end());
 
	while(ss1.front() == '0')
	{
	    ss1.push_back('0');
	    ss1.pop_front();
	}
 
	string anss1(ss1.begin(), ss1.end());
 
	while(anss1.size() < m) anss1 += '0';
	while(s2.size() < m) s2 += '0';

	sort(anss1.begin()+1, anss1.end());	
 
	int i = 0;
	int j = anss1.size()-1;

	while(i < j)
	{
	    if ((anss1[i] == '0' && i != 0) || (i == 0 && anss1[i] == '1')) i++;
	    else if (anss1[j] == '9') j--;
	    else
	    {
		anss1[i]--;
		anss1[j]++;
	    }
	}

	cout << anss1 << " " << s2 << "\n";
    }
 
    return 0;
}
