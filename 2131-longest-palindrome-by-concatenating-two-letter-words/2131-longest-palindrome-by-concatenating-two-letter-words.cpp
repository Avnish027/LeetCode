class Solution {
public:
    string fun(string st){
        
        char temp=st[1];
        st[1]=st[0];
        st[0]=temp;
        
        return st;
    }
    
    
    int longestPalindrome(vector<string>& words) {
        unordered_map<string,int> mp;
        for(int i=0; i<words.size(); i++) mp[words[i]]++;
        int ans=0;
        int a=0;
        for(auto it=mp.begin(); it!=mp.end(); it++){
//             if(it->first == fun(it->first) && a!=1){ ans+=2;
//                                             a=1;continue;}
            
//             if(it->second!=-1){
//                 string rev=fun(it->first);
//                 auto d=mp.find(rev);
//                 if(d!=mp.end()){
//                     int mini=4*(min(d->second,it->second));
//                     ans+=mini;
//                     d->second=-1;
//                     it->second=-1;
//                 }
//             }
            
            
            string nrl=it->first;
            string rev= fun(it->first);
            if(nrl==rev){
                ans+=(it->second/2)*4;
                if((it->second)%2==1) a=1;
            }
            else{
                auto d=mp.find(rev);
                if(d!=mp.end()){
                    int mini=4*(min(it->second,d->second));
                    ans+=mini;
                    d->second=0;
                    }
            }
            
            
            
        }
        if(a) return ans+=2;
        return ans;
    }
};