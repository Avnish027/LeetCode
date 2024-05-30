class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        for(int i=0; i<arr.size(); i++){
            int second=0;
            for(int j=i; j<arr.size(); j++){
                second^=arr[j];
                int third=0;
                for(int k=j+1; k<arr.size(); k++){
                    third^=arr[k];
                    if(second==third) count++;
                }
            }
        }
        return count;
    }
};