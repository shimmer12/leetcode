class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        unordered_map<char,int> m;
        int index1=-1;
        int index2=-1;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=goal[i] && index1==-1){
                index1 = i;
                count++;

            }
            else if(s[i]!=goal[i] && index2==-1){
                index2=i;
                count++;
                break;
            }
            else{
                m[s[i]]++;
            }
        }


        if(count==1){
            return false;
        }

        else if(count==0){
            for(auto it:m){
                if(it.second>=2){
                    return true;
                }
            }
            return false;
            
        }
        
        else{
            swap(s[index1],s[index2]);
            if(s==goal){
                return true;
            }
            return false;
        }
        return true;
    }
};
