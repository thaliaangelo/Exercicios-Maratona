#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1e18;
vector <pair<ll, ll>> adj[1123456];
ll dist[1123456];
bool visited[112345];
int n, m;

void dijkstra(int x){
    priority_queue<pair<ll, ll>> q;
    for (int i = 1; i <= n; i++){
        dist[i] = INF;
    }
    dist[x] = 0;
    q.push({0, x});
    while(!q.empty()){
        ll a = q.top().second; q.pop();
        if (visited[a]) continue;
        visited[a] = true;
        for (auto u : adj[a]){
            ll b = u.first, w = u.second;
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

    cin >> n >> m;
    for (int i = 0; i < m; i++){
        ll u, v, w; cin >> u >> v >> w;
        adj[u].push_back({v, w});
    }

    dijkstra(1);

    for (int i = 1; i <= n; i++){
        cout << dist[i] << " ";
    }

    cout << endl;


}