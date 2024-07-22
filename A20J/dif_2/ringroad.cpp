#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0;
    queue <int> houses;
    for (int i = 0; i < m; i++){
        int x;
        cin >> x;
        houses.push(x);
    }

    int at = 1;
    while(!houses.empty()){
        if (at != houses.front()){
            at++;
            ans++;
        } else {
            houses.pop();
        }

        if (at > n){
            at = 1;
        }
    }

    cout << ans << endl;
}