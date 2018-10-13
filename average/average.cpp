#include<iostream>

int main(){

    float m1, m2, m3;

    float avg;

    std::cout<<"Enter 3 values:";
    std::cin>>m1>>m2>>m3;

    avg = (m1+m2+m3)/3;

    std::cout<<"Average is :"<<avg;

    return 0;
}
