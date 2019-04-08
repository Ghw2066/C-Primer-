#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Exchange(int *i, int *j);

int main(){
		
	int k = 0, w = 0;
	cin >> k >> w;
	int *p = &k, *q = &w;
	Exchange(p,q);
	cout << *p <<" " << *q;
	
} 

void Exchange(int *i, int *j){
	int temp = 0;
	temp = *i;
	*i = *j;
	*j = temp;
}
