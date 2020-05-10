#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    string a, b;
    cin >> a >> b;
    int number = stoi(a+b);

    int answer = 0;
    for (int i = 0;i * i<=number;i++) {
        if (i * i == number) answer = 1; 
    }
    if (answer) cout << "Yes" << endl;
    else cout << "No" << endl;
}
