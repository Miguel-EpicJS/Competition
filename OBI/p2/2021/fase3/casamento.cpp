#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    deque<char> a, b;

    string s1, s2;

    cin >> s1 >> s2;

    for (auto i : s1)
    {
	a.push_back(i);
    }

    for (auto i : s2)
    {
	b.push_back(i);
    }


    while(a.size() < b.size()) a.push_front(' ');
    while(b.size() < a.size()) a.push_front(' ');

    string f1="", f2="";
    
    while(!a.empty())
    {
	if (a.front() == ' ') f2.push_back(b.front());
	else if (b.front() == ' ') f1.push_back(a.front());
	else if (a.front() > b.front()) f1.push_back(a.front());
	else if (a.front() < b.front()) f2.push_back(b.front());
	else f1.push_back(a.front()), f2.push_back(b.front());
	a.pop_front();
	b.pop_front();
    }


    if (f1.size() == 0) f1 = "-1";
    if (f2.size() == 0) f2 = "-1";

    int a1 = stoi(f1), a2 = stoi(f2);

    if (a1 > a2) swap(a1, a2);

    cout << a1 << " " << a2 << "\n";

    return 0;
}

