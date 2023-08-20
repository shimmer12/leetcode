class Solution {
public:
    int minimumSum(int n, int k) {
        long long sum=0;
        vector<int>v;
        int i=1;
        while(i<=n){
            if(find(v.begin(),v.end(),k-i)!=v.end()){
                n++;
                
            }
            else{
                sum+=i;
                v.push_back(i);
                //cout<<i<<"";
            }
            i++;
        }
        return sum;
    }
};
