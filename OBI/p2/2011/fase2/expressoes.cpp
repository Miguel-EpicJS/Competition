#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    string s;

    cin >> n;

    while(n--)
    {
	cin >> s;

	stack<char> st;

	for (auto i : s)
	{
	    if (st.empty())
	    {
		st.push(i);
	    }
	    else
	    {
		if (st.top() == '{' && i == '}')
		{
		    st.pop();
		}
		else if (st.top() == '[' && i == ']')
		{
		    st.pop();
		}
		else if (st.top() == '(' && i == ')')
		{
		    st.pop();
		}
		else
		{
		    st.push(i);
		}
	    }
	}

	if (st.empty())
	{
	    cout << "S\n";
	}
	else
	{
	    cout << "N\n";
	}
    }

    return 0;
}

