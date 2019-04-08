#include <iostream>
#include <string>
#include <vector>
#include <stdexcept> 
using namespace std;

int main(){
	
	int i = 0, j = 0;
	
	while(cin >> i >> j)
	{
		try
		{
			if(j==0)
				throw runtime_error("除数不能为0！");
			
			cout << i/j << endl;
			
		} catch(runtime_error err)
			{
				cout << err.what()
					 << "\nTry Again? Enter y or n" << endl;
				char c;
				cin >> c;
				if (!cin || c == 'n')
					break; //跳出
				 
			}
		
		
	}
	
	
		
} 
