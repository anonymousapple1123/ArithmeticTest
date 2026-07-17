#include <iostream>
#include "displaySeries.hpp"
#include "testMain.hpp"

void printTables();
int main(){
    std::cout<<"Main started "<< std::endl;
    //printTables();

    if(askMultiple()){
        std::cout<<"Correct !\n";
    }else{ std::cout<<"False ..";}
    return 0;
}

void printTables(){
    int choice{0};
    std::cout<<"Print Table of : \n";
    std::cout<<"1. Multiple table. \n";
    std::cout<<"2. Square Table: \n";
    std::cout<<"3. Cube table : \n";
    std::cout<<"4. Alternate  table : \n";
    std::cin>>choice;
    switch(choice){
        case 0:
        std::cout<<"Exitting...\n";
        break;
        case 1 :
        mulTables();
        break;
        case 2:
        squaresTbl();
        break;
        case 3:
        cubesTbl();
        break;
        case 4:
        alternateTbl();
        break;
        default:
        std::cout<<"Exitting...\n";
        break;
    }

}
