#include<iostream>

extern int test_function(int);

int main(void){
    int i=0;
    int j=test_function(i);
    std::cout<<"test result: "<<j<<"\n";
    return 0;
}