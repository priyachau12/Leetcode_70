#include <unordered_set>
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
 int n=nums.size();

//Here i have used 2 pointer approach but giving TLE
// for(int i=0;i<n;i++){
//     for(int j=n-1;j>=0;j--){


// if(nums[i]==nums[j] && abs(i-j)<=k && i!=j){
// return true;
// }
//     }

// }

// return false;


     //using Sliding window twchnique
unordered_set<int>s;
     for(int i=0;i<n;i++)  {
       if(s.find(nums[i])!=s.end()) return true;
       s.insert(nums[i]);
       if(s.size()>k){
        s.erase(nums[i-k]);
       }
     } 
     return false;
    }
};