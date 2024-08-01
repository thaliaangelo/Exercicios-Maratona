#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int cuboid = a * b * c;
    int cube = x * x * x;
    if (cuboid > cube) cout << "Cuboid\n";
    else if (cuboid < cube) cout << "Cube\n";
    else cout << "Equal\n";
}