#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	
	int out = 0;
	vector<int> ivec = {1,2,3,4,5,6,7,8,9};
	
	for(auto it = ivec.begin();it!=ivec.end();++it) {
		cout << (((*it) % 2 ==0) ? (*it): (*it) * 2);
		
	}
	
		
} 
