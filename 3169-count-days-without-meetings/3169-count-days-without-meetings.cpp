class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        int meet_days=0;
        int ans=0;
        sort(meetings.begin(),meetings.end());
        int first=meetings[0][0];
        int second=meetings[0][1];
        if(meetings.size()==1) return days-meetings[0][1]-meetings[0][0]+1;
        for(int i=1; i<meetings.size(); i++){
            if(first==meetings[i][0] || second>=meetings[i][0]){
                first=min(first,meetings[i][0]);
                second=max(second,meetings[i][1]);
            }
            else{
                meet_days+=second-first+1;
                first=meetings[i][0];
                second=meetings[i][1];
            }
        }
        meet_days+=second-first+1;
         ans= days-meet_days;
        if(ans<0) return 0;
        return ans;
    }
};