class Solution {
public:
    int palindrom(string& str, int s, int e){
        while(s<=e){
            if(str[s++]!=str[e--]) return 0;
        }
        return 1;
    }
    string longestPalindrome(string s) {
         string ans="";int maxi=0;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                int a= palindrom(s,i,j);
                if(a) { if((j-i+1)>maxi){
                        ans=s.substr(i,j-i+1);maxi=j-i+1;}
                      }
            }
        }
        return ans;
    }
};