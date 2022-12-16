#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n;

    cin >> n;

    stack<int> stack;
    
    stack.push(0);

    for (int i = 0; i < n; i++)
    {
	int x;
	cin >> x;

	if(x == 0)
	{
	    stack.pop();
	}
	else
	{
	    stack.push(x);
	}
    }

    int sum = 0;
    
    while (!stack.empty()) {
        sum += stack.top();
        stack.pop();
    }

    cout << sum << "\n";

    return 0;
}

