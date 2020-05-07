#include <bits/stdc++.h>
using namespace std;

int	gcd(int a, int b) {
	if (b==0) return(a);
  	return(gcd(b,a%b));
}

int main () {
	int k;
  	cin >> k;
    int ans = 0;
  	for (int i=1;i<=k;i++) {
    	for (int j=1;j<=k;j++) {
        	for (int l=1;l<=k;l++) {
              int c;
              if (i < j) c = gcd(j,i);
              else c = gcd(i,j);
			  if (c < l) ans += gcd(l,c);
              else ans += gcd(c, l);
            }
        }
    }
  cout << ans << endl;
  	
}
