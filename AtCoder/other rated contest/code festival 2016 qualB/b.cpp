#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n, a, b;
    int a_index = 0;
    int b_index = 0;
    cin >> n >> a >> b;
    string attends;
    cin >> attends;
    rep (i, n) {
        if (attends[i] == 'c') cout << "No" << endl;
        else if (attends[i] == 'a') {
            if (a_index + b_index < a + b) {
                cout << "Yes" << endl;
                a_index++;
            } else cout << "No" << endl;
        }else {
            if (a_index + b_index < a + b && b_index < b) {
                cout << "Yes" << endl;
                b_index++;
            } else cout << "No" << endl;
        }
    }

}
