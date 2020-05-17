#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    if (n%10==3) cout << "bon" << endl;
    else if (n%10==2 || n%10==4 || n%10==5 || n%10==7 || n%10==9) cout << "hon" << endl;
    else cout << "pon" << endl;
}
