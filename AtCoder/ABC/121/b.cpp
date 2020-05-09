#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    // input
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int answer = 0;
    vector<vector<int>> a(n, vector<int>(m));
    rep(i, n) {
        rep(j, m) cin >> a[i][j];
    }

    // compute
    int total;
    rep(i, n) {
        total = 0;
        rep(j, m) total += b[j] * a[i][j];
        if (total + c > 0) answer++;    
    }

    // output
    cout << answer << endl;
 }
