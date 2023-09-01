#include <bits/stdc++.h>

using namespace std;

vector<int> blue[100001], red[100001];

int dblue[100001], dred[100001];
int pblue[100001], pred[100001];

int n1=0;

void findblue(int src, int fats, int dist)
{
    dblue[src] = dist;
    pblue[src] = fats;

    if (dblue[n1] < dblue[src]) n1 = src;

    for (auto i : blue[src])
    {
	if (i != fats) findblue(i, src, dist+1);
    }
}


void findred(int src, int fats, int dist)
{
    dred[src] = dist;
    pred[src] = fats;

    if (dred[n1] < dred[src]) n1 = src;

    for (auto i : red[src])
    {
	if (i != fats) findred(i, src, dist+1);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n-1; i++)
    {
	int x, y;
	cin >> x >> y;
	blue[x].push_back(y);
	blue[y].push_back(x);
    }
    for (int i = 0; i < m-1; i++)
    {
	int x, y;
	cin >> x >> y;
	red[x].push_back(y);
	red[y].push_back(x);
    }

    findblue(1, 0, 0);
    findblue(n1, 0, 0);

    int x = 0;
    while(x <= dblue[n1]/2)
    {
	n1 = pblue[n1];
	x++;
    }

    cout << n1 << " ";
 
    findred(1, 0, 0);
    findred(n1, 0, 0);
   

    x = 0;
    while(x <= dred[n1]/2)
    {
	n1 = pred[n1];
	x++;
    }
    
    cout << n1 << "\n";

    return 0;
}

