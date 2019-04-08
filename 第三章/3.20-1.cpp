#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int i;
	vector<int> ivec;
	while (cin >> i) {
		ivec.push_back(i);
	}
	auto j = ivec.size();
	for (decltype(ivec.size()) j = 0; j != ivec.size(); j++) {
		if (j > 0) {
			cout << (ivec[j] + ivec[j - 1]) << ' ';
		}
	}

	return 0;
}
