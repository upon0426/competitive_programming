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
    ll answer = 0;
    int count = 0;
    int ok;
    rep(a, 1<<n) {
        // 全てのon offの組み合わせをつくる
        ok = 1;
        // 電球毎にチェック
        rep(b, m) {
            count = 0;
            // スイッチの個数チェック
            rep (c, k[b]) if (a>>s[b][c]&1) {
                //cout << " " << c << ":" << count << endl;
                count++;
            }  
            if (count%2 != p[b]) ok = 0;
            //cout << " " << count << " " << p[b] << endl;  
        }
        if (ok) answer++; 
        // debug
        if (ok) {
        cout << a << ":" << ok;
        rep(b, m) cout << " " << (a>>b&1);
        cout << endl;
        }
        
    }
    cout << answer << endl;
}


