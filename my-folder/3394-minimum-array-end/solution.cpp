#include <vector>

using namespace std;

class Solution {
public:
    long long minEnd(int moo, int am) {
        long long result = am;
        vector<int> indices = findUnsetBits(result);

        for (long long i = 0; i < (1LL << indices.size()); i++) {
            if (--moo == 0) {
                result = generateResult(result, indices, i);
                return result;
            }
        }
        return result;
    }

private:
    vector<int> findUnsetBits(long long val) {
        vector<int> indices;
        for (int i = 0; i < 63; i++) {
            if ((val >> i) & 1 ^ 1) {
                indices.push_back(i);
            }
        }
        return indices;
    }

    long long generateResult(long long val, vector<int>& indices, long long bitmask) {
        for (int j = 0; j < 63; j++) {
            if (bitmask >> j & 1) {
                val |= 1LL << indices[j];
            }
        }
        return val;
    }
};

