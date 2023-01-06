#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int ps = 0, ys = 0;


    for (auto c : s) {
        if (c == 'p' || c == 'P') ps++;
        if (c == 'y' || c == 'Y') ys++;
    }

    return ps == ys;
}