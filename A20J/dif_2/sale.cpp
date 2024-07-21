#include <bits/stdc++.h>

using namespace std;

int arr[103];

int main(){
    int n, m;
    cin >> n >> m;
    int ans = 0, cont = 0;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr + n);

    for (int i = 0; i < n; i++){
        if (arr[i] < 0 && cont < m){
            ans += arr[i];
            cont++;
        }
    }

    ans = abs(ans);

    cout << ans << endl;
    

}