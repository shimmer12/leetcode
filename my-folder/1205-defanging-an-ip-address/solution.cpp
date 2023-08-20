class Solution {
public:

//MAKE A NEW ANS STRING FOR PUTTING STRING VALUE
    string defangIPaddr(string address) {
       string ans;
       for(int i=0;i<address.size();i++){
           if(address[i]=='.')
           {ans+="[.]";}
           else{
               ans+=address[i];
           }
    }return ans;}
};
