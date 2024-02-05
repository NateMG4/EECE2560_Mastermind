#include "Code.h"
#include <iostream>
#include <cstdlib>
using namespace std;

Code::Code(int n, int m) {
	codeSize = n;
	codeLimit = m;

}
Code::Code(std::vector<int>& s) {
	codeLimit = *max_element(s.begin(), s.end());
	codeSize = sizeof(s);

	codeSequence = s;

}

void Code::randomCodeSelection() {
	for (int i = 0; i < codeSize;) {
		
		codeSequence.push_back(rand()%codeLimit);
		i++;
	}
}



int Code::checkCorrect(Code &guess) {
	int correct = 0;
	for (int i = 0; i < guess.codeSize; i++) {
		if (guess.codeSequence[i] == codeSequence[i]) {
			correct++;
		}
	}
	return correct;
}
int Code::checkIncorrect(Code& guess) {
	int correct = 0;
	for (int i = 0; i < guess.codeSize; i++) {
		int n = guess.codeSequence[i];
		for (int k = 0; k < codeSize; k++) {
			if (k == i) {
				continue;
			}
			if (n == codeSequence[k]) {
				correct++;
				break;
			}
		}
	}
	return correct;
}

ostream& operator<<(ostream& ostr, Code& c){
	for (int i = 0; i < c.codeSize; i++) {
		ostr << c.codeSequence[i];
	}
	return ostr;
}
