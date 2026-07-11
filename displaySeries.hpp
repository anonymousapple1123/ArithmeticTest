#pragma once
#include <iostream>

const int MAX_RANGE = 20;
const int MAX_ITR = 10;

bool mulTables(){
    for(int i = 1; i<=MAX_RANGE; i+=1){
        for(int j = 1; j<=MAX_ITR; j+=1){
            std::cout<<i<<" X "<<j<<"\t=\t"<<i*j<<"\n";
        }
        std::cout<<"-----------------------------"<<std::endl;
    }
    return true;
}

bool tableof(int table){
    for(int i = table; i<=table; i+=1){
        for(int j = 1; j<=MAX_ITR; j+=1){
            std::cout<<i<<" X "<<j<<"\t=\t"<<i*j<<"\n";
        }
        std::cout<<"-----------------------------"<<std::endl;
    }
    return true;
}
