#include <bits/stdc++.h>

using namespace std;

int main(){
    int k;
    cin >> k;
    int ans = 0;
    int arr[12];

    for (int i = 0; i < 12; i++){
        cin >> arr[i];
    }

    sort (arr, arr+12);

    int sup = 0;
    int t = 0;

    while(sup < k){
        sup += arr[t];
        ans++;
        if (t > 11 && sup < k){
            sup = k + 1;
            ans = -1;
        }
        t++;
    }

    cout << ans << endl;
}