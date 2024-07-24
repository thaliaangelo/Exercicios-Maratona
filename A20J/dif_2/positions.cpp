#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, a, b;   
    cin >> n >> a >> b;
    int ans = 0;

    for (int i = 1; i <= n; i++){
        int x = i - 1;
        int y = n - i;
        if (x >= a && y <= b) ans++;
    }
    
    cout << ans << endl;

}