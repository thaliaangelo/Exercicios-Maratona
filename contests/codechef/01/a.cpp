#include <bits/stdc++.h>

using namespace std;

int main(){
    int x, y;
    cin >> x >> y;

    if (x < y) cout << "INCREASED\n";
    else if (x > y) cout << "DECREASED\n";
    else cout << "SAME\n";
}