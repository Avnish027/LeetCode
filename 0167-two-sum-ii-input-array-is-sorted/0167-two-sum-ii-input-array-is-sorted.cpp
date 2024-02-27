class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int s=0,e=numbers.size()-1;
        vector<int> a;
        while(s<e){
        if(numbers[s]+numbers[e]==target) {
            a.push_back(s+1);
            a.push_back(e+1);
            break;
        }
        else if(numbers[s]+numbers[e]>target) e--;
            else s++;
        }
        return a;
    }
};