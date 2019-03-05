/*
Nama Program	: Move Zero To End of Array
Nama			: Meira Dwiana Anjani
NPM				: 140810180015
Tanggal Buat 	: 5 Maret 2018
*/

#include <iostream>

using namespace std;

void moveZeroToEnd (int arr[], int n){
	int  hitung= 0;  
    for (int i = 0; i < n; i++) 
        if (arr[i] != 0) 
            arr[hitung++] = arr[i]; 
    while (hitung < n) 
        arr[hitung++] = 0; 
}

void input(int (&arr)[100], int& n){

    cout << "Masukkan Panjang Data : ";
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0; i<=n; i++){
	cout<<"data "<<i<<" adalah :"<<arr[i]<<endl;
}
 
}

void output (int arr[], int n){
	cout<<"Hasil :"<<n<<endl;
	for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
}

int main (){
	int arr[100];
	int n;
	input (arr,n);
	moveZeroToEnd(arr,n);
	output(arr,n);
}
