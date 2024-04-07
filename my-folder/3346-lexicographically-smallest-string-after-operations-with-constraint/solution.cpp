class Solution {
public:
    string getSmallestString(string s, int k) {
        int n = s.size();
        
        string t= "";
        int i=0;
        
        while(i<n && k){
            if(s[i]=='a'){
                t.push_back('a');
            }
            else{
                int tmp1 = s[i]-'a';
                int tmp2 = 'z'-s[i]+1;
                int tmp = min(tmp1,tmp2);
                
                if(tmp<=k){
                    t.push_back('a');
                    k-=tmp;
                }
                else{
                    char ch = s[i]-k;
                    k=0;
                    t.push_back(ch);
                }
            }
            i++;
        }
        
        while(i<n){
            t.push_back(s[i]);
            i++;
            
        }
        return t;
    }
};
