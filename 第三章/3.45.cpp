//��autoʵ�� 
#include <iostream>
#include <vector>
#include <string>
using namespace std;
//using int_array = int[4];	//C++11�µ��±�׼�������� 
//typedef int int_array[4];	//���ַ�ʽ�ȼ� 

int main(){
	
	int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	//�汾1����Χfor
	 for(auto &a : ia){
	 	for(auto b : a){
	 		cout << b << " ";
		 }
	 }
	 //���������Ҫ������(),ָ��ҲҪ������() 
	
	cout << endl;
	
	//�汾2����ͨfor�����±�ʵ��
	for(auto i = 0; i!=3 ;i++){
		for(auto j = 0; j != 4; j++){
			cout << ia[i][j] <<" ";
		}
	} 
	
	cout << endl;
	
	//�汾3����ͨfor����ָ��ʵ�� 
	for(auto (*p) = ia; p!=ia+3; p++){
		for(auto *q=*p; q!=*p+4; q++)
		{
			cout << *q <<" ";
		}
	}
}
