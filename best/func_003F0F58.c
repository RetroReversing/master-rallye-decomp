extern unsigned int D_0043C3B0;

void func_003F0B48(unsigned int arg0) {
    ((unsigned int *)&D_0043C3B0)[4] = arg0;
}

void func_003F0B58(unsigned int arg0) {
    unsigned int *p = (unsigned int *)&D_0043C3B0 + 4;
    *p = *p | arg0;
}

void func_003F0B74(unsigned int arg0) {
    unsigned int *p = (unsigned int *)&D_0043C3B0 + 4;
    *p = *p & ~arg0;
}

void func_003F0F58(void) {
    unsigned int *p = (unsigned int *)0x80000000;
    unsigned int target = (unsigned int)0x003F0FD4 | 0x80000000;
    do {
        if (p[0] == target) {
            unsigned int v = p[-1];
            if (v != 0 && v == p[-2] && v == p[-3]) {
                p[0] = v;
                return;
            }
        }
        p++;
    } while ((unsigned int)p != 0x80008000);
    return;
}
