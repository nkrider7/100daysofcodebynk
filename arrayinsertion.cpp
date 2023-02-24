#include <iostream>
using namespace std;

void disp(int arr[]){
	
	for(int i=0; i<6;i++){
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int num , pos;
	int n = 5;
	int arr[10] = {2,4,5,6,7};
	disp(arr);
    cout<<"\n N:";
    cin>>num;
    cout<<" P:";
    cin>>pos;
   
	for(int i=n-1;i>=pos;i--){
		arr[i+1] = arr[i] ;
	}
	arr[pos] = num;
	disp(arr);
	
	return 0;
}
