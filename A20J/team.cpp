#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++){
        int x1, x2, x3, sup = 0;
        cin >> x1 >> x2 >> x3;
        sup = x1 + x2 + x3;
        if (sup >= 2) ans ++;
    }

    cout << ans << endl;
}