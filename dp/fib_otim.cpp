#include <bits/stdc++.h>

using namespace std;

long long value[112345];
bool processed[112345];

long long fib(int x){
    if (x == 0) return(0);
    else if (x == 1) return(1);
    else if (processed[x]) return(value[x]);
    processed[x] = true;
    value[x] = fib(x-1) + fib(x-2);
    return(fib(x-1) + fib(x-2));
}

int main(){
    cout << fib(50) << endl;
}