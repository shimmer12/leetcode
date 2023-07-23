class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
         vector<string> result;

    for (const string& word : words) {
        stringstream ss(word);
        string segment;
        while (getline(ss, segment, separator)) {
            if (!segment.empty()) {
                result.push_back(segment);
            }
        }
    }

    return result;

    }
};
