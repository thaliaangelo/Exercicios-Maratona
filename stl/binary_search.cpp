#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, q; cin >> n >> q;
    vector <int> numbers;

    for (int i = 0; i < n; i++){
        int x; cin >> x;
        numbers.push_back(x);
    }

    for (int i = 0; i < q; i++){
        int x; cin >> x;
            if (binary_search(numbers.begin(), numbers.end(), x)){
                auto it1 = numbers.begin();
                auto it2 = lower_bound(numbers.begin(), numbers.end(), x);
                cout << it2 - it1 << "\n";
            } else {
                cout << -1 << "\n";
            }
    }
}