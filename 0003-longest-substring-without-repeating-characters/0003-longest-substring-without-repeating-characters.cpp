class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // int max_len=0;
        // for(int i=0; i<s.size(); i++){
        //     vector<int> v(256,0);
        //     for(int j=i; j<s.size(); j++){
        //         if(v[s[j]]!=0) break;
        //         max_len=max(max_len,j-i+1);
        //         v[s[j]]++;
        //     }
        // }
        // return max_len;
        
        
       // int max_len=0, l=0,e=0;
       //  vector<int> v(257,0);
       //  while(e<s.size()){
       //      while(v[s[e]]!=0){
       //          v[s[l++]]=0;
       //      }
       //      max_len=max(max_len,e-l+1);
       //      v[s[e++]]=1;
       //  }
       //  return max_len;
        
     int l=0,r=0,max_len=0;
    vector<int> v(257,0);
    while(r<s.size()){
        v[s[r]]++;
        while(v[s[r]]>1) v[s[l++]]--;
        max_len=max(max_len,r-l+1);
        r++;
    }
        return max_len;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
    }
};