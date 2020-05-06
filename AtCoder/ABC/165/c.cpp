#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,q;
  	cin >> n >> m >> q;
  	long long max = 0;
  	vector<int> A(n);
	for (int i=0;i<n;i++) A[i]=1;
  	int index=1;
    int total = 0;


	for (A[0]=1;A[0]<m;A[0]++) {
		for (A[1]=A[0];A[1]<m;A[1]++) {
			for (A[2]=A[1];A[2]<m;A[2]++) {
				for (A[3]=A[2];A[3]<m;A[3]++) {
					for (A[4]=A[3];A[4]<m;A[4]++) {
						for (A[5]=A[4];A[5]<m;A[5]++) {
							for (A[6]=A[5];A[6]<m;A[6]++) {
								for (A[7]=A[6];A[7]<m;A[7]++) {
									for (A[8]=A[7];A[8]<m;A[8]++) {
										
									}
								}
							}
						}
					}
				}
			}
		}
	}

/*

  	for (int j=0;j<100000;j++) {
        // 数列の組み合わせをすべて実現
      	A[n-index] += j;
      	//if (A[n-index] > m) 
 
        // qiが条件を満たすか確認、満たす場合は総和に足す        
      	for (int i=0;i<q;i++) {
         	int a,b,c,d;
      		cin >> a >> b >> c >> d;
      		if (A[b]-A[a] == c) total += d;
   		}
  		if (max < total) max = total;
      
      	// 最後の組かチェック
        int lastFlag = 1;
    	for (int i=0;i<n;i++) {   	
            if (A[i] != m) lastFlag = 0; 
        }
      	if (lastFlag == 1) break;
    }
  	cout << max << endl; 

	  */	
}