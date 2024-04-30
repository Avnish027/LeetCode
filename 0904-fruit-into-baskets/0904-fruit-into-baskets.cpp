class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // // This gives TLE
        // int max_len=0; 
        // for(int i=0; i<fruits.size(); i++){
        //     set<int> myset;
        //     for(int j=i; j<fruits.size(); j++){
        //         myset.insert(fruits[j]);
        //         if(myset.size()>2) break;
        //         max_len=max(max_len,j-i+1);
        //     }
        // }
        // return max_len;
        
        
//         // My way by using combination of set and vector
//         int max_len=0, r=0,l=0;
//         set<int> myset;
//         vector<int> v(100001,0);
//         while(r<fruits.size()){
//             myset.insert(fruits[r]);
//             v[fruits[r]]++;
//             while(myset.size()>2){
//                 v[fruits[l]]--;
//                 if(v[fruits[l]]==0) myset.erase(fruits[l]);
//                 l++;
//             }
            
//             max_len=max(max_len,r-l+1);
//             r++;
//         }
//         return max_len;
        
        // TC= O(2N))
        // int l=0, r=0,maxi=0;
        // // set<int> st;
        // // vector<int> v(100001,0);
        // unordered_map<int,int> mp;
        // while(r<fruits.size()){
        //     // st.insert(fruits[r]);
        //     // v[fruits[r]]++;
        //     mp[fruits[r]]++;
        //     while(mp.size()>2){
        //         // v[fruits[l]]--;
        //         mp[fruits[l]]--;
        //         if(mp[fruits[l]]==0) mp.erase(fruits[l]);
        //         l++;
        //     }
        //     maxi=max(maxi,r-l+1);
        //     r++;
        // }
        // return maxi;
        
        //Tc= O(N)
        int l=0, r=0,maxi=0;
        // set<int> st;
        // vector<int> v(100001,0);
        unordered_map<int,int> mp;
        while(r<fruits.size()){
            // st.insert(fruits[r]);
            // v[fruits[r]]++;
            mp[fruits[r]]++;
            if(mp.size()>2){
                // v[fruits[l]]--;
                mp[fruits[l]]--;
                if(mp[fruits[l]]==0) mp.erase(fruits[l]);
                l++;
            }
           if(mp.size()<=2) maxi=max(maxi,r-l+1);
            r++;
        }
        return maxi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
       
    }
};