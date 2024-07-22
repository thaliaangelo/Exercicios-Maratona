#include <bits/stdc++.h>

using namespace std;

const int N = 112345;
vector <int> adj[N];
bool visited[N + 1];

void dfs(int v){
    if (visited[n]) return;
    visited[n] = true;
    for (auto x : adj[n]){
            dfs(x);
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    int edges = 0;
    int ans = 0;

    for (int i = 0; i < m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        edges++;
    }

        if (edges < (n - 1)){
            ans = (n - 1) - edges;
            
        }


}