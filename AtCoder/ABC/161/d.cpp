#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int k;
    cin >> k;
    vector<long long> a;
    for (int i=1;i<=9;i++) a.push_back(i);
    while (1) {
        if (k <= a.size()) {
            cout << a[k-1] << endl;
            return (0);
        }
        k -= a.size();
        vector<long long> old;
        swap(a,old);
        for (long long x : old) {
            for (int i=-1;i<=1;i++) {
                int d = x % 10 + i;
                if (d < 0 || 9 < d) continue;
                long long nx = 10 * x + d;
                a.push_back(nx);
            }
        }
    }
}