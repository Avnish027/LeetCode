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
//         int groupCount = hand.size() / groupSize;
//         for (int i = 0; i < groupCount; i++) {
//             // Get the iterator to the smallest element in the map
//             auto start = mp.begin();
//             int start_ele = start->first;
            
//             // Decrement the count of the starting element
//             start->second--;
//             if (start->second == 0) mp.erase(start);
            
//             // Check the next `groupSize - 1` elements
//             for (int j = 1; j < groupSize; j++) {
//                 // Increment the iterator
//                 start = mp.find(start_ele + j);
//                 // If the next consecutive element is not found, return false
//                 if (start == mp.end()) return false;
//                 // Decrement the count of the current element
//                 start->second--;
//                 // If the count becomes zero, erase the element from the map
//                 if (start->second == 0) mp.erase(start);
//             }
//         }
//         return true;

    }
};