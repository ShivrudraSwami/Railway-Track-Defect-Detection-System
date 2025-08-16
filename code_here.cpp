#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

// cage length and height
const int Height = 15;
const int Length = 30;
// snake initial location
int snakeX = Length - 2;
int snakeY = Height - 2;

int direX = 0;
int direY = -1;

int fruitX,fruitY;

bool GameOver = false;
// Fruit

void fruit(){
    cout << "entered fruit" << endl;   
    
    int i = 0;
    while(i < 1){
        int fX = rand() % (Length - 2) + 1;
        int fY = rand() % (Height - 2) + 1;
        if (fX == snakeX && fY == snakeY){
            continue;
        }
        fruitX = fX;
        fruitY = fY;
        i++;
    }
    
}
void play(){
    cout << "entered play" << endl;
    fruit();
}
int main(){
    srand(time(0));
    int i = 0;
    while(i < 10){
        play();
        cout << fruitX << " " << fruitY << endl;
        i++;
    }
}