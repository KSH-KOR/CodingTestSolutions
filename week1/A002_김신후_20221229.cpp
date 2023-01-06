#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        int length = 0;
        vector<int> prevRow;
        for (int currRow = 0; currRow < numRows; currRow++) {
            vector<int> row;
            for (int elementIndex = 0; elementIndex < currRow + 1; elementIndex++) {
                if (currRow == 0) {
                    row.push_back(1);
                    break;
                }
                if (elementIndex == 0 || elementIndex == currRow) {
                    row.push_back(1);
                    continue;
                }
                row.push_back(prevRow[elementIndex - 1] + prevRow[elementIndex]);
            }
            prevRow = row;
            result.push_back(row);
        }
        return result;
    }
};