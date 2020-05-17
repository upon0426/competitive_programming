#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int k;
    string s;
    cin >> k >> s;
    if (s.size() > k)  {
        rep(i, k) cout << s[i];
        cout << "..." << endl;
        cout << endl;
    } else cout << s << endl;
}
