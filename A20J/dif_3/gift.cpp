#include <bits/stdc++.h>

using namespace std;

int tot[3];

int main(){
    int n; cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        sum += x;
        if (x == 100) tot[0]++;
        else tot[1]++;
    }

    if (sum % 2 == 0 && tot[0] % 2 == 0){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}