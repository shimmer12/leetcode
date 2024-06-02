class Solution {

public:
    void reverseString(vector<char>& s) {
        int j=0;
        int e=s.size()-1;
        while(j<e){
            swap(s[j++],s[e--]);
        }
    }
};
