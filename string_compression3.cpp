#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int maxi=*max_element(begin(nums),end(nums));
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int cnt=0;
        for(int i=0;i<maxi+nums.size();i++){
            if(mp[i] && mp[i]>1){
                mp[i+1]+=(mp[i]-1);
                cnt+=(mp[i]-1);
            }
        }
        return cnt;
    }
};
