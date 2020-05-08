#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n, a, z;    
    cin >> n;
    a = 100;
    z = 0;
    vector<int> xs;
    rep (i, n) {
        int x;
        cin >> x;
        xs.push_back(x);
        if (x > z) z = x;
        if (x < a) a = x;
    }
    int min_total = 10000 * z;
    for (int i=a;i<=z;i++) {
        int total = 0;
        for (int x : xs) {
            total += abs(i-x) * abs(i-x);
        }
        if (total < min_total) min_total = total;
    }
    cout << min_total << endl;
}
