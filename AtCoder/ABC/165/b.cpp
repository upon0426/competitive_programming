#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long x,year;
  	long long money = 100;
  
  	cin >> x;
  	for (year=0;money<x;year++) {
    	money *= 1.01;
    }
  	cout << year << endl;
  	
}