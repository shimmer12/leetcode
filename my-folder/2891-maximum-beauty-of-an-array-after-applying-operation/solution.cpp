class Solution {
public:
    int maximumBeauty(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>CntFreq;
        for(int i=0;i<n;i++){
            CntFreq[nums[i]-k]++;
            CntFreq[nums[i]+k+1]--;
            
        }
        long long var=0;
        long long res=0;
        for(auto it:CntFreq){
            var+=it.second;
            res=max(res,var);
                   
        }return res;
    }
};
