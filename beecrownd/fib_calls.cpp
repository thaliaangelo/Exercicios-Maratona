#include <bits/stdc++.h>

using namespace std;

int fib(int x){
    if (x == 1){
        return(1);
    } else if (x == 0){
        return(0);
    } else {
        return(fib(x - 1) + fib (x - 2));
    }
}

int calls(int y){
    if (y == 1){
        return(1);
    } else if (y == 0){
        return(1);
    } else {
        return(2 + calls(y - 1) + calls(y - 2));
    }
}

int main(){
    cout << calls(4) << endl;

}