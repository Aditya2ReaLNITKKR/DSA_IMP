#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
   double averageWaitingTime(vector<vector<int>>& customers) {
       int n=customers.size();
       int curr_time=customers[0][0];
       double  waiting_time=0;
       for(int i=0;i<n;i++){

        if(curr_time>customers[i][0]){
            waiting_time+=(double)(curr_time -customers[i][0]+customers[i][1])/n;
            
        }
        else waiting_time+=((double)customers[i][1]/n);
        curr_time=customers[i][0]>curr_time?customers[i][0]+customers[i][1]:curr_time+customers[i][1];
       }
       return (double)waiting_time;
    }
};