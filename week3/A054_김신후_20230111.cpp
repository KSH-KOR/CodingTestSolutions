#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> basket;
    int curr;
    for (int x : moves) {
        x--;
        for (int y = 0; y < board.size(); y++) {
            curr = board[y][x];
            if (curr > 0) {
                if (!basket.empty() && basket.back() == curr) {
                    answer+=2;
                    basket.pop_back();
                    board[y][x] = 0;
                    break;
                }
                basket.push_back(curr);
                board[y][x] = 0;
                break;
            }
        }
    }
    return answer;
}

int main() {
    vector<vector<int>> board = { {0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0} };
    vector<int> moves = { 1,2,3,4 };
    cout << solution(board, moves);
}