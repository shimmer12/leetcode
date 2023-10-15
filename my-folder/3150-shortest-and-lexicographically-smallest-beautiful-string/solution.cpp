class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int len=s.length()+1;
        for(int i=0;i<s.length();i++){
            int cnt=0;
            for(int j=i;j<s.length();j++){
                if(s[j]=='1'){
                    cnt++;
                }
                if(cnt==k){
                    if(j-i+1<len){
                        len=(j-i+1);
                        break;
                        
                    }
                }
            }
        }
        string maxi="";
         for(int i=0;i<s.length();i++){
            int cnt=0;
            for(int j=i;j<s.length();j++){
                if(s[j]=='1'){
                    cnt++;
                }
                if(cnt==k){
                   if(j-i+1==len){
                       if(maxi==""){
                           maxi=s.substr(i,j-i+1);
                       }
                       else{
                           maxi=min(maxi,s.substr(i,j-i+1));
                       }
                   }
                }
            }
        }
        return maxi;
    }
};
