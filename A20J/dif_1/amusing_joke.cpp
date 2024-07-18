#include <bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    string total;
    total = total + s1 + s2;

    sort(total.begin(), total.end());
    sort(s3.begin(), s3.end());

    if (total == s3){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}