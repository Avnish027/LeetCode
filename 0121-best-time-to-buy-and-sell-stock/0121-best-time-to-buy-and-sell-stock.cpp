class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0;
        vector<int> v(prices.size());
        copy(prices.begin(),prices.end(),v.begin());
        for(int i=prices.size()-2; i>=0; i--){
            v[i]=max(v[i],v[i+1]);
        }
        for(int i=0; i<prices.size(); i++){
            maxi= max(maxi,(v[i]-prices[i]));
        }
        return maxi;
    }
};