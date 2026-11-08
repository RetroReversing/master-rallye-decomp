extern int func_003CE2B8(void *a, unsigned b, int c);

int func_003CFE90(void *a, unsigned b) {
    return func_003CE2B8(a, b, 0);
}

extern int func_003A3EB0(s32);

int func_003950D8(s32 arg0, s32 arg1) {
    return func_003A3EB0(arg0 + arg1);
}

unsigned func_00395068(unsigned arg0) {
    unsigned x = 0x10;
    while (x < arg0) x *= 2;
    return x;
}

extern int func_003A8990(void *a, unsigned b);
extern unsigned char D_0049B890[];

void func_00390F58(void) {
    func_003A8990(&D_0049B890, 2);
}
