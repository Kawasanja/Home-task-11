#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <algorithm>
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

virtual ~Array(){
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
	
    cout << "Enter " << cols << " numbers of array: " << endl;
        for(int i = 0; i<cols; i++)
            cin >> arr[i];
    }

virtual void f(){
	cout << "New array is: " << endl;   
    int  i = 0;
    for(int x = 0; x<cols; x++)
        if (0 == count(arr, arr+i, arr[x])){
            arr[i++] = arr[x];}
 
    for(int x = 0; x<i; x++){
        cout << arr[x] << ' ';}
        cout << endl; 
	}
	
};


class Matrix: public Array {
public:
	int ** matr;
	int rows;
	int cols;
	
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
    cout << "Enter numbers in " << rows << 'x' << cols << " massive: " << endl;
        for (int i=0; i<rows; i++){
			for (int j=0; j<cols; j++){
            cin >> matr[i][j];
 
}}}

void f(){
	cout << "My brains can blow off" << endl;   
    
	}

};
	
	void somF (Array& obj){
	obj.f();
}


int main()
{
	int s;
    cout << "Enter the size of arrays: ";
    cin >> s;
    Array mas1(s);
    mas1.setArr();
    mas1.getArr();
    somF(mas1);
    
    Matrix mas2(s);
    mas2.setMatr();
    mas2.getMatr();
    somF(mas2);
    
    
   
    return 0;
}

