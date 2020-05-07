#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
typedef long long ll;

int main(void)
{
    int a,b;
    cin >> a >> b;
    int total = 1;
    int i = 0;
    while (total < b) {
        total += a - 1;
        i++;
    }
    cout << i << endl; 
}