#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    // input
    vector<vector<int>> a(3, vector<int>(3));
    rep(i, 3) rep(j, 3) cin >> a[i][j];
    int n;
    cin >> n;
    vector<int> b(n);
    rep(i, n) cin >> b[i];

    // compute
    vector<vector<int>> bingo(3, vector<int>(3));
    rep(i,3) {
        rep(j, 3) {
            bingo[i][j] = 0;
            rep(b_index, n) {
                if (a[i][j] == b[b_index]) {
                    bingo[i][j] = 1;
                    break;
                }
            }
        }   
    }

    // horizon
    int correspond;
    rep (i, 3) {
        correspond = 1;
        rep (j, 3) {
            if (bingo[i][j] != 1) correspond = 0;
        }
        if (correspond == 1) {
            cout << "Yes" << endl;
            return (0);
        }
    }

    // vertical
    correspond = 0;
    rep (i, 3) {
        correspond = 1;
        rep (j, 3) {
            if (bingo[j][i] != 1) correspond = 0;
        }
        if (correspond == 1) {
            cout << "Yes" << endl;
            return (0);
        }
    }

    // diagonal 1
    correspond = 1;
    rep (i, 3) if (bingo[i][i] != 1) correspond = 0;
    if (correspond == 1) {
        cout << "Yes" << endl;
        return (0);
    }

    // diagonal 2
    correspond = 1;
    rep(i, 3) if (bingo[i][2-i] != 1) correspond = 0;
    if (correspond == 1) {
        cout << "Yes" << endl;
        return (0);
    }

    // output
    cout << "No" << endl;

    // debug
    //rep(i, 3) rep(j, 3) cout << a[i][j];
}
