#include <bits/stdc++.h>

using namespace std;

int fat(int N){
    int ans;
    if (N == 0){
        ans = 1;
    } else if (N == 1){
        ans = 1;
    } else if (N == 2){
        ans = 2;
    } else {
        ans = N * fat(N - 1);
    }

    return(ans);
}

int main(){
    int N; cin >> N;
    cout << fat(N) << endl;
}