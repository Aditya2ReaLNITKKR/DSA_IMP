#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        vector<int>arr(n,1);
        for(int i=0;i<k;i++){
            for(int i=1;i<n;i++){
                arr[i]=(arr[i-1]%(int)(1e9+7)+arr[i]%(int)(1e9+7))%(int)(1e9+7);
            }
        }
        return arr[n-1]%(int)(1e9+7);
    }
};