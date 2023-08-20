class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string block="";
        for(const string&word:words){
            if(!word.empty()){
                block+=word[0];
                
            }
            
        }
        if(block==s){
            return true;
        }
        else{
            return false;
        }
    }
};
