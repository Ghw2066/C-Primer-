#include <iostream>
#include <string>
#include <vector>
using namespace std;
void swap(int *,int *);

int main(){
	
	int k = 0, j = 0;
	cin >> k >> j;
	int *p = &k, *q = &j;
	
	swap(p,q);
	
	cout << *p << " " << *q;
	
}

void swap(int *i, int *j){
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;
}
	
