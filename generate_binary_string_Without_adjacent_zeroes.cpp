#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   int n;
   vector<string>ans;
    void solve(int i,char prev,string temp){
        if(i>n){
            ans.push_back(temp);
        }
        solve(i+1,'1',temp+'1');
        if(prev!='0')solve(i+1,'0',temp+'0');
    }
    vector<string> validStrings(int n) {
        solve(0,'-1',"");
        return ans;
    }
};