#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    int n;
    string s;

    while(t--){
        cin >> n;
        cin >> s;

        int arr[5], ans = 0;
        memset(arr, 0, sizeof(arr));

        for (int i = 0; i < (4*n); i++){
            if (s[i] == 'A' && arr[1] < n){
                arr[1]++;
                ans++;
            } else if (s[i] == 'B' && arr[2] < n){
                arr[2]++;
                ans++;
            } else if (s[i] == 'C' && arr[3] < n){
                arr[3]++;
                ans++;
            } else if (s[i] == 'D' && arr[4] < n){
                arr[4]++;
                ans++;
            }
        }

        cout << ans << endl;
    }
}