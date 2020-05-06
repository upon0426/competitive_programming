#include <bits/stdc++.h>
using namespace std;

int main () {
	long long n,k;
  	cin >> n >> k;
  	long long a = n % k;
  	long long  d = abs(a-k);
  	cout << min(a,d) << endl;
}
