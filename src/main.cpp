//==============================================================================
///
/// @file
/// @brief Программа для робота Карела и стартовая функция
///
//==============================================================================


#include "karel.h"
#include "iostream"

void PutAllBeepers();
void TurnRight();
//==============================================================================
/// Программа для робота Карела
///
void KarelProgram() {
   while(FrontIsClear()){
    if(BeepersPresent){
        int count=0;
        while(BeepersPresent()){
            PickBeeper();
            count++;
        }
        for(int i=0; i<count*2; i++){
            PutBeeper();
        }
    }
    Move();
   }
    if(BeepersPresent()){
        int count=0;
        while(BeepersPresent()){
            PickBeeper();
            count++;
        }
        for(int i=0; i<count*2; i++){
            PutBeeper();
        }
    }
}

void moveKarel(){
    bool e = true;
    while(true){
        KarelProgram();
        if(FrontIsClear()){
        Move();
     }
      else {
        if(e){
            TurnLeft();
            if (FrontIsClear()){
                Move();
                TurnLeft();
            }
        }
            else{

            TurnRight();
            if (FrontIsClear()){
                Move();
                TurnRight();

            }
        }
        std::cout << e << std::endl;
        e = !e;
        std::cout << e << std::endl;
        }
       

        

        
     
  }
}
void TurnRight(){
    for(int i = 0; i < 3; i++){
        TurnLeft();
    }
}

//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/Double_beepers_01.w");
    moveKarel();
    Finish();
    return 0;
}
