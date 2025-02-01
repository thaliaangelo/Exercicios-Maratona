#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;

        if (a % 2 == 0 && b % 2 == 0) cout << "NO\n";
        else if (a == 1 && b == 1) cout << "NO\n";
        else cout << "YES\n";
    }
}