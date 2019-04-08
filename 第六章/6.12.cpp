#include <iostream>
#include <vector>
#include <string>
using namespace std;
void Exchange(int &, int &);

int main(){
		
	int k = 0, w = 0;
	cin >> k >> w;
	//int *p = &k, *q = &w;
	Exchange(k,w);
	cout << k <<" " << w;
	
} 

void Exchange(int &i, int &j){
	int temp = 0;
	temp = i;
	i = j;
	j = temp;
}
