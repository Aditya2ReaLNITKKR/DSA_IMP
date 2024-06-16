#include<bits/stdc++.h>
using namespace std;

 class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int min=0;
        for(int i=0;i<seats.size();i++){
            min+=abs(students[i]-seats[i]);

        }
        return min;
    }
};