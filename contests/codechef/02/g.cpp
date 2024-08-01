#include <bits/stdc++.h>

using namespace std;

int G[112345];
vector <int> adj[112345];
bool visited[112345];

int gdc(int a, int b){
    if (a == 0) return b;
    return gdc(b%a, a);
}

void dfs(int u){
    visited[u] = true;
    for (auto v : adj[u]){
        if (visited[v] == false){
            dfs(v);
            G[v] = -1;
        } else{
            
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    int n, r;
    while(t--){
        cin >> n >> r;
        for (int i = 1; i <=n; i++){
            G[i] = 1;
        }
        for (int i = 0; i < (n-1); i++){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        for(int i = 1; i <= n; i++){
            cout << G[i] << " ";
        }
        cout << endl;

        for (int i = 0; i < (n-1); i++){
            adj[i].clear();
        }

    }
}