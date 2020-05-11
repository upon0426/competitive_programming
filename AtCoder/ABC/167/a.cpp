#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    string s, t;
    cin >> s >> t;
    int answer = 0;
    rep(i, s.size()) {
        if (s[i] != t[i]) answer = 1;
    }   
    if (answer) cout << "No" << endl;
    else cout << "Yes" << endl;
}
