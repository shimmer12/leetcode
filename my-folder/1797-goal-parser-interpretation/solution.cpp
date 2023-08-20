class Solution {
public:
    string interpret(string s) {
        // agar G-G
        // agar ( and ) == o
        //agar ( al ) ==al
        
        // int a=command.size();
        // for(int i=0;i<a;i++){
        //     if(command[i]=='(' && command[i+1]==')'){
        //         command[i]=='o';
        //         res+=command[i];


        //     }
        //     //if(command[i]=='(' && command[i+1]=='o' && command[i+3]==')'&& command[i+2]==')')
        // }
        // return res;
         //string interpret(string s) {
        string ans;
        for (int i = 0; i < s.size(); ) {
            if (s[i] == 'G') ans += 'G', ++i;
            else if (s[i + 1] == ')') ans += 'o', i += 2;
            else ans += "al", i += 4;
        }
        return ans;
    }
};
