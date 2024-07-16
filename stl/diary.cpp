#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n; cin >> n;
    map<string, int> freq;

    for (int i = 0; i < n; i++){
        string s; cin >> s;
        if (freq[s] == 0){
            cout << "NO" << "\n";
        } else {
            cout << "YES" << "\n";
        }
        freq[s]++;
    }
}