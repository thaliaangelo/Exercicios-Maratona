#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    while(n--){
        set <string> compras;
        string s;
        while(cin >> s){
            compras.insert(s);
        }

        for (auto u: compras){
            cout << u << " ";
        }
        cout << endl;
    }
}