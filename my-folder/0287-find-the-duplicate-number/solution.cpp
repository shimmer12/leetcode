class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
         unordered_map<int,int>mp;
for(int num:nums){
    mp[num]++;
}
       
       // mp[nums[i]]++;

    for(auto it :mp){
        if(it.second!=1){
            return it.first;
        }
    }
    return -1;
    } 
};

