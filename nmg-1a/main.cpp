#include "Code.h"
#include "Mastermind.h"
#include <vector>
#include <iostream>
using namespace std;
int main() {

	// Part A
	cout << "-- PART 1A -- " << endl;
	Code code(5, 10);
	code.randomCodeSelection();
	vector<int> alist({ 5, 0, 3, 2, 6 });
	Code a( alist);
	vector<int> blist({ 2, 1, 2, 2, 2 });
	Code b(blist);
	vector<int> clist({ 1, 3, 3, 4, 5 });
	Code c(clist);
	
	cout << "Secret Code: " << code << endl;
	cout << "Guess: " << a << endl;
	cout << "Correct: " << code.checkCorrect(a) << "\tIncorrect: " << code.checkIncorrect(a) << endl;
	cout << "Guess: " << b << endl;
	cout << "Correct: " << code.checkCorrect(b) << "\tIncorrect: " << code.checkIncorrect(b) << endl;
	cout << "Guess: " << c << endl;
	cout << "Correct: " << code.checkCorrect(c) << "\tIncorrect: " << code.checkIncorrect(c) << endl;

	// Part 1B
	cout << "\n-- PART 1B -- " << endl;
	int size, limit;
	cout << "Enter code size: ";
	cin >> size;

	cout << "Enter maximum value: ";
	cin >> limit;

	Mastermind game(size, limit);
	game.playGame();

	return 0;
}