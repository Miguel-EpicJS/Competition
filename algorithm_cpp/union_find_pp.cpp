#include <bits/stdc++.h>

using namespace std;

#define maxn 100000

int pai[maxn], h[maxn];

struct updt {

    int x, y;
    bool r;

};

stack<updt> st;

int find(int x)
{
    if (pai[x] == x) return x;
    return find(pai[x]);
}

void join(int x, int y)
{
    x = find(x);
    y = find(y);

    if (h[x] < h[y]) swap(x, y);

    updt u;
    u.x = x;
    u.y = y;
    u.r = (h[x] == h[y]);
    st.push(u);

    pai[y] = x;
    if (h[x] == h[y]) h[x]++;
}

void rollback()
{
    if (st.empty()) return;

    updt u = st.top();

    st.pop();

    pai[u.y] = 0;
    if (u.r == true) h[u.x]--;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    return 0;
}

