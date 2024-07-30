#include <bits/stdc++.h>

using namespace std;

vector <int> adj[112345];
bool visited[112345];

void dfs (int v){
    visited[v] = true;
    for (auto u : adj[v]){
        if (visited[u]) continue;
        else dfs(u);
    }
}

int main(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int k = n - m - 1;
    int ans = 0;
    cout << k << endl;

    dfs(1);
    for (int i = 2; i <= n; i++){
        if (visited[i] == false){
            ans = i;
            break;
        }
    }

    cout << "1" << " " << ans << endl;

}