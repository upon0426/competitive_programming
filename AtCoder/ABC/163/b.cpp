#include <bits/stdc++.h>
using namespace std;

int main () {
	int N,M;
  	cin >> N >> M;
  	for(int i = 0;i<M;i++) {
    	int	a;
      	cin >> a;
      	N -= a;
    }
  	int answer = 0;
  	if (N < 0) answer = -1;
  	else answer = N;
  	cout << answer << endl;
}
