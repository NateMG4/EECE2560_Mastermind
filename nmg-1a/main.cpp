#include "Mastermind.h"
#include <iostream>
using namespace std;
int main() {
	int size, limit;
	cout << "Enter code size: ";
	cin >> size;

	cout << "Enter maximum int value: ";
	cin >> limit;

	Mastermind game(size, limit);
	game.playGame();



	
}