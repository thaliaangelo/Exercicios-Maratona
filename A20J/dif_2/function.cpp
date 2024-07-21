#include <bits/stdc++.h>

using namespace std;

int func(int x, int ar[]){
    if (x == 1){
        return (0);
    } else {
        swap(ar[x], ar[x - 1]);
        return(func(int (x - 1), int ar[]));
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n+1];
    for (int i = 1; i <= n; i++){
        arr[i] = i;
    }

    func(n, arr);

    for (int i = 1; i < n; i++){
        cout << arr[i] << " ";
    }

    cout << arr[n] << endl;

}