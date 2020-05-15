#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    // input
    int n, m, x;
    cin >> n >> m >> x;
    int a[12][12];
    vector<int> cost(n);
    rep (i, n) {
        cin >> cost[i];
        rep (j, m) cin >> a[i][j];
    }

    // compute
    vector<int> skill(m);
    int flag;
    int minNm = 10000000;
    int total;
    rep(s, 1<<n) {
        flag = 1;
        total = 0;
        rep(i, m) skill[i] = 0;
        rep(i, n) {
            if(s>>i&1) {
                rep(j, m) skill[j] += a[i][j];
                total += cost[i];
            }
        }
        rep(i, m) if (skill[i] < x) flag = 0;
        if (flag == 1) minNm = min(minNm, total);
    }
    if (minNm == 10000000) cout << -1 << endl;
    else cout << minNm << endl;

}