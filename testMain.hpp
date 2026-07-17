#pragma once
#include <iostream>
#include <random>

int genR(int x, int y){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> subNum(x, y);
    return subNum(gen);
}
bool askMultiple(){
    int usrAns{0};
    int LHS{genR(2,20)}, RHS{genR(1,10)};
    std::cout<<LHS<<" X "<<RHS<<" = ";
    std::cin>>usrAns;
    if(usrAns == LHS*RHS){
        return true;
    }
    return false;
}
