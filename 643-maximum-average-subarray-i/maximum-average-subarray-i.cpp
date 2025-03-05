#include<math.h>
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
//   unordered_set<int>v;

        int l=0;
        int r=0;
        double avg=0;
        double MaxAvg=INT_MIN;

        while(r<n){
    //  v.insert(nums[l]);
     avg=avg+nums[r];
    
      
     if(r-l+1==k){
        // v.erase(v[r-k]);
         MaxAvg=max(MaxAvg,avg);
        avg=avg-nums[l];
        l++;
     }
r++;
        }
        return (MaxAvg/k);
    }
};