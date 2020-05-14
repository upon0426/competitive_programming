#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int k, n;
    cin >> k >> n;
    vector<int> a(2*n);
    rep(i, n) cin >> a[i];
    rep(i, n) a[i+n] = a[i] + k;
    int answer = k;
    rep (i, n) {
        if (a[i+n-1] - a[i] < answer) answer = a[i+n-1] - a[i];
    }
    cout << answer << endl;

}