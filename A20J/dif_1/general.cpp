#include <bits/stdc++.h>

using namespace std;

int arr[105];

int main(){
    int n;
    cin >> n;
    int max = 0;
    int min = 105;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] > max){
            max = arr[i];
        }

        if (arr[i] < min){
            min = arr[i];
        }

    }

    while(arr[0] != max || arr[n - 1] != min){
        
    }

}