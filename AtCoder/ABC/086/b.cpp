#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    string a, b;
    cin >> a >> b;
    vector<char> num;
    rep(i, a.size()) num.push_back(a[i]);
    rep(i, b.size()) num.push_back(b[i]);
    vector<int> nums;

    rep(i, num.size()) nums.push_back(num[i]-'0');

    int number = 0;
    rep(i, nums.size()) {
        number += nums[i];
        number *= 10;
    }
    number /= 10;
    int answer = 0;
    for (int i = 0;i * i<=number;i++) {
        if (i * i == number) answer = 1; 
    }
    if (answer) cout << "Yes" << endl;
    else cout << "No" << endl;
}
