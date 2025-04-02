class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n=nums.size();

        // vector<int>RightMax(n,0);
        // for(int i=n-2;i>0;i--){
        //     RightMax[i]=max( RightMax[i+1],nums[i-1]);
        // }

        vector<int> RightMax(n, 0);
        RightMax[n - 2] = nums[n - 1]; // Last valid k is n-1
        for (int i = n - 3; i >= 0; i--) {
            RightMax[i] = max(RightMax[i + 1], nums[i + 1]);
        }
         int maxLeft=nums[0];
          long long maxTriplet=0;

        for(int i=1;i<n;i++){
          maxLeft=max(maxLeft,nums[i]);
          maxTriplet=max(maxTriplet,(long long)(maxLeft-nums[i])*RightMax[i]);
        }
        return maxTriplet;
    }
};