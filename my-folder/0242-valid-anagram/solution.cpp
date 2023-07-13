class Solution {
public:
    bool isAnagram(string s, string t) {
        //hashtable
        int a= s.length();
        int b= t.length();
        if(a!=b)return false;
       int arr[26]={0};
       for(int i=0;i<a;i++){
           arr[s[i]-'a']++;
           arr[t[i]-'a']--;

       }
       for(int i=0;i<26;i++){
           if(arr[i]!=0){
               return false;
           }
           
       }return true;
    }
};
