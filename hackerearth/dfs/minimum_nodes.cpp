#include<bits/stdc++.h>
#define ll long long
using namespace std;
int val[100005],n,q,r,k;
vector<int>v[100005];
bool vis[100005];
int fin=100005;
void init()
{
    fin=100005;
    for(int i=1;i<=100000;i++)vis[i]=0;
}
void dfs(int r,int value,int cnt)
{
    if(value-val[r]<=0){fin=min(fin,cnt+1);return;}
    vis[r]=1;cnt++;bool f=0;
    for(auto i:v[r])
    {
        if(vis[i])continue;
        dfs(i,value-val[r],cnt);
    }
}
int main()
{   
    cin>>n>>q;
    for(int i=1;i<=n;i++)cin>>val[i];
    for(int i=1;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[y].push_back(x);
        v[x].push_back(y);  
    }
    while(q--)
    {
        init();
        cin>>r>>k;
        dfs(r,k,0);
        cout<<fin<<"\n";
    }
    return 0;
}
