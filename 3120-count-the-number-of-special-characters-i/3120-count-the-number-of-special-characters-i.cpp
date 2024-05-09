class Solution {
public:
    int numberOfSpecialChars(string word) {
      vector<int> small(26,0)  ;
        int count=0;
        vector<int> capital(26,0);
        for(int i=0; i<word.size(); i++){
            if(word[i]>='a' && word[i]<='z') small[word[i]-'a']++;
            else capital[word[i]-'A']++;
        }
        for(int i=0; i<26; i++){
            if(small[i]!=0 && capital[i]!=0) count++;
        }
        return count;
    }
};