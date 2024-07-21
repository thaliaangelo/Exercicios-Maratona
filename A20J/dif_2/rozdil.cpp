#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    set<long long> towns;
    long long min = 1e18;
    int ind = 0;

    for (int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        if (x < min){
            min = x;
            ind = i;
        }

        towns.insert(x);
    }

    int y = towns.size();

    if (y != n){
        cout << "Still Rozdil\n";
    } else {
        cout << ind << endl;
    }

}