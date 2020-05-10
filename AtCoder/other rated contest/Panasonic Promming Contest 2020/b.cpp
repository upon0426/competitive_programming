#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    ll h, w;
    cin >> h >> w;
    ll area = h * w;
    if (h == 1 || w == 1) cout << 1 << endl;
    else if (area % 2 == 0) cout << area / 2 << endl;
    else cout << area / 2 + 1 << endl;
}
