#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main(){
    int n;
    cin >> n;

    if (n % 2 != 0){
        cout << "-1" << endl;
    } else {
        for (int i = 1; i <= n; i++){
            arr[i] = i;
        }

        int t = 1;
        while(t < n){
            swap(arr[t], arr[t + 1]);
            t += 2;
        }

        for(int i = 1; i <= n; i++){
            cout << arr[i] << " ";
        }

    }

}