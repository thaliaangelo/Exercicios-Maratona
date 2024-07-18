#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int in = 0, ans = 0;

    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        if (in == 0){
            in = b;
        } else {
            in = (in - a) + b;
        }
        ans = max(ans, in);
    }

    cout << ans << endl;
}