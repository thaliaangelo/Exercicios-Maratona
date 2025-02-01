#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int a, b;
        cin >> a >> b;

        if (a == 0 && b%2 == 1) cout << "NO\n";
        else if (a%2 == 1 && b == 0) cout << "NO\n";
        else if (a%2 == 1 && b%2 == 1) cout << "NO\n";
        else if (a%2 == 1 && b%2 == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}