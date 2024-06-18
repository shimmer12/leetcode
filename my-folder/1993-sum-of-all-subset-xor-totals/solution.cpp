class Solution {
public:

    int subsetXORSum(vector<int>& n) {
       // int m=n.size();
        vector<vector<int>>su;
        f(n,0,{},su);
        int res=0;
        for(auto & s:su){
            int xo=0;
            for(int num:s){
                xo^=num;
            }
            res+=xo;
        }
        return res;
    }

    private:

    void f(const vector<int>&n, int idx,vector<int>s, vector<vector<int>>& su){
        if(idx==n.size()){
            su.push_back(s);
            return ;
        }
        s.push_back(n[idx]);// subset w/ n[i] element
        f(n,idx+1,s,su);
        s.pop_back();

        f(n,idx+1,s,su);//subset w/o n[i]ele
    }
};
