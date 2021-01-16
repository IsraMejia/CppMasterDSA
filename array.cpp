#include <iostream>
using namespace std;

int main(){
  int A[5] ; //Declaration
  A[0] = 12; //store values 
  A[1] = 15;
  A[2] = 25;

  cout<<"Tamaño del arreglo :";
  cout<< sizeof(A)<<endl; //Show us the size of the array
  
  cout<<"Size of the int in the index 1 : "; 
  cout<< A[1];
  return 0;
}
