#include <vector> 
#include <algorithm> 

long long func1(vector<int> &nums,int k){
    
    long long ct = 0; 
    int i = nums.size()/2; 
    while (i < nums.size() && nums[i] < k) {
        ct += k - nums[i]; 
        i++;
    }
        
    return ct; 
}

long long func2(vector<int> &nums,int k){
    
    long long ct = 0; 
    int i = nums.size()/2;  
    while (i >=0 && nums[i] > k) {
        ct+=nums[i]-k;
        i--;
    }
        
    return ct; 
}
class Solution { 
public: 
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) { 
        sort(nums.begin(), nums.end()); 
        
        if (nums[nums.size()/2] == k) 
            return 0; 
         
        
 
        if (nums[nums.size()/2] > k) { 
            return func2(nums,k);
        } 
        if (nums[nums.size()/2] < k) { 
            return func1(nums,k);
            
        } 
 
        return -1; 
    } 
};
