class Solution {
public:
    int addDigits(int num) {
      while(num>9)  {
        int sum=0,a=num;
          while(a){
            int b= a%10;
              sum+=b;
              a/=10;
          }
          num=sum;
          sum=0;
      }
        return num;
    }
};