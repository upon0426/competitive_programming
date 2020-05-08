#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    // don't forget when i = n 
    for (int i=1;i<=n;i++) {
        // point : use only int to express tax
        if (i * 108 / 100 == n) {
            cout << i << endl;
            return (0);
        }  
    }
    cout << ":(" << endl;
}
