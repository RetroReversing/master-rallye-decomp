void func_003D7650(unsigned int *arg0, int arg1) {
    unsigned int v = *arg0;
    if (arg1 != 0) {
        *arg0 = v | 0x200;
    } else {
        *arg0 = v & ~0x200U;
    }
}

void func_003D7678(unsigned int *arg0, int arg1) {
    unsigned int v = *arg0;
    if (arg1 != 0) {
        *arg0 = v | 2;
    } else {
        *arg0 = v & ~2U;
    }
}

extern int func_003D9FC8(unsigned int);
int func_003D76E0(unsigned int a) {
    return func_003D9FC8(a);
}

typedef struct {
    unsigned int unk0;
    int unk4;
    int unk8;
    int unkC;
} S003D77E0;
extern void func_003D7F00(void);
void func_003D77E0(S003D77E0 *arg0, int arg1, int arg2, int arg3) {
    if (arg0->unk0 & 0x100) {
        func_003D7F00();
    }
    arg0->unk8 = arg3;
    arg0->unkC = arg1;
    arg0->unk4 = arg2;
}
