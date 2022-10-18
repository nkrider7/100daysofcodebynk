#include <iostream.h>
#include <fstream.h>

using namespace std;

int main()
{
	int n ;
	ofstream file;
	file.open("/storage/emulated/0/documents/fil.txt");
	cout<<"enter the numver ";
	cin>>n;
	file<<n;
	file.close();
	return 0;
}

