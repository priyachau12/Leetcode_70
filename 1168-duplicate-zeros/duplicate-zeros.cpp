class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n=arr.size();
      vector<int> ans(arr.begin(), arr.end());
       
 int j=0;
        for(int i=0;i<n && j<n;i++){
           if(ans[i]==0){
            arr[j]=0;
            j++;
          if (j < n) {
            arr[j]=0;
            j++;
           }
           }
           else{
            
              arr[j]=ans[i];
            j++;
            
            
           }
        
       
    }
    }
};
