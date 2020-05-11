#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    int total = 0;
    rep (i, k) {
        if (i < a) total += 1;
        else if (i < a + b) total += 0;
        else total -= 1;
    }
    cout << total << endl;
// 配列の大きさmax
}
