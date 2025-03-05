class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();

        int l=0;
        int r=0;
        int mul=1;
      int maxMul=INT_MIN;
        while(l<n){
            mul=mul*nums[l];
           maxMul=max(maxMul,mul);
          l=l+1;
          if(mul==0){
            mul=1;
          }
        }
         mul=1;
         r=n-1;
           while(r>=0){
           mul=mul*nums[r];
            maxMul=max(maxMul,mul);
            r=r-1;
            if(mul==0){
            mul=1;
          }
           }

           
        
        return maxMul;
    }
};