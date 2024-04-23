class Solution {
public:
    string reverseVowels(string s) {
       int l=0; int r=s.size()-1;
        string str="aeiouAEIOU";
        while(l<r){
        if((str.find(s[l])!= std::string::npos) && (str.find(s[r])!= std::string::npos)) {
            swap(s[l++],s[r--]);
        }
        if(!(str.find(s[l])!= std::string::npos)) l++;
        if(!(str.find(s[r]) != std::string::npos)) r--;
        }
        return s;
    }
};