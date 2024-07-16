#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    set<int> frequency;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        frequency.insert(x);        
    }

    cout << frequency.size() << "\n";
}