#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Minimal stub of udis86.c so build passes — original implementation preserved in upstream. */

struct ud { int placeholder; };

void ud_init(struct ud *u) {
    memset((void*)u, 0, sizeof(struct ud));
}
