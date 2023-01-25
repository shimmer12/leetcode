class Solution {
public:
    void reverseString(vector<char>& s) {
        
        vector<char>p;
        
        for(int i=0;i<s.size();i++){
           p.push_back(s[s.size()-1-i]);
        }
       s=p;
        
    }
};
