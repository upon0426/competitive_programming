#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,m;
    cin >> n >> m;
    vector<int> heights(n);
    for (int i=0;i<n;i++) cin >> heights[i];
    map<int, vector<int>> mp;
    vector<int> length(m+1);
    for (int i=0;i<m+1;i++) length[i] = 0;
    for (int i=0;i<m;i++) {
        int  a,b;
        cin >> a >> b;
        mp[a].at(length.at(a)) = b;
        cout << "dest " << mp[a].at(length.at(a)) << "," ;
        length[a]++;
        mp[b][length[b]] = a;
        cout << "start " << mp[b][length[b]] << endl;
        length[b]++;
    }
    // debug
    for (auto itr=mp.begin();itr != mp.end(); ++itr) {
        cout << "key= " << itr->first << ", val= " << itr->second.size() << endl;
        for (int i=0;i<length[itr->first];i++) {
            cout << itr->second[i] << endl;
        }
    }
    
    // todo deal with same load
    int answer,maxflag;
    answer = 0;
    /*
    for (auto itr=mp.begin();itr != mp.end(); ++itr) {
        maxflag = 1;
        for (auto itr2=itr->second.begin();itr2 != itr->second.end(); ++itr2) {}
            int x = itr2;
            if (heights[itr->first] < heights[itr2]) {
                maxflag = 0;
                break;
            }
        }
        if (maxflag == 1) answer++;
    }
    */
    if (mp.size() < n) answer += n-mp.size();
    cout << answer << endl;
}