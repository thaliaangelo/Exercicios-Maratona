#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<pair<long long, long long>> cities(n+1);

    for (int i = 1; i <= n; i++){
        long long x;
        cin >> x;
        cities[i].first = x;
        cities[i].second = i;
    }

    sort(cities.begin(), cities.end());

    bool same = false;
    for (int i = 1; i < n; i++){
        if (cities[i].first == cities[i + 1].first){ 
            same = true;
            break;
        }
    }

    if (same) cout << "Still Rozdil\n";
    else cout << cities[1].second << endl;



}