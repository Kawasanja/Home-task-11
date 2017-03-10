
#include <cstdlib>
#include <iomanip>
#include <iostream>
using namespace std;


class Array {
public:
	int cols;
	int * arr;
public:
Array (){arr = NULL;}

Array (int n){
	cols = n;
	arr = new int[cols];
	for (int i; i<cols; i++){
	arr[i] = 0;	
	}
}

~Array(){
	if(arr != NULL)
	delete [] arr;
	} 
	
void getArr(){
	cout << "Array is: " << endl;
    for(int i = 0; i<cols; i++)
        cout << arr[i] << ' ';
        cout << endl;
    }
 
void setArr(){
	
    cout << "Enter " << cols << " the size: " << endl;
        for(int i = 0; i<cols; i++)
            cin >> arr[i];
    }

};


class Matrix: public Array {
public:
	int ** matr;
	int rows, cols;
public:
	
Matrix (int m){
	rows = m;
	cols = m;
	matr = new int* [rows];
	for (int i=0; i<rows; i++){
		matr[i] = new int [cols];
		for (int j=0; j<cols; j++){
		matr[i][j] = 0;	
}}}

~Matrix(){
	delete [] matr;
	}
	
void getMatr(){
	cout << "Massive is: " << endl;
    for (int i = 0; i<rows; i++){
		for (int j = 0; j<cols; j++){
			cout << matr[i][j] << ' ';
			}
			cout << endl;
  }
  cout << endl;
  }
 
void setMatr(){
    cout << "Enter " << rows << 'x' << cols << " numbers of array: " << endl;
        for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
            cin >> matr[i][j];
 
}}}
};
	
int main()
{
	int s;
    cout << "Enter the size of arrays: ";
    cin >> s;
    Array mas1(s);
    Matrix mas2(s);
    mas1.setArr();
    mas1.getArr();
    
    mas2.setMatr();
    mas2.getMatr();
    return 0;
}
