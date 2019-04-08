#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> 
using namespace std;

int main(){
	
	int i = 0, j = 0;
	 
	cin >> i >> j ;
	
	if(j==0){
		throw runtime_error("除数不能为0！");
	}
	//输出结果： 
	//terminate called after throwing an instance of 'std::runtime_error'
    //what():  除数不能为0！
	
	cout << i/j << endl;
		
} 
