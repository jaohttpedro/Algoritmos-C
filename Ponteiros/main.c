#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int v = 0x4142;
    char *a;
    char *b;
    long *c;
    
    // Usando casting para atribuição de ponteiro
    a = (char*)&v;
    b = (char*)&v;
    c = (long*)&v;
    
    printf("%c %x %lx\n", *a, (unsigned char)*b, *c);                                             
    return 0;
}

