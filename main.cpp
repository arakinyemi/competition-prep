#include <bits/stdc++.h>

using namespace std;


vector<int>adj[1000];
vector<bool>visited(1000);
int n;
int co = 0;
void dfs(int s){
    if(visited[s]) return ;
    visited[s] = true;
    for(auto u : adj[s]){
        dfs(u);
    }
}

int findComponents (){
    for(int i = 1; i <= n; i++){
            if(!visited[i]){
                co++;
                dfs(i);
        }
    }
    return co;
}
int main()
{
    int m, u, v, start, comp;
    cout<<"Enter the number of nodes: ";
    cin >> n;
    cout<<"Enter the number of edges: ";
    cin >> m;
    for(int i = 0; i < m; i++){
        cout<<"Enter nodes for edge #"<<i+1<<": ";
        cin >> u >> v;
        adj[u].push_back(v);
    }
    comp = findComponents();
    cout<<comp;
    return 0;
}
