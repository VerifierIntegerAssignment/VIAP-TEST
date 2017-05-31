// Source: Sumit Gulwani, Saurabh Srivastava, Ramarathnam Venkatesan: "Program
// Analysis as Constraint Solving", PLDI 2008.

#include "assert.h"
int main() {
    int x,y;
    x = -50;
    y = __VERIFIER_nondet_int();
    __VERIFIER_assume(-1000 < y && y < LARGE_INT);
    while (x < 0) {
	x = x + y;
	y++;
    }
    __VERIFIER_assert(y > 0);
    return 0;
}