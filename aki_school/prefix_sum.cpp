#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n], s[n];
    for (int i = 0; i < n; i++){
        a[i] = 0;
        s[i] = 0;
    }

    int soma = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        soma += x;
        a[i] = x;
        s[i] = soma;
    }

}