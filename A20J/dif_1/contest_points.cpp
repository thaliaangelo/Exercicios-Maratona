#include <bits/stdc++.h>

using namespace std;

int arr[1010];

int main(){
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++){
        int t = i;
        while(t >= 0){
            if (arr[i] > arr[t]) ans++;
            t--;
        }
    }

    for (int i = 1; i < n; i++){
        int t = i;
        while(t >= 0){
            if (arr[i] < arr[t]) ans++;
            t--;
        }
    }

    cout << ans << endl;

}