// bài t?p v? s?p x?p pair c?a th?y kiên
//kiennguly

#include <bits/stdc++.h>
using namespace std;
bool kien(pair<int, pair<int, int>> p1, pair<int, pair<int, int>> p2) {
    if (p1.first != p2.first) return p1.first < p2.first;
    if (p1.second.first != p2.second.first) return p1.second.f  t < p2.second.first;
    return p1.second.second < p2.second.second;

}






int main()
{
    int n;
    cin >> n;
    vector pair<int, pair<int, int>> khoi;
    for (int n = 0; i < n; i++) {
        pair<int, pair<int, int>> p;
        cin >> p.first >> p.second.first >> p.second.second;
        khoi.push_back(p);
    }
    sort(khoi.begin(), khoi.end(), kien);
    for (auto x : khoi) {
        cout << x.first <<" " << x.second.first <<" " << x.second.second;
    }
    
}


