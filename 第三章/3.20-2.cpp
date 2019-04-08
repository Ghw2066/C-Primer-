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
	for (decltype(ivec.size()) k = 0; k != ivec.size(); k++) {
		
		cout << (ivec[k] + ivec[j-1 - k])<<' ';
				
	}
		
	return 0;
}

