#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int n;
    cin >> n;
    vector<int> d(n);
    rep(i, n) cin >> d[i];
    sort(d.begin(), d.end());
    int answer;
    if (d[n/2-1] == d[n/2]) answer = 0;
    answer = d[n/2] - d[n/2-1];
    cout << answer << endl;
}
