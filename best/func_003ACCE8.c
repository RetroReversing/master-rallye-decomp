extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 *p = (volatile s32 *)D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern int func_003B1A90(void *);

int func_003ACD28(void *arg0, void *arg1) {
    void *s0 = arg0;
    void *s1 = arg1;
    int a = func_003B1A90(s0);
    int b = func_003B1A90(s1);
    volatile int *p = (volatile int *)&a;
    (void)p;
    return a < b;
}

typedef struct {
    unsigned char pad[0xC];
    int fieldC;
} S_ACCE8;

void func_003ACCE8(S_ACCE8 *arg0, int arg1) {
    volatile S_ACCE8 *p = arg0;
    int v = arg1;
    int val = p->fieldC;
    p->fieldC = (val & 1) | (v << 1);
}

void func_003ACCA8(S_ACCE8 *arg0, int arg1) {
    volatile S_ACCE8 *p = arg0;
    int v = arg1;
    int val = p->fieldC;
    p->fieldC = (val & ~1) | (v & 1);
}
