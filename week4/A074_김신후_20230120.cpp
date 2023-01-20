class Solution {
public:
    bool isPalindrome(string s) {
        stack<char> left;
        stack<char> right;
        for (char c : s) {
            if ('a' <= c && c <= 'z') {
                left.push(c);
            }
            else if ('A' <= c && c <= 'Z') {
                left.push(c + 32);
            }
            else if ('0' <= c && c <= '9') {
                left.push(c);
            }
        }
        int size = left.size();
        if (size == 0) return true;

        for (int i = 0; i < size / 2; i++) {
            right.push(left.top()); left.pop();
        }
        if (size % 2 != 0) left.pop();
        for (int i = 0; i < size / 2; i++) {
            cout << "left: " << left.top() << " right: " << right.top() << endl;
            if (left.top() != right.top()) return false;
            left.pop(); right.pop();
        }
        return true;
    }
};