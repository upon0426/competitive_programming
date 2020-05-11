#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    vector<int> a(n);
    rep (i, n) cin >> a[i];
    sort(a.begin(), a.end(), greater<>());
    rep(i, n) cout << a[i];
    int alice, bob;
    alice = 0;
    bob = 0;
    rep (i, n) {
        if (i%2==0) alice += a[i];
        else bob += a[i];
    }
    cout << alice - bob << endl;
}