#include<bits/stdc++.h>
using namespace std;

long long solve (int N, int start, int finish, vector<int> Ticket_cost) {
   // Write your code here
    long long tot = 0;
    long long tot2 = 0;
    
    int temp = finish;
    
    finish = (start > finish ? start : finish);
    start = (temp < start ? temp : start);

    for (int i = 0; i < N; i++)
    {
	Ticket_cost.push_back(Ticket_cost[i]);
    }

    for (long long i = start-1; i < finish-1; i++)
    {
	tot += Ticket_cost[i];
    }
    

    for (long long i = start-1 + N -1; i >= finish-1; i--)
    {
	if (i == -1)
	{
	    i = N-1;
	}
	tot2 += Ticket_cost[i];
    }
    return (tot < tot2 ? tot : tot2); 
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    int start;
    cin >> start;
    int finish;
    cin >> finish;
    vector<int> Ticket_cost(N);
    for(int i_Ticket_cost = 0; i_Ticket_cost < N; i_Ticket_cost++)
    {
    	cin >> Ticket_cost[i_Ticket_cost];
    }

    long long out_;
    out_ = solve(N, start, finish, Ticket_cost);
    cout << out_;
}
