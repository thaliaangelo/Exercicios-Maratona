#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    bool eh_primo = false;

    for (int i = 2; i < m; i++){
        if (m % i == 0 && eh_primo == false){
            eh_primo = true;
        }
    }

    if (eh_primo == false && m > n){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}