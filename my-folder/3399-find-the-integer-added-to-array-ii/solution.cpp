#include <vector>
#include <unordered_map>
#include <algorithm>
#include <climits>

using namespace std;

class Solution{
public:
    long long minimumAddedInteger(vector<int>& te, vector<int>& am) {
        sort(te.begin(), te.end());
        sort(am.begin(), am.end());
        unordered_map<long long, long long> oo;
        long long ooX = LLONG_MAX;

        for (int i = 0; i < te.size(); i++) {
            for (int j = 0; j < am.size(); j++) {
                long long x = am[j] - te[i];
                oo[x]++;
            }
        }

        for (auto& [x, count] : oo) {
            vector<int> amTransformed(te.size());
            for (int i = 0; i < te.size(); i++) {
                amTransformed[i] = te[i] + x;
            }
            sort(amTransformed.begin(), amTransformed.end());

            if (canMatchMinusTwo(amTransformed, am)) {
                ooX = min(ooX, x);
            }
        }
        return ooX;
    }

private:
    bool canMatchMinusTwo(vector<int>& amTransformed, vector<int>& am) {
        int i = 0, j = 0, skip = 2;
        while (i < amTransformed.size() && j < am.size()) {
            if (amTransformed[i] == am[j]) {
                i++;
                j++;
            } else {
                i++;
                skip--;
                if (skip < 0) {
                    return false;
                }
            }
        }

        return j == am.size() && (i - j) <= 2;
    }
};

