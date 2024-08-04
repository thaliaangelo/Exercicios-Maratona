#include <bits/stdc++.h>

using namespace std;

int n;
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> n;
    for (int i = 0; i < (n-1); i++){
        int a, b; cin >> a >> b;
        adj[a].push_back(b);
    }

    //chamar bfs pro 1
    bfs(1);

    //achar a maior distancia do 1 e o vertice q é o mais distante
    int vert = 0, maior = 0;
    for (int i = 2; i <= n; i++){
        if (dist[i] > maior){
            maior = dist[i];
            vert = i;
        }
    }

    cout << maior << endl;

}