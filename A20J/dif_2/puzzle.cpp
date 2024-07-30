#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, m;
    cin >> n >> m;
    vector <int> value(m, 0);
    for (int i = 0; i < m; i++){
        int x; cin >> x;
        value[i] = x;
    }

    sort(value.begin(), value.end());

    int l = 0, r = n-1;
    int ans = 1e9;
    while(r < m){
        int cont = value[r] - value[l];
        if (cont < ans){
            ans = cont;
        }
        l++;
        r++;
    }

    cout << ans << endl;
}