#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> 
using namespace std;

int main(){
	
	int i = 0, j = 0;
	 
	cin >> i >> j ;
	
	if(j==0){
		throw runtime_error("��������Ϊ0��");
	}
	//�������� 
	//terminate called after throwing an instance of 'std::runtime_error'
    //what():  ��������Ϊ0��
	
	cout << i/j << endl;
		
} 
