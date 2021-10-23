#include "Player.h"

Player:: Player(int x,int y):x(x),y(y){

}
void Player:: dichuyen(char c){
    int t=c;
    switch (t) {
        case 72 : y--;break;
        case 80 : y++;break;
        case 75 : x--;break;
        case 77 : x++;break;
    }
}