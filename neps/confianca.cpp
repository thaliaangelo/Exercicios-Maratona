#include <bits/stdc++.h>

using namespace std;

vector <int> adj[1123];

int main(){
    int n, r;
    cin >> n >> r;
    int x = r;

    while(r--){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
    }

    int edge = (n * (n - 1))/2;
    int ans = edge - x;

    cout << ans << endl;


}