#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	//版本1：范围for
	 for(int (&a)[4] : ia){
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
	for(int (*p)[4] = ia; p!=ia+3; p++){
		for(int *q=*p; q!=*p+4; q++)
		{
			cout << *q <<" ";
		}
	}
}
