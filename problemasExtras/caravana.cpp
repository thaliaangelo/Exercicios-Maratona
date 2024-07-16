#include <bits/stdc++.h>

using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    int N, sum = 0, x; cin >> N;
    vector <int> weights;

    for (int i = 0; i < N; i++){
        cin >> x;
        weights.push_back(x);
        sum += x;
    }

    sum = sum / N;

    for (int i = 0; i < weights.size(); i++){
        cout << sum - weights[i] << endl;
    }
}