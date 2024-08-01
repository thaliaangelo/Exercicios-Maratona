#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
const ll INF = 1e18;
ll n, m;
vector <pair<ll, ll>> adj[1123456];
bool visited[1123456];
ll dist[1123456];

void dijkstra(int x){
    priority_queue<pair<ll, ll>> q;
    for (int i = 1; i <= n+1; i++){
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
        ll a, b, w; cin >> a >> b >> w;
        adj[a].push_back({b, w});
    }

    dijkstra(0);
    ll ans = dist[n+1];
    cout << ans << endl;
}