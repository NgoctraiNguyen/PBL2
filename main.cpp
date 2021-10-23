#include "Luoi.h"
#include <conio.h>
#include <string>
int main(){
	Luoi L;
	L.background();
	L.viewgame();
	L.vevr(15,15);
	L.vevr(20,20);
	L.vevr(5,6);
	char c,d;
	L.vehinh(0);
	while(true){
		c = getch();
		d = getch();
		L.vehinh(d);
	}
	L.ketthuc();
	return 0;
}
