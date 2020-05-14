#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h1,h2;
  	cin >> n;
  	
  	h1 = n/500;
  	h2 = (n-h1*500)/5;
  	cout << h1 * 1000 + h2 * 5 << endl;
}
