#include <bits/stdc++.h>
using namespace std;

int main () {
  	long long int n, total;
   	cin >> n;
  	total = 0;
	for (int i = 1;i<=n;i++) {
    	if (i % 3 != 0 && i % 5 != 0) {
          total += i;
        }
    }
  	cout << total << endl;
}
