#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int main(){
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> arr[i];
    }

    long long ans = arr[0] - 1;

    for (int i = 0; i < (m - 1); i++){
        if (arr[i] > arr[i + 1]){
            ans += (n - arr[i]) + arr[i + 1];
        } else if (arr[i] < arr[i + 1]){
            ans += arr[i + 1] - arr[i];
        }
    }

    cout << ans << endl;
}