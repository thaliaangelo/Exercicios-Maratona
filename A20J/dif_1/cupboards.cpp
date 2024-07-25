#include <bits/stdc++.h>

using namespace std;

int arrl[2];
int arrr[2];

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        arrl[l]++;
        arrr[r]++;
    }

    int ans = min(arrl[0], arrl[1]) + min(arrr[0], arrr[1]);

    cout << ans << endl;
}