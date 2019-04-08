#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print1(const char *);
void print2(const char *beg, const char *end);
void print3(const char str[], size_t size);

int main(){
	
	const char str1[] = {"hello,world!"};
	
	string str(begin(str1),end(str1));
	
	cout << str << endl;
	
	print1(str1);
	
	cout << endl;
	
	print2(begin(str1),end(str1));
	
	cout << endl;
	
	size_t size = end(str1) - begin(str1);
	print3(str1,size);
	
}

//C����ַ�������\0��β
void print1(const char *str1){
	
	while(*str1!='\0'){
		cout << (*str1++) << " "; 
	}
	
} 

//ʹ�ñ�׼��淶
void print2(const char *beg, const char *end) {
	
	while(beg!=end){
		cout << (*beg++) << " ";
	}
	
}

//��ʽ����һ����ʾ�����С���β�
void print3(const char str[], size_t size){
	
	for(size_t i = 0; i != size ; ++i ){
		cout << str[i] << " ";
	}
	
} 

