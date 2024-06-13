class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if((hand.size())%groupSize) return false;
       map<int,int> mp;
        for(int i=0; i<hand.size(); i++){
            mp[hand[i]]++;
        }
        int group= hand.size()/groupSize;
        for(int i=0; i<group; i++){
            auto start= mp.begin();
            int start_ele= start->first;
            int j=1;
            start->second--;
            if(start->second==0) mp.erase(start->first);
            int w=groupSize-1;
            while((w)--){
                auto found= mp.find(start_ele+j);
                if(found==mp.end()) return false;
                else{
                    found->second--;
                    if(found->second==0) mp.erase(found->first);
                    j++;
                }
            }
        }
        return true;


    }
};