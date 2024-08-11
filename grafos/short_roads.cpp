#include <bits/stdc++.h>

using namespace std;

const long long INF = 1e18;
long long adj[11234][11234];
long long dist[11234][11234];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m, q; cin >> n >> m >> q;

    for (int i = 0; i < m; i++){
        long long a, b, c; cin >> a >> b >> c;
        adj[a][b] = c;
        adj[b][a] = c;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (i == j) dist[i][j] = 0;
            else if (adj[i][j]) dist[i][j] = adj[i][j];
            else dist[i][j] = INF;
        }
    }

    for (int k = 1; k <= n; k++){
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                dist[i][j] = min(dist[i][j], dist[i][k]+dist[k][j]);
            }
        }
    }

    while(q--){
        long long x, y; cin >> x >> y;
        if (dist[x][y] == INF) cout << -1 << endl;
        else cout << dist[x][y] << endl;
    }
}