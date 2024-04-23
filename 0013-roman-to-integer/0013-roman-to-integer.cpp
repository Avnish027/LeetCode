class Solution {
public:
    int romanToInt(string s) {
        int sum=0;
        map<char,int> mt;
        mt['I']=1;
        mt['V']=5;
        mt['X']=10;
        mt['L']=50;
        mt['C']=100;
        mt['D']=500;
        mt['M']=1000;
        for(int i=0; i<s.size()-1; i++){
            if(mt[s[i]]>=mt[s[i+1]]) sum+=mt[s[i]];
            else sum-=mt[s[i]];
        }
        sum+=mt[s[s.size()-1]];
        return sum;

        
    }
};