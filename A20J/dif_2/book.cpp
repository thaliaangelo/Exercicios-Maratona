#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[8];
    int ans = 0;

    for (int i = 1; i < 8; i++){
        cin >> arr[i];
    }

    int t = 1;
    while (n > 0){
        n -= arr[t];

        if (n <= 0){
            ans = t;
        }

        if (t >= 7){
            t = 1;
        } else {
            t++;
        }
        

    }

    cout << ans << endl;


}