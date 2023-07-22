class Solution {
public:
    string sortVowels(string s) {
        string t = s;
        unordered_map<char, int> ma;
        ma['a'] = 1;
        ma['e'] = 1;
        ma['i'] = 1;
        ma['o'] = 1;
        ma['u'] = 1;
        ma['A'] = 1;
        ma['E'] = 1;
        ma['I'] = 1;
        ma['O'] = 1;
        ma['U'] = 1;
        
        long long m = s.size();
        string temp;
        for (int i = 0; i < m; i++){
            if (ma.find(s[i]) != ma.end()){
               
                temp.push_back(s[i]);
            }
        }
        
        sort(temp.begin(), temp.end());
        cout << temp;
        
        int j = 0;
        for (int i = 0; i < m; i++){
            if (ma.find(s[i]) != ma.end()){
             
                t[i] = temp[j];
                j++;
            }
        }
        
        return t;
    }
};
