#include <bits/stdc++.h>

using namespace std;

vector<int> gear;

int main(){
    int n;
    cin >> n;
    int arr_p[n];
    for (int i = 0; i < n; i++){
        cin >> arr_p[i];
    }

    int m;
    cin >> m;

    int arr_r[m];
    for (int i = 0; i < m; i++){
        cin >> arr_r[i];
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (arr_r[i] % arr_p[j] == 0){
                int x = arr_r[i]/arr_p[j];
                gear.push_back(x);
            }
        }
    }

    sort(gear.begin(), gear.end(), greater<int>());

    int max = gear.front();
    int p = gear.size();

    int ans = 1;

    for (int i = 1; i < p; i++){
        if (gear[i] == max) ans++;
    }

    cout << ans << endl;

}