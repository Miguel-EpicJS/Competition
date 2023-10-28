#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s1;

    cin >> s1;

    if (s1 == "Spock") cout << "Pertenece a Star Trek.";
    else if (s1 == "Yoda") cout << "Pertenece a Star Wars.";
    else cout << "No pertenece a Star Wars ni a Star Trek.";

    cout << "\n";

    return 0;
}

