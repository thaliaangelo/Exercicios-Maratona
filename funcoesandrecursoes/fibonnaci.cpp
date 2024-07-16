#include <bits/stdc++.h>

using namespace std;

int fib(int N){
    int ans;
    if (N == 0){
        ans = 1;
    } else if (N == 1){
        ans = 1;
    } else {
        ans = fib(N - 1) + fib (N - 2);
    }

    return(ans);
}


int main(){
    int N; cin >> N;
    cout << fib(N) << endl;
}