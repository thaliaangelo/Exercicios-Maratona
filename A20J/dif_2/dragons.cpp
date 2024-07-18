#include <bits/stdc++.h>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    bool win = true;
    pair<int, int> dragon;

    for (int i = 0; i < n; i++){
        cin >> dragon.first >> dragon.second;
    }

    sort(dragon.first, dragon.first+n);

    if (win){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}