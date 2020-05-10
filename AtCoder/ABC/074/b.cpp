#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n, k;
    cin >> n >> k;
    vector<int> loc(n);
    rep (i, n) cin >> loc[i];
    int total = 0;
    rep (i, n) total += min(loc[i], k-loc[i]);
    cout << total * 2 << endl;
}
