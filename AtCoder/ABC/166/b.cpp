#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;
    cin >> n >> k;
    map<int,int> mp;
    for (int i=0;i<k;i++) {
        int d;
        cin >> d;
        for (int j=0;j<d;j++) {
            int a;
            cin >> a;
            mp[a] = j;
        }
    }
    cout << n-mp.size() << endl;
}