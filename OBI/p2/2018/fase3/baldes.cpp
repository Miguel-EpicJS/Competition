#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int mini, maxi, ans;
};

Node join(Node const& a, Node const& b)
{
    return {min(a.mini, b.mini),
            max(a.maxi, b.maxi),
            max({a.ans, b.ans, abs(a.maxi-b.mini), abs(b.maxi-a.mini)})};
}

const int maxn = 101010;

int v[maxn];
Node tree[maxn*4];

void build(int no, int l, int r)
{
    if (l == r) {
        tree[no].mini = tree[no].maxi = v[l];
        return;
    }

    int m = (l+r)/2;

    build(no*2+1, l, m);
    build(no*2+2, m+1, r);

    tree[no] = join(tree[no*2+1], tree[no*2+2]);
}

Node get(int no, int l, int r, int a, int b)
{
    if (a <= l and r <= b) return tree[no];

    int m = (l+r)/2;

    if (b <= m) return get(no*2+1, l, m, a, b);
    if (a > m) return get(no*2+2, m+1, r, a, b);

    return join(get(no*2+1, l, m, a, b),
                get(no*2+2, m+1, r, a, b));
}

void upd(int no, int l, int r, int pos, int val)
{
    if (l == r) {
        tree[no].mini = min(tree[no].mini, val);
        tree[no].maxi = max(tree[no].maxi, val);
        return;
    }
    int m = (l+r)/2;

    if (pos <= m) upd(no*2+1, l, m, pos, val);
    else upd(no*2+2, m+1, r, pos, val);
}

int main()
{  
    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; i++)
        cin >> v[i];

    build(0, 1, n);

    while (q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int val, pos;
            cin >> val >> pos;

            upd(0, 1, n, pos, val);
        }
        else {
            int l, r;
            cin >> l >> r;

            cout << get(0, 1, n, l, r).ans << "\n";
        }
    }
}

// https://github.com/pagodepaiva/Noic/blob/main/baldes.cpp
