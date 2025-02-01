#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int h, l, w; cin >> h >> l >> w;
        int ans = 0, area = 0;
        area = 2 * (h*l + h*w + w*l);
        ans = 1000 / area;
        cout << ans << endl;
    }
}