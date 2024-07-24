#include <bits/stdc++.h>

using namespace std;

int arr[112345];

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        int n, x;
        cin >> n >> x;
        int som_menor = 0;
        int som_maior = 0;
        int qntd_igual = 0;
        
        for (int j = 0; j < n; j++){
            cin >> arr[j];
        }

        sort(arr, arr+n);

        for (int j = 0; j < n; j++){
            if (arr[j] < x){
                som_menor += x - arr[j];
            } else if (arr[j] >= x){
                qntd_igual++;
            } else {
                som_maior += arr[j] - x;
            }
        }

        int ans = qntd_igual + (som_menor - som_maior);

        cout << ans << endl;
    }
}