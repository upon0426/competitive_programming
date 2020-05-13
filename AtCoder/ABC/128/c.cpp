#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void) {
    
    // input
    int n, m;
    cin >> n >> m;
    vector<int> k(m);
    int s[12][12];
    rep(i, m) {
        cin >> k[i];
        rep(j, k[i]) cin >> s[i][j];
    }
    vector<int> p(m);
    rep(i, m) cin >> p[i];

    // compute
    int answer = 0;
    int ok;
    rep(a, (1<<n)) {
        ok = 1;
        rep(b, m) {
            rep (c, k[b]) if (!(c<<n&1)) ok = 0;
        }
        if (ok) answer++; 
    }
    cout << answer << endl;
}


