class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.size();
        int l=0;
        int r=0;
        int maxlen=0;
        unordered_map<char,int>m;
     if(n==0){
        return 0;
     }
        while(r<n){
      
      
      if (m.find(s[r]) != m.end()){
        if(m[s[r]]>=l){
            l=m[s[r]]+1;
        }
      }
     
      maxlen=max(maxlen,r-l+1);
      m[s[r]]=r;
      r++;
        }



return maxlen;
        
    }
};