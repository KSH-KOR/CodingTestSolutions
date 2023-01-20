#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int al = a.length(), bl = b.length();
        int l = al > bl ? al : bl;
        int t, c = 0;
        string answer = "";
        string temp;
        for (int i = 1; i <= l; i++) {
            t = 0;
            if (al - i >= 0) {
                t += a[al - i] - 48;
            }
            if (bl - i >= 0) {
                t += b[bl - i] - 48;
            }
            t += c;
            c = t > 1 ? 1 : 0;
            temp = to_string((t % 2));
            temp += answer;
            answer = temp;
        }
        if (c > 0) {
            temp = "1";
            temp += answer;
            answer = temp;
        }
        return answer;
    }
};

int main() {
    string a = "1010", b = "1011";
    cout << Solution().addBinary(a, b);
}