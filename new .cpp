#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,q; 
    cin >> n >> q;
int arr[n][5];

int x;
for(int i=0; i<n; i++){
    cin >> x;
    for(int j=0; j<x; j++){
        cin >> arr[i][j];
    }
}

while(q){
    int a,b; cin >>a>>b;
    cout << arr[a][b] <<endl;
    q--;
}

return 0 ;
  
}
