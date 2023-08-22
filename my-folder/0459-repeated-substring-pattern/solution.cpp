// points to be noted:
// create given string with substring;
//freq count se substr nhi bnta
// substr lenge of length <=n/2, cause agar 12 length h 7 liye then new will be of 14 length
// now taking chota chota n/l times like 2 ka h toh 6 baar concat krne se bnega
// ab substr bna ke naye string me jode 
//agar thik bna toh true nhi toh false

// for optimisston take loop from l=n/2 not 1 to handle big cases frist

//                              ???optimised : DP LGEGA BHAII???

// class Solution {
// public:
//     bool repeatedSubstringPattern(string str) {
//         int n= str.length();
//        for(int l=1;l<=n/2;l++){
          
//            if(n%l==0){
//                 int times= n/l;
//            string pattern="";
           
//            while(times--){
//                 pattern+=str.substr(0,l);
//            }
//            if(pattern==str){
//                return true;
//            }}
//        }
//            return false;

           
//     } 
    
// };
// class Solution {
// public:
//     bool repeatedSubstringPattern(string str) {
//         int n= str.length();
//        for(int l=n/2;l>=1;l--){
          
//            if(n%l==0){
//                 int times= n/l;
//            string pattern="";
           
//            while(times--){
//                 pattern+=str.substr(0,l);
//            }
//            if(pattern==str){
//                return true;
//            }}
//        }
//            return false;

           
//     } 
    
// };
// class Solution {
// public:
//     bool repeatedSubstringPattern(string str) {
//        int i=1,j=0,n=str.size();
//        vector<int>dp(n+1,0);
//        while(i<str.size()){
//            if(str[i]==str[j])dp[++i]=++j;
//            else if (j==0)i++;
//            else j=dp[j];
//        }
//        return dp[n]&&dp[n]%(n-dp[n])==0;
//     }
// };
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=n/2;i>=1;i--){                //commented below
            if(n%i==0){                       
                if(s.substr(0,n-i)==s.substr(i))return true;         
            }
        }
        return false;
    }
};
