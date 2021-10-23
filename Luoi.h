#ifndef LUOI_H
#define LUOI_H
#include "Cell.h"
#include "Player.h"
class Luoi{
	private:
		Cell **ds;
		Player nv;
	public:
		Luoi();
		void background();
		void viewgame();
		void vehinh(char c);
		void vevr(int,int);
		void ketthuc();

};
#endif
