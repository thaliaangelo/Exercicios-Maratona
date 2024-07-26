#include <bits/stdc++.h>

using namespace std;

int arr[5050];

vector <int> visited;
vector <int> adj[5050];

void dfs(int v){
    visited[v] == 1;
    cout << v << " ";
    for (auto u : adj[v]){
        if (visited[u] == 0) dfs(u);
    }
}

int main(){
    int n;
    cin >> n;
    visited.assign(n+1, -1);

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        int x = arr[i];
        adj[x].push_back(arr[x]);
    }

    dfs(arr[1]);

    bool ans = false;

    for (auto u : visited){
        if (u > 1) ans = true;
    }

    if(ans) cout << "YES\n";
    else cout << "NO\n";
}