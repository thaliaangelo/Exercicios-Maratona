#include <bits/stdc++.h>

using namespace std;

const int INF = 1e9;
vector <pair<int, int>> adj[112345];
int dist[1123];
bool visited[1123];

void dijkstra (int v){
    priority_queue <pair<int, int>> q;

    for (int i = 1; i <= 1000; i++){
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m; cin >> n >> m;
    for (int i = 0; i < m; i++){
        int a, b, w; cin >> a >> b >> w;
        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    int x; cin >> x;
    dijkstra(x);

    int min = 1e9;
    int max = 0;

    for (int i = 1; i <= n; i++){
        if (dist[i] > max && dist[i] != INF && dist[i] != 0) max = dist[i];
        else if (dist[i] < min && dist[i] != 0 && dist[i] != INF) min = dist[i];
    }

    int ans = max - min;
    cout << ans << endl;



}