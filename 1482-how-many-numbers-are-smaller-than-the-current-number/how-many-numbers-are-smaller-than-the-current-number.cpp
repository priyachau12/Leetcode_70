class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        

        int n=nums.size();
    //  sort(nums.begin(),nums.end());
       
        

vector<int>v(n,0);

        for(int i=0;i<n;i++){
          int count=0;
            for(int j=0;j<n;j++){
              if(nums[j]<nums[i] && j!=i){
                count++;
              }

            }
            v[i]=count;
        }
            

        
        return v;
    }
};