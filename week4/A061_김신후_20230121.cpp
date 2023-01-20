#include<string>
#include<iostream>
using namespace std;

class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer = "";
        string temp = "";

        while (columnNumber > 0) {
            int r = columnNumber % 26;
            if (r != 0) temp = (char)(r + 64);
            else {
                temp = "Z";
                columnNumber--;
            }
            temp += answer;
            answer = temp;
            columnNumber /= 26;
        }
        return answer;

    }
};

int main() {
    cout << Solution().convertToTitle(701);
}