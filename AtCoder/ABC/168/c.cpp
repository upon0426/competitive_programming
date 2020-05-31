#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int a, b, h, m;
    cin >> a >> b >> h >> m;
    
    cout << fixed;
    // compute
    // 時間から角度を求める
    long double hh = 30 * (h % 12) + 0.5 * m;  
    long double mm = 6 * m;
    long double kakudo = abs(hh-mm);
    if (kakudo > 180) kakudo -= 180;
    else if (kakudo == 180) {
        cout << 0 << endl;
        return (0);
    }
    //debug
    //cout << hh << " " << mm << endl;

    // output
    static const double pi = acos(-1);
    long double coskakudo = cos(kakudo / 180.0 * pi);
    // debug
    //cout << coskakudo << endl;

    cout << setprecision(20) << sqrt(a*a + b*b - 2*a*b*coskakudo) << endl;

}
