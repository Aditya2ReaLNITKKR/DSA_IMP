#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
       int findWinningPlayer(vector<int>& skills, int k) {
        deque<pair<int,pair<int,int>>>q;
        for(int i=0;i<skills.size();i++){
            q.push_back({0,{i,skills[i]}});
        }
        if(k>=skills.size()-1){
            int maxi=0;
            for(int i=0;i<skills.size();i++){
                if(skills[i]>skills[maxi]){
                    maxi=i;
                }
            }
            return maxi;
        }
        while(true){
            auto q1=q.front();
            q.pop_front();
            auto q2=q.front();
            q.pop_front();
            if(q1.first==k)return q1.second.first+1;
        
           if(q1.second.second>q2.second.second){
            q.push_back(q2);
            q.push_front({q1.first+1,q1.second});
           }else{
             q.push_back(q1);
            q.push_front({q2.first+1,q2.second});
           }

        }

    }
};