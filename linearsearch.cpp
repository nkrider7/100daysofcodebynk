#include <iostream>

using namespace std;

int ls(int arr[],int key){
	for(int i=0;i<10;i++){
		
	if (key==arr[i]){
		cout<<i;
	}		
	}
	return 0 ;
}
int bs(int arr[],int size,int key){
	int start = 0;
	int end = size -1;
	int mid = (start+end)/2;
while (start<=end){
			if(arr[mid]==key){
			cout<<"mid find\n";
			return mid;
		}
		if (key>arr[mid]){
			
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
{   //             0 1 2 3 4 5  6  7  8 9 
	int arr[10] = {2,4,5,6,8,9,10,14,18,20};
	int lls = ls(arr,10);
	int bbs= bs(arr,10,10);
	cout<<lls<<endl<<endl;
	cout<<bbs;
	return 0;
}
