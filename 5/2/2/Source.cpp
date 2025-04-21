#include "Header.h"

Counter::Counter(int num1) {
	this->num1 = num1;
}

int Counter::plus() {
	this->num1 += 1;
	return num1;

}

int Counter::minus() {
	this->num1 -= 1;
	return this->num1;
}

int Counter::equally() {
	return this->num1;
}
