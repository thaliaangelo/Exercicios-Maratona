#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long ans = 0;

    while (n > 0){
        int resto = n % 10;
        if (resto == 4 || resto == 7) ans++;
        n = n / 10;
    }

    if (ans == 4 || ans == 7){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}