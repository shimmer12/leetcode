class Solution {
public:
    string addBinary(string a, string b) {
        int sum;
        int carry=0;
        string result;
        int i=a.size()-1,j=b.size()-1;
        while(i>=0||j>=0){
            sum=carry;
            if(i>=0)sum+=a[i--]-'0';
            if(j>=0)sum+=b[j--]-'0';
            result+=to_string(sum%2);
            carry=sum/2;

        }
        if(carry!=0)result+='1';
        reverse(result.begin(),result.end());
        return result;
    }
};
