#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int N, K, x, d;
    cin >> N >> K;
    d = 0;
    for (int i = 0; i < N; i++) {
        cin >> x;
        int tmp = min(K-x,x);
        d += tmp;
    }
    d *= 2;
    cout << d << endl;
}
