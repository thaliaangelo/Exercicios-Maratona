#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        cin >> arr[n];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int x;
        cin >> x;

        int ans_v = 0;
        int ans_p = 0;

        for (int j = 0; j < n; j++){
            if (x != arr[j]) ans_v++;
            else break;
        }

        for (int j = (n - 1); j > 0; j--){
            if (x != arr[j]) ans_p++;
            else break;
        }

        cout << ans_v << " " << ans_p << endl;
    }


}