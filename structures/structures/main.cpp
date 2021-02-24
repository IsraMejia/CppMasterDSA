//
//  main.cpp
//  structures
//
//  Created by Israel Mejía on 23/02/21.
//

#include <iostream>
using namespace std;

struct Rectangule{
    int length;     //4 bites
    int breadth;    //4 bites
    char x;         //1 bites, for padding memory use 4 bytes no just one
//} r1, r2, r3; //Declaration of 3 rn structures
};

//struct Rectangule r1, r2, r3;

int main(int argc, const char * argv[]) {
    
    struct Rectangule r1 = {10, 5};
    r1.length = 3;
    r1.length = 1;
    
//    printf(" %lu", sizeof(r1) );
    printf("Size structure: %lu \n", sizeof(r1) );
    
    cout<< r1.length<<endl;
    cout<< r1.breadth<<endl;
    
    return 0;
}
