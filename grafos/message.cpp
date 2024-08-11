#include <bits/stdc++.h>

using namespace std;

int n, m;
vector <int> adj[112345];
int dist[112345];
bool visited[112345];
queue <int> q;

void bfs(int x){
    visited[x] = true;
    dist[x] = 0;
    q.push(x);
    while(!q.empty()){
        int s = q.front(); q.pop();
        for (auto u : adj[s]){
            if (visited[u]) continue;
            visited[u] = true;
            dist[u] = dist[s]+1;
            q.push(u);
        }
    }

}

int main(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    memset(dist, -1, sizeof(dist));
    bfs(1);
    cout << dist[n]+1 << endl;
}