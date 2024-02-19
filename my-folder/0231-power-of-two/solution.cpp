// Now consider :-
// bit representation of 7  -> 0111
// bit representation of 8  -> 1000
// bitwise AND of 7 and 8 -> 0000
// we are gonna use this property for for all numbers which are powers of two
// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n<=0) return false;
//         return ((n&(n-1))==0);
//     }
// };
// Time Complexity : O(1)
// Space Complexity : O(1)

// 4. Using ceil-floor method

// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         if(n <= 0) return false;
//         return ceil(log2(n)) == floor(log2(n));
//     }
// };
// Time Complexity : O(logn)
// Space Complexity : O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<0)return false;
        
        int bits=__builtin_popcount(n);
        
        if(bits==1)
            return true;
        return false;
    }
};
