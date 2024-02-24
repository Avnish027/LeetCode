class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> v(n+1,0);
        for(int i=0; i<trust.size(); i++){
            v[trust[i][0]]++;
        }
        int a=-1;
        for(int i=1; i<=n; i++){
            if(v[i]==0){
                a=i;
                break;
            }
        }
        if(a==-1) return -1;
        int b=0;
        for(int i=0; i<trust.size(); i++){
            if(trust[i][1]==a) b++;
        }
        if(b==(n-1)) return a; 
        else return -1;
    }
};