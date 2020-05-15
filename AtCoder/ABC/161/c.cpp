#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
	ll n, k;
	cin >> n >> k;
	if (n%k == 0) cout << 0 << endl;
	else cout << min(n, abs(k-n%k)) << endl;
}
