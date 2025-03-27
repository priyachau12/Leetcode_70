class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n=nums.size();


        unordered_map<int,int>m;

        for(int i=0;i<n;i++){
       m[nums[i]]++;

        }
        int x=0;
     for(auto i:m){
        if(i.second>n/2){
          x=i.first;
        }
     }
     
int countLeft=0;
int totalx=m[x];
for(int i=0;i<n-1;i++){
    if(nums[i]==x){
        countLeft++;
    }
int countRight = totalx - countLeft;
if (countLeft * 2 > (i + 1) && countRight * 2 > (n - i - 1)) {
        return i;  // Found the minimum valid index
    }

}

   return -1;     
    }
};