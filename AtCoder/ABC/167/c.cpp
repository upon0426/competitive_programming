#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n, m, x;
    cin >> n >> m >> x;
    vector<vector<int>> books(n, vector<int>(m+1));
    rep (i, n) rep (j, 1 + m) cin >> books[i][j];
    
    int total = 0;
    ll min = 10000001;
    vector<int> abil(m);
    int achieve;

    rep(a,2){
        rep(b,2) {
            rep(c,2) {
                rep(d,2) {
                    rep(e, 2) {
                        rep(f, 2) {
                            rep(g,2) {
                                rep(h,2) {
                                    rep(i,2) {
                                        rep(j,2) {
                                            rep(k,2) {
                                                rep(l,2) {
                                                    achieve = 1;
                                                    total = 0;
                                                    rep(y,m) abil[y] = 0;
                                                    if (a==1 && n >= 1) {
                                                        rep(y,m) abil[y] += books[0][y+1];
                                                        total += books[0][0];
                                                    }
                                                    if (b==1 && n >= 2) {
                                                        rep(y,m) abil[y] += books[1][y+1];
                                                        total += books[1][0];
                                                    }
                                                    if (c==1 && n >= 3) {
                                                        rep(y,m) abil[y] += books[2][y+1];
                                                        total += books[2][0];
                                                    }     
                                                    if (d==1 && n >= 4) {
                                                        rep(y,m) abil[y] += books[3][y+1];
                                                        total += books[3][0];
                                                    } 
                                                    if (e==1 && n >= 5) {
                                                        rep(y,m) abil[y] += books[4][y+1];
                                                        total += books[4][0];
                                                    }              
                                                    if (f==1 && n >= 6) {
                                                        rep(y,m) abil[y] += books[5][y+1];
                                                        total += books[5][0];
                                                    }        
                                                    if (g==1 && n >= 7) {
                                                        rep(y,m) abil[y] += books[6][y+1];
                                                        total += books[6][0];
                                                    }
                                                    if (h==1 && n >= 8) {
                                                        rep(y,m) abil[y] += books[7][y+1];
                                                        total += books[7][0];
                                                    }
                                                    if (i==1 && n >= 9) {
                                                        rep(y,m) abil[y] += books[8][y+1];
                                                        total += books[8][0];
                                                    }
                                                    if (j==1 && n >= 10) {
                                                        rep(y,m) abil[y] += books[9][y+1];
                                                        total += books[9][0];
                                                    }
                                                    if (k==1 && n >= 11) {
                                                        rep(y,m) abil[y] += books[10][y+1];
                                                        total += books[10][0];
                                                    }
                                                    if (l==1 && n >= 12) {
                                                        rep(y,m) abil[y] += books[11][y+1];
                                                        total += books[11][0];
                                                    }
                                                    rep(y, m) if (abil[y]<x) achieve = 0;
                                                    if (achieve==1 && total < min) min = total;     
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    
    if (min == 10000001) cout << -1 << endl;
    else cout << min << endl;


}
