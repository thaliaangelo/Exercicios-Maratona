#include <bits/stdc++.h>

using namespace std;

int adj[105][105];

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, k;
        cin >> a >> k;
        for(int j = 0; j < k; j++){
            int sup;
            cin >> sup;
            adj[a + 1][sup + 1] = 1;
        }

    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cout << adj[i][j] << " ";
        }

        cout << endl;
    }
}