class Solution {
public:
    int numberOfChild(long long child, long long time) {
        long long lo=2*(child-1);
        long long result=time%lo;
        if(result<child){
            return result;
        }
        else {
            return lo-result;
        }
        
    }
};
