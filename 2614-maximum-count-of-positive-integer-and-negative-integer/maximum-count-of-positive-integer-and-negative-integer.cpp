class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());

        int maxN=0;
        int maxP=0;

        for(int i=0;i<n;i++){

            if(nums[i]>0){
                maxP++;
            }
            if(nums[i]<0){
               maxN++;
            }
        }
        return max(maxP,maxN);
    }
};
