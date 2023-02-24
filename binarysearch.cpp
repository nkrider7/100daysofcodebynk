#include <iostream>

using namespace std;

int bsalgo(int array[],int size,int key){
	
	int start = 0;
	int end = size - 1;
	int mid = (start+end)/2;
	
	
	while(start<=end){
		
		if(array[mid]==key){
			cout<<"mid find\n";
			return mid;
		}
		if (key>array[mid]){
			
			start = mid +1;
			
		}
		else {
			end = mid-1;
		}
		
		mid = (start+end)/2;
	}
		return -1;
		
	}
	

int main()
{
	cout << "binary search !" << endl;
	
	int array[] = { 2,4,6, 8,10,12};
	
	cout<<bsalgo(array,6,12);
	
	
	return 0;
}
