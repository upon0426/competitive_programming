#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    if (n < 2) cout << 1 << endl;
    else if (n < 4) cout << 2 << endl;
    else if (n < 8) cout << 4 << endl;
    else if (n < 16) cout << 8 << endl;
    else if (n < 32) cout << 16 << endl;
    else if (n < 64) cout << 32 << endl;
    else if (n <= 100) cout << 64 << endl;
}