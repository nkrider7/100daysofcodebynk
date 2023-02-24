#include <iostream>

using namespace std;

int main()
{
	int array[3][3]={1,3,9,
		             2,8,8,
		             2,3,4};
	/*int array2[3][3]={2,3,9,
		             2,8,8,
		             2,3,4};*/
	for(int i =0;i<3;i++){
		for(int j= 0;j<3;j++){
			cout<<array[j][i]<<" ";
	}
	cout<<endl;
}
	
	
	
		return 0;
}
