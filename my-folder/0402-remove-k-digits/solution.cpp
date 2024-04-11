class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<int> stack;
        string ans;
        int carry = 1;
        int len = num.size();
        for (int i = 0; i < len; i++) {
            while (!stack.empty() && k && stack.back() > num[i]) {
                k--;
                stack.pop_back();
            }
            stack.push_back(num[i]);
        }

        while (k) {
            stack.pop_back();
            k--;
        }

        if (stack.empty()) {
            return "0";
        }

        len = stack.size();
        int checkZero = true;
        for (int i = 0; i < len; i++) {
            if(stack[i] == 48 && checkZero){
                continue;
            }
            checkZero = false;
            ans += stack[i];
        }
        return (ans=="")?"0":ans;
    }
};
