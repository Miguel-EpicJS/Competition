#include<bits/stdc++.h>
using namespace std;

vector<int> funGame (vector<int> arr) {
   // Write your code here
   int n = arr.size();
   stack<int> A, B;
   for (int i = 0; i < n; i++)
   {
      A.push(arr[n-i-1]);
      B.push(arr[i]);
   }
   vector<int> result;
   while (!A.empty() && !B.empty())
   {
      int x = A.top();
      int y = B.top();
      if (x > y)
      {
         result.push_back(1);
         B.pop();
      }
      else if ( x < y)
      {
         result.push_back(2);
         A.pop();
      }
      else
      {
         result.push_back(0);
         B.pop();
         A.pop();
      }
   }
   return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i_arr=0; i_arr<n; i_arr++)
    {
    	cin >> arr[i_arr];
    }

    vector<int> out_;
    out_ = funGame(arr);
    cout << out_[0];
    for(int i_out_=1; i_out_<out_.size(); i_out_++)
    {
    	cout << " " << out_[i_out_];
    }
}
