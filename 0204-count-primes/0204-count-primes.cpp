class Solution {
public:
    int countPrimes(int n) {
        if(n==0 || n==1) return 0;
      vector<int> range(n+1,1);
        for(int i=2; i<range.size()-1; i++){
            if(range[i]==1){
                int multiply=2;
                while(i*multiply<range.size()){
                    range[i*multiply]=0; multiply++;
                }
            }
        }
        
        int count=0;
        for(int i=2; i<n; i++){
            if(range[i]==1) count++;
        }
        return count;
        
    }
};