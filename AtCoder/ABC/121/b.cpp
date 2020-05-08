#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n,m,c;
    cin >> n >> m >> c;
    vector<int> b(m);
    rep(i, m) cin >> b[i];
    int answer = 0;
    rep(i, n) {
        vector<int> a(m);
        rep(j, m) cin >> a[j];
        int total = 0;
        rep(j, m) {
            total += a[j] * b[j];
        }
        if (total + c > 0) answer++;
    }
    cout << answer << endl;
 }
