// Use asserts within a trivial program

#define NDEBUG      // goes before <assert.h>
#include <assert.h>
#include <stdio.h>
#include <ctype.h>

int main() {
    assert (0);
    printf("My program runs \n");
    return 0;
}