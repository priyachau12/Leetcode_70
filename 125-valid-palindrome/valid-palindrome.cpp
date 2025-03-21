class Solution {
public:
    bool isPalindrome(string s) {
        
        string Str="";

        for(char c:s){
            if(isalnum(c)){
                Str+=tolower(c);
            }
        }

        int left=0;
        int right=Str.size()-1;
 
         while(left<right){
            if(Str[left]!=Str[right]){
                return false;
            }
            left++;
            right--;

         }
         return true;
    }
};