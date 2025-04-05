#include<iostream>

int main()
{
    int A [4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int (*p)[3] = A;
    std::cout<<*A+3<<std::endl<<**p+3;


}
