class Solution {
public:
    int clumsy(int n) {
        int set=n/4;
        int rem=n%4;
        vector<int> v;
        for(int i=1; i<=set; i++){
            if(i==1){
                int a =(n*(n-1)/(n-2))+(n-3);
                v.push_back(a);
                n=n-4;
            }
            else{
                int b=(-1*(n*(n-1)/(n-2)))+(n-3);
                v.push_back(b);
                n=n-4;
            }
        }
        int sub=0;
        if(n==1) sub=n;
        if(n==2) sub=n*(n-1);
        if(n==3) sub=n*(n-1)/(n-2);
        
        int ans=0;
        for(int i=0; i<v.size();i++){
            if(i==0) ans+=v[i];
            else ans+=v[i];
        }
        if(set==0){
if(n==1) return n;
        if(n==2) return n*(n-1);
        if(n==3) return n*(n-1)/(n-2);
        }
        return ans-sub;
    }
};