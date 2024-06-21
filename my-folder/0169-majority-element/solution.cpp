class Solution {
public:
    int majorityElement(vector<int>& nums) {
     int n=nums.size();
     int m=floor(n/2);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;

        }
        for(auto it:mp){
                if(it.second>m){
                    return it.first;
                }
        }
        return 0;

        //nlogn+n
        //n
    }
};
