class Solution {
public:

 bool isvowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    long long countAtL(string &word, int k) {

        int consonants=0;
      
        long long n=word.length();

       unordered_map<char,int>mp; 
long long ans=0;

int l=0;
int r=0;
while(r<n){
  //expand right
  if(isvowel(word[r])){
    mp[word[r]]++;
  }
  else consonants++;

//update ans
while(mp.size()==5 && (consonants>=k)){
    ans+=(n-r);

    //shrink left
    if(isvowel(word[l])){
        mp[word[l]]--;
        if(mp[word[l]]==0)
         mp.erase(word[l]);
    }
    else consonants--;
    l++;
}
   r++;//for next iteration

            
        
    }
    return ans;
}

long long countOfSubstrings(string word, int k) {
    return countAtL(word,k)-countAtL(word,k+1);
}




 //It is giving TLE as its having O(nsquare)
 //  unordered_set<char>vowel={'a','e','i','o','u'};
//         for(int i=0;i<n;i++){
//           int charCount=0;
//              unordered_set<char>v;
//             for(int j=i;j<n;j++){
            

//              if(vowel.find(word[j])!=vowel.end()){
//                 v.insert(word[j]);
//              }
//              else{
//                 charCount++;
//              }

// if(v.size()==vowel.size() && charCount==k){
//                 count++;
//             }
//             }
            
        
   
};