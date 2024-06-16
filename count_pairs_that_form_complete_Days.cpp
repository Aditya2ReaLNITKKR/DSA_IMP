#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
#define mod 24
class Solution {
public:
    long long countCompleteDayPairs(vector<int>& hours) {
       unordered_map<int,int>mp;
       long long cnt=0;
       for(int i=0;i<hours.size();i++){
         cnt+= mp[(24-hours[i]%mod)%mod];
         mp[hours[i]%24]++;

       }
       return cnt;

    }
};