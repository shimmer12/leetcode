class Solution {
public:
    long long maxArrayValue(vector<int>& nums) {
        long long ans=0;
      
        vector<long long> array;
        
    
        long long n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            array.push_back(nums[i]);
            
        }
        
       for(int i=array.size()-1;i>0;i--)
       {
          if(array[i-1] <= array[i])
          {
              array[i-1] = array[i] + array[i-1];
              
          }
       }
        long long res= *max_element(array.begin(),array.end());
        
       return res;
    }
};
