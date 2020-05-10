#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    ll h, w;
    cin >> h >> w;
    // as bishop can not move at all
    if (h == 1 || w == 1) cout << 1 << endl;
    else cout << (h * w + 1) / 2 << endl;
}
