#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t; cin >> t;
    int n;
    while(t--){
        cin >> n;
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        bool equal = false;
        for (int i = 0; i < n; i++){
            if (arr[i] == arr[i+1]) equal = true;
            else equal = false;
        }

        if (equal){
            cout << "YES\n";
        } else {
            bool difer = false;
            for (int i = 0; i < n; i++){
                if (arr[i] != 0 && arr[i] != arr[i+1] && arr[i+1] != 0){
                    difer = true;
                }
            }
            if (difer) cout << "NO\n";
            else cout << "YES\n";
        }
    }
}