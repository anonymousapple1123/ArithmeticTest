#include <iostream>
#include "displaySeries.hpp"
#include "testMain.hpp"

void printTables();
void startQuiz();
int main(){
    int choice{0};
    std::cout<<"******** MATHEMATICS QUIZ ********"<< std::endl;
    std::cout<<"1.Print tables. \n2.Start Quiz. \n:";
    std::cin>>choice;
    switch (choice) {
        case 1:
        printTables();
        break;
        case 2:
        startQuiz();
        break;
        default:
        std::cout<<"Exiting..."<<std::endl;
    }//switch ended.

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

//Quiz function implemented here.
void startQuiz(){
    int maxques{0}, choice{0};
    std::cout<<"Provide Number of questions : ";
    std::cin>>maxques;
    std::cout<<"Question types :\n";
    std::cout<<"0.EXIT :\n";
    std::cout<<"1.Multiple :\n";
    std::cout<<"2.Squares :\n";
    std::cout<<"3.Cubes :\n";
    std::cout<<"4.Alternate Multiple :\n";
    std::cin>>choice;
    while(maxques>0){
        switch(choice){
            case 0:
            std::cout<<"Exitting...\n";
            break;
            case 1 :
            if(askMultiple()){
                std::cout<<"Correct !\n";
            }else{ std::cout<<"False ..";}
            break;
            case 2:
            if(askSquare()){
                std::cout<<"Correct !\n";
            }else{ std::cout<<"False ..";}
            break;
            case 3:
            if(askCube()){
                std::cout<<"Correct !\n";
            }else{ std::cout<<"False ..";}
            break;
            case 4:
            if(askAltMult()){
                std::cout<<"Correct !\n";
            }else{ std::cout<<"False ..";}
            break;
            default:
            std::cout<<"Exitting...\n";
            break;
        }//switch case ends
        maxques-=1;
    }//while loop ends
    return;
}
