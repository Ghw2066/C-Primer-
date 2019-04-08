#include <iostream>
#include <vector>
#include <string>
using namespace std;
using int_array = int[4];	//C++11下的新标准类型声明 
//typedef int int_array[4];	//两种方式等价 

int main(){
	
	int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	//版本1：范围for
	 for(int_array (&a) : ia){
	 	for(int b : a){
	 		cout << b << " ";
		 }
	 }
	 //数组的引用要加括号(),指针也要加括号() 
	
	cout << endl;
	
	//版本2：普通for，用下标实现
	for(int i = 0; i!=3 ;i++){
		for(int j = 0; j != 4; j++){
			cout << ia[i][j] <<" ";
		}
	} 
	
	cout << endl;
	
	//版本3：普通for，用指针实现 
	for(int_array (*p) = ia; p!=ia+3; p++){
		for(int *q=*p; q!=*p+4; q++)
		{
			cout << *q <<" ";
		}
	}
}
