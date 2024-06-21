class Solution {
public:
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        int l=0,r=pos.back()-pos.front();
        while(l<r){
            int mid=  r- (r-l)/2;
            if(count(pos,mid)>=m)
            l=mid;
            else
            r=mid-1;
        }
        return l;
    }
    private:
        int count(vector<int>& pos,int d){
            int ans=1,curr=pos[0];
            for(int i=1;i<pos.size();++i){
                if(pos[i]-curr>=d){
                    ans++;
                    curr=pos[i];
                }
            }
            return ans;
        }
};
