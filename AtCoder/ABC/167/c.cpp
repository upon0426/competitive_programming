#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

const int INF = 101001001;

int a[12][12];

int main(void)
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> c(n);
    rep(i, n) {
        cin >> c[i];
        rep(j,m) cin >> a[i][j];
    }
    
    int ans = INF;
    // n番目のフラグが立つまで
    for (int s;s< (1<<n);s++) {
        int cost = 0;
        vector<int> d(m);
        rep(i, n) {
            //　ビットsにi番目のフラグがたっているか
            if (s>>i&1) {
                cost += c[i];
                rep(j,m) d[j] += a[i][j];
            }
        }
        bool ok = true;
        rep(j,m) if (d[j] < x) ok = false;
        if (ok) ans = min(ans, cost);
    }
    if (ans == INF) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}
