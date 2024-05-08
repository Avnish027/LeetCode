class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> v(1000001,0);
        for(int i=0; i<score.size(); i++) v[score[i]]++;
        int ranks=1;
        for(int i=v.size()-1; i>=0; i--){
            if(v[i]==1){ v[i]=ranks;
            ranks=ranks+1;}
        }
        vector<string> str(score.size());
        for(int i=0; i<score.size(); i++){
            if(v[score[i]]==1) str[i]="Gold Medal";
            else if(v[score[i]]==2) str[i]="Silver Medal";
            else if(v[score[i]]==3) str[i]="Bronze Medal";
            else str[i]=to_string(v[score[i]]);
        }
        return str;
    }
};