#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
vector <pair<int, int>> adj[220];
bool visited[65];
int dist[65];
int soma_min[65];

void dijkstra (int v){
    priority_queue <pair<int, int>> q;
    for (int i = 1; i <= 65; i++){
        dist[i] = INF;
    }
    dist[v] = 0;
    q.push({0, v});
    while(!q.empty()){
        int a = q.top().second; q.pop();
        if (visited[a]) continue;
        visited[a] = true;
        for (auto u : adj[a]){
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b]){
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }


}
int main(){
    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    int ans = INF;

    for (int i = 1; i <= n; i++){
        dijkstra(i);
        int sum = 0;
        for (int j = 1; j <= n; j++){
            sum += dist[j];
        }
        ans = min(sum, ans);
    }

    cout << ans << endl;


    
}