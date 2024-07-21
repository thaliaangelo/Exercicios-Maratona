#include <bits/stdc++.h>

using namespace std;

int arr[53];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++){
        int mx = 0;
        int ans = 0;
        int n;
        cin >> n;
        for (int j = 1; j <= n; j++){
            cin >> arr[j];
        }

        sort(arr+1, arr+1+n, greater<int>());

        for (int j = 0; j < n; j++){
            if (arr[j] >= mx){
                mx = arr[j];
                arr[j] = 0;
                ans++;
            }

        }

        if (ans % 2 == 0){
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

}