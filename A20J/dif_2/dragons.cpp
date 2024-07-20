#include <bits/stdc++.h>

using namespace std;


int main(){
    int s, n;
    cin >> s >> n;
    bool win = false;
    vector<pair<int, int>> dragons(n);

    for(int i = 0; i < n; i++){
        cin >> dragons[i].first >> dragons[i].second;
    }    

    sort(dragons.begin(), dragons.end());  

    for (int i = 0; i < n; i++){
        if (s > dragons[i].first){
            s += dragons[i].second;
            win = true;
        } else {
            win = false;
        }
    }

    if (win) cout << "YES\n";
    else cout << "NO\n";

}