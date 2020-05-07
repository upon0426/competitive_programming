#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c, d;
  	cin >> a >> b >> c >> d;
  	int answer = 0;
  	//int times = 2 * max(a/d,c/b);
  	for (int i=0;i<200;i++) {
    	c -= b;
      	if (c <= 0) {
          answer = 1;
          break;
        }
      	a -= d;
      
      	if (a <= 0) {
          answer = 0;
          break;
        }
    }
  
  	if (answer == 1) cout << "Yes" << endl;
  	else cout << "No" << endl;
  	
}
