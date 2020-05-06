#include <bits/stdc++.h>
using namespace std;

int main () {
  int n,m;
  cin >> n >> m;
  vector<int> elects(n);
  for (int i=0;i<n;i++) cin >> elects.at(i);
  
  // sort
  sort(elects.begin(), elects.end());
  
  // total
  double total;
  for (int i=0;i<n;i++) total += elects.at(i);
  
  // conpare elects.at(m-1) and total/4M
  int criteria = 4 * m;
  //cout << elects.at(n-m) << " " << total << " " << criteria << endl; 
  if (elects.at(n-m) >= total / criteria) cout << "Yes" << endl;
  else cout << "No" << endl;
}
