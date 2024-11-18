#include "karel.h"


//==============================================================================
/// Программа для робота Карела
///
void KarelProgram() {
    Move();
    Move();
    TurnLeft();
    TurnLeft();
    TurnLeft();
    Move();
    TurnLeft();
    Move();
    PickBeeper();
}


//==============================================================================
/// Стартовая функция
///
int main() {
    LoadWorld("worlds/collect_newspaper.w");
    KarelProgram();
    Finish();

    return 0;
}
