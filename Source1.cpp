// bài t?p v? lowerbound và upperbound c?a th?y kiên
//kiennguly

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    auto kien = lower_bound(a, a + n, x);
    if (kien != a + n) {
        cout << kien - a;
    }
    else {
        cout << "-1\n";
    }
    auto khoi = upper_bound(a, a + n, x);
    if (khoi != a + n) {
        cout << khoi - a;
    }
    else {
        cout << "-1\n";
    }
    cout << khoi - kien;




    return 0;
}


