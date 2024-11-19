class Solution {
public:
    int addDigits(int num) {
    //   while(num>9)  {
    //     int sum=0,a=num;
    //       while(a){
    //         int b= a%10;
    //           sum+=b;
    //           a/=10;
    //       }
    //       num=sum;
    //       sum=0;
    //   }
    //     return num;
    // }
        
        while(num/10){
            int ans=0;
            while(num){
                ans+=num%10;
                num/=10;
            }
            num = ans;
           
        }
         return num;
    }   
        
};
    