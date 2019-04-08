#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
	vector<int> ivec(begin(arr),end(arr));
	int arr2[9]={};

	auto j = ivec.size();
	//下标写法 
	for (decltype(ivec.size()) k = 0; k != ivec.size(); k++) {
		
		arr2[k] = ivec[k];
		cout<< arr2[k] << " ";
	}
	cout << endl;
	
	//迭代器写法 
	for(auto it = ivec.begin();it != ivec.end();it++){
		cout<< *it << " ";
	} 
		
	return 0;
}

