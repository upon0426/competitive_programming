#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
  	int isSeven = 0;
  	cin >> n;
  	
  	if ((n - (n / 10 * 10)) == 7) isSeven = 1;
  	if (((n - (n / 100 * 100)) / 10) == 7) isSeven  = 1;
  	if (n / 100 == 7) isSeven = 1;
  
    if (isSeven == 1)  cout << "Yes" << endl;
  	else cout << "No" << endl;
}
