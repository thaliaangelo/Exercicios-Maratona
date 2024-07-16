#include <bits/stdc++.h>

using namespace std;

int nums[112345];

int main(){
    int n = 112345, app[n], ans = 0;
    for (int i = 0; i < n; i++){
        cin >> nums[i];
        app[nums[i]]++;
    }

    for (int i = 0; i < n; i++){
        if (app[i] == 1) ans = app[i];
    }

    cout << ans << endl;
}