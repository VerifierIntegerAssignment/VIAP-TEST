
#include "assert.h"

int main() {
    int i;
    for (i = 0; i < LARGE_INT; i += 2) ;
    __VERIFIER_assert(i == LARGE_INT);
    return 0;
}