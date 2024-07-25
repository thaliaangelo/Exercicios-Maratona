#include <bits/stdc++.h>

using namespace std;

int arr[5050];

vector <int> adj[5050];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++){
        int x = arr[i];
        adj[x].push_back(arr[x]);
    }

}