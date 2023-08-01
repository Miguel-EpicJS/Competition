#include <bits/stdc++.h>

using namespace std;

int n, m;

vector<int> g1[100001];
vector<int> g2[100001];

int g1s[100001], g2s[100001];


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n >> m;

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;
	g1[x].push_back(y);
	g1[y].push_back(x);
    }

    for (int i = 0; i < m-1; i++)
    {
	int x, y;
	cin >> x >> y;
	g2[x].push_back(y);
	g2[y].push_back(x);
    }

    return 0;
}

