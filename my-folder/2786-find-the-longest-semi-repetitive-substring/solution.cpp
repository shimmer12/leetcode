class Solution {
public:
  
//#include <string>

long long longestSemiRepetitiveSubstring(string s) {
    long long start = 0, end = 0;
    long long longestLength = 0, currentLength = 1;

    if (s.size() <= 2)
        return s.size();

    for (end = 1; end < s.size(); end++) {
        currentLength++;

        if (s[end] == s[end - 1]) {
            currentLength = end - start + 1;
            start = end;
        }

        if (longestLength < currentLength)
            longestLength = currentLength;
    }

    return longestLength;
}

};
