class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        // for large input answer coming is wrong
        // map<float, pair<int, int>> mp;
        // for(int i=0; i<arr.size(); i++){
        //     for(int j=i+1; j<arr.size(); j++){
        //         double rem=double(arr[i])/double(arr[j]);
        //         mp[rem]=make_pair(arr[i],arr[j]);
        //     }
        // }
        // int front=k-1;
        // vector<int> ans;
        // auto it= mp.begin();
        // advance(it,front);
        // ans.push_back((it->second).first);
        // ans.push_back((it->second).second);
        // return ans;
        
        vector<vector<float>> ans;
        for(int i=0; i<arr.size();i++){
            for(int j=i+1; j<arr.size(); j++){
                vector<float> v;
                v.push_back(float(arr[i])/float(arr[j]));
                v.push_back(arr[i]);
                v.push_back(arr[j]);
                ans.push_back(v);
            }
        }
        sort(ans.begin(), ans.end());
        vector<int> a;
        a.push_back(ans[k-1][1]);
        a.push_back(ans[k-1][2]);
        return a;
        
    }
};