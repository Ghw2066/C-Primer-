#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	
	int ia[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
	
	//�汾1����Χfor
	 for(int (&a)[4] : ia){
	 	for(int b : a){
	 		cout << b << " ";
		 }
	 }
	 //���������Ҫ������(),ָ��ҲҪ������() 
	
	cout << endl;
	
	//�汾2����ͨfor�����±�ʵ��
	for(int i = 0; i!=3 ;i++){
		for(int j = 0; j != 4; j++){
			cout << ia[i][j] <<" ";
		}
	} 
	
	cout << endl;
	
	//�汾3����ͨfor����ָ��ʵ�� 
	for(int (*p)[4] = ia; p!=ia+3; p++){
		for(int *q=*p; q!=*p+4; q++)
		{
			cout << *q <<" ";
		}
	}
}
