#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int k;
  	cin >> k;
  	vector<long long> a;
    // push_back使う時はi=0から入っていくのに注意
  	for(int i=1;i<=9;i++) a.push_back(i);
  	while (1) {
      // 新しく作った配列aのサイズが、減っていくk以上になるようにしていく
      if (k <= a.size()) {
          cout << a[k-1] << endl;
          // 出力したらプログラム終了
    	  return (0);
      }
      // kの方が大きい場合は古いaのサイズ分減らす
      k -= a.size();
      vector<long long> old;
      swap(a, old);
      // 古いaをもとに新しいlunlun数を空の配列にいれていく
      for (long long x : old) {
          for(int i=-1;i<=1;i++) {
              int d = x%10 + i;
              if (d < 0 || 9 < d) continue;
              long long nx = 10*x + d;
              //cout << nx << endl;
              a.push_back(nx);
          }
      }
	}
  
}
