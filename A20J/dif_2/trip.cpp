#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    int arr[12];
    int sum = 0;

    for (int i = 0; i < 12; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    if (sum < k){
        cout << "-1\n";
    } else {
        sort(arr, arr+12, greater<int>());
        
        int ans = 0;
        int sum_at = 0;

        for (int i = 0; sum_at < k; i++){
            sum_at += arr[i];
            ans++;
        }

        cout << ans << endl;
    }
}