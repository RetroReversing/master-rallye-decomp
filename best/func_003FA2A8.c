extern void func_003F9FD8(int, int);
extern int D_004404DC;

void func_003FA180(int arg0) {
    func_003F9FD8(D_004404DC, arg0);
}

extern void func_003F9F48(int, int, int);
extern int D_004404DC;

void func_003FA1A8(int arg0, int arg1) {
    int v = arg0;
    func_003F9F48(D_004404DC, v, arg1);
}

extern void func_003F9ED8(int);
extern int D_004404DC;

void func_003FA1D8(void) {
    func_003F9ED8(D_004404DC);
}

extern void func_003FB6C0(void *, int, long long *);
typedef struct {
    int unk0;
    short unk4;
    int unk8;
    char unkC;
} func_003FA2A8_sp;

void func_003FA2A8(int arg0, char *arg1, int arg2) {
    func_003FA2A8_sp sp;
    long long spB8[6];
    sp.unk0 = (int)arg1;
    sp.unk4 = 0x208;
    sp.unk8 = 0x7FFFFFFF;
    *(int *)((char *)&sp + 0x10) = (int)arg1;
    *(int *)((char *)&sp + 0x14) = 0x7FFFFFFF;
    *(int *)((char *)&sp + 0x54) = arg0;
    func_003FB6C0(&sp, arg2, spB8);
    *arg1 = 0;
}
