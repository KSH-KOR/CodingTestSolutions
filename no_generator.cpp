#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;
std::string to_format(const int number) {
	std::stringstream ss;
	ss << setw(3) << setfill('0') << number;
	return ss.str();
}
int main() {
	const int start =21;
	const int end = 40;
	for (int i = start; i <= end; i++) {
		cout << "A" + to_format(i) << ", ";
	}
}