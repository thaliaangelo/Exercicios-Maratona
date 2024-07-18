#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main(){
    int n;
    cin >> n;
    int max = 0;
    int min = 105;
    int ind_min = 0, ind_max = 0, ans = 0;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
            ind_max = i;
        }

        if (arr[i] < min){
            min = arr[i];
            ind_min = i;
        }
    }

    cout << min << " " << max << endl;
    cout << ind_min << " " << ind_max << endl;

    while(arr[0] != max || arr[n - 1] != min){
        if (ind_min <= n){
            ind_min++;
            ans++;
        }

        if (ind_max >= 0){
            ind_max--;
            ans++;
        }

        cout << ind_min << " " << ind_max << endl;

    }

    cout << ans << endl;

}