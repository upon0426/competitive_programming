#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int k,a,b;
  	cin >> k >> a >> b;
  	
  	if (a % k == 0 || b % k == 0) cout << "OK" << endl;
  	else if ((a / k + 1) * k > b) cout << "NG" << endl;
  	else cout << "OK" << endl;
}