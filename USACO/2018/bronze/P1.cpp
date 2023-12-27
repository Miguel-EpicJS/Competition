#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);

    char arr[3][3];

    for (int i = 0; i < 3; i++)
    {
	for (int j = 0; j < 3; j++)
	{
	    cin >> arr[i][j];
	}
    }

    int ind = 0, team = 0;

    map<string, bool> dupla, solo;

    for (int i = 0; i < 3; i++)
    {
	set<char> s;
	for (int j = 0; j < 3; j++)
	{
	    s.insert(arr[i][j]);
	}
	string ss(s.begin(), s.end());
	if (ss.size() == 2 && dupla[ss] == false) team++, dupla[ss] = true;
	if (ss.size() == 1 && solo[ss] == false) ind++, solo[ss] = true;
    }

    for (int i = 0; i < 3; i++)
    {
	set<char> s;
	for (int j = 0; j < 3; j++)
	{
	    s.insert(arr[j][i]);
	}

	string ss(s.begin(), s.end());
	if (ss.size() == 2 && dupla[ss] == false) team++, dupla[ss] = true;
	if (ss.size() == 1 && solo[ss] == false) ind++, solo[ss] = true;
    }

    string ssa;
    ssa += arr[0][0];
    ssa += arr[1][1];
    ssa += arr[2][2];

    set<char> sa(ssa.begin(), ssa.end());

    ssa = string(sa.begin(), sa.end());

    if (sa.size() == 1 && solo[ssa] == false) ind++, solo[ssa] = true;
    if (sa.size() == 2 && dupla[ssa] == false) team++, dupla[ssa] = true;

    ssa = "";

    ssa += arr[0][2];
    ssa += arr[1][1];
    ssa += arr[2][0];

    set<char> sb(ssa.begin(), ssa.end());

    ssa = string(sb.begin(), sb.end());

    if (sb.size() == 1 && solo[ssa] == false) ind++;
    if (sb.size() == 2 && dupla[ssa] == false) team++;


    cout << ind << "\n" << team << "\n";

    return 0;
}

