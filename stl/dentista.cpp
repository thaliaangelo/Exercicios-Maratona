#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    queue<pair<int, int>> pacients;
    int ans = 1;

    for (int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        pacients.push({x, y});
    }

    int fa = pacients.front().second;
    pacients.pop();
    while(!pacients.empty()){
        int cp = pacients.front().first;
        if (cp >= fa){
            ans++;
            fa = pacients.front().second;
        }
        pacients.pop();
    }

    cout << ans << "\n";
}