#include <iostream>
using namespace std;

int main(){
//  int A[5] ; //Declaration
//  A[0] = 12; //store values
//  A[1] = 15;
//  A[2] = 25;
    int n;
    cout<<"Enter Size  "; cin>> n;
//    int A[n] = {12, 9, 3, 44, 43, 11}; //Initialize givin some elements
    int A[n];
    
    cout<<"Array sizes  :";
    cout<< sizeof(A)<<endl; //Show us the size of the array
  
    cout<<"Size of the int in the index n : ";
    cout<< A[n]<<endl;
    
//    printf("\nThis is another way to sees the outputs\n for example A[4] =  %d \n\n" , A[4]  );
    
    printf("Now we will to check all the items of the array with a cycle for\n");
    
    for (int i = 0; i < n ; i++){
        printf("The item on index %d is = %d \n" , i, A[i]);
    }
    
    printf("\n\nAnother way to see that is this 👀 \n");
    for (int x: A){
        cout<< x<< endl;
    }
    
  
  return 0;
}


