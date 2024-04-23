class Solution {
public:
    string addStrings(string num1, string num2) {
//         int carry=0, l1=num1.size()-1, l2=num2.size()-1;
//         string str="";
//         while(l1>=0 && l2>=0){
//             int a=int(num1[l1]-'0') + int(num2[l2]-'0')+carry;
//             carry=a/10;
//             int b= a%10;
//             str+=to_string(b);
//             l1--;
//             l2--;
//         }
        
//         while(l1>=0){
//             int a=int(num1[l1]-'0')+carry;
//             carry=a/10;
//             int b=a%10;
//             str+=to_string(b);
//             l1--;
//         }
        
//         while(l2>=0){
//             int a=int(num2[l2]-'0')+carry;
//             carry=a/10;
//             int b=a%10;
//             str+=to_string(b);
//             l2--;
//         }
//         if(carry>0){
//             str+=to_string(carry);
//         }
//         reverse(str.begin(),str.end());
//         return str;
        
        
        int i=num1.size()-1; int j=num2.size()-1;
        string ans=""; int carry=0;
        while(i>=0 && j>=0){
            int sum=carry+(num1[i--]-'0')+(num2[j--]-'0');
            carry=sum/10;
            ans.push_back(sum%10+'0');
        }
        while(i>=0){
            int sum=carry+(num1[i--]-'0');
            carry=sum/10;
            ans.push_back(sum%10+'0');
        }
        while(j>=0){
            int sum=carry+(num2[j--]-'0');
            carry=sum/10;
            ans.push_back(sum%10+'0');
        }
        if(carry!=0) ans.push_back(carry+'0');
        reverse(ans.begin(), ans.end());
        return ans;
        
        
        
        
        
        
        
        
        
        
        
    }
};