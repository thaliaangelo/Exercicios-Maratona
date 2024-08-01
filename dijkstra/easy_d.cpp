#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
int dist[1123456];
bool visited[1123456];
vector <pair<int, int>> adj[112345];
int v, k;

void dijkstra(int x){
    priority_queue<pair<int, int>> q;
    for (int i = 1; i <= v; i++){
        dist[i] = INF;
    }
    dist[x] = 0;
    q.push({0, x});
    while(!q.empty()){
        int a = q.top().second; q.pop();
        if (visited[a]) continue;
        visited[a] = true;
        for (auto u : adj[a]){
            int b = u.first, w = u.second;
            if (dist[a]+w < dist[b]){
                dist[b] = dist[a]+w;
                q.push({-dist[b], b});
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int t; cin >> t;
    while(t--){
        memset(visited, false, sizeof(visited));
        memset(dist, 0, sizeof(dist));
        cin >> v >> k;
        for (int i = 0; i < k; i++){
            int a, b, w; cin >> a >> b >> w;
            adj[a].push_back({b, w});
        }

        int p, q; cin >> p >> q;
        dijkstra(p);
        if (dist[q] != INF) cout << dist[q] << endl;
        else cout << "NO\n";

        for(int i = 1; i <= v; i++){
            adj[i].clear();
        }
    }

}