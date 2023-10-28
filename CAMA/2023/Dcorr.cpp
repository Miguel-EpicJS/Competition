#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    vector<int> ans;
    while(n > 1){
        int x = n / 2;
        ans.push_back(x);
        n -= x;
    }
    reverse(ans.begin(), ans.end());
    cout << (int)ans.size() << endl;
    for(int x : ans) cout << x << " "; cout << endl;
}
