#pragma once
#include <iostream>
#include <random>

int genR(int x, int y){
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> subNum(x, y);
    return subNum(gen);
}

//------------------------------------------------------------


//Multiple questions
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

//Ask Squares
bool askSquare(){
    int usrAns{0}, SQR{genR(2,20)}; //difficulty level could be added here in every function
    std::cout<<" Square of "<<SQR<<" = ";
    std::cin>>usrAns;
    if(usrAns == SQR*SQR){
        return true;
    }
    return false;
}

//Ask Cubes
bool askCube(){
    int usrAns{0}, CBE{genR(2,20)};
    std::cout<<" Cube of "<<CBE<<" = ";
    std::cin>>usrAns;
    if(usrAns == CBE*CBE*CBE){
        return true;
    }
    return false;
}
//Ask Alternate multiple
bool askAltMult(){
    int usrAns{0};
    int LHS{genR(2,20)};
    std::cout<<LHS<<" X "<<LHS+1<<" = ";
    std::cin>>usrAns;
    if(usrAns == LHS*(LHS+1)){
        return true;
    }
    return false;
}
