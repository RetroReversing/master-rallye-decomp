extern volatile u16 D_0042DA10;
extern volatile u16 D_0042DA12;

void func_00310E28(void) {
    D_0042DA12 = D_0042DA10;
}

extern void func_002BF1D0(int arg0);
extern void *D_002AD408(int size);
extern void func_002C14B0(void *arg0);
extern int D_0042DAD8;
extern void *D_0042DADC;
extern void D_004810C8;

typedef struct {
    char pad0[0xC];
    void *unkC;
    int unk10;
    int unk14;
} S_0030EF88_alloc;

typedef struct {
    char pad0[0x14];
    void *unk14;
} S_0030EF88_arg;

void func_0030EF88(S_0030EF88_arg *arg0) {
    S_0030EF88_alloc *p;

    func_002BF1D0(1);
    if (D_0042DAD8 == 0) {
        D_0042DAD8 = (int)arg0->unk14;
    }
    if (D_0042DADC == 0) {
        p = D_002AD408(0x18);
        func_002C14B0(p);
        D_0042DADC = p;
        p->unkC = &D_004810C8;
        p->unk10 = D_0042DAD8;
    }
}

extern int D_0042D5DC;
extern int D_0042D5E0;
extern int D_0042D5E4;
extern int D_0042D5E8;

typedef struct {
    int f0;
    int f4;
    int f8;
    int fC;
} S_0030E590;

void func_0030E590(S_0030E590 *arg0) {
    int a, b, c, d;
    a = D_0042D5DC;
    b = D_0042D5E0;
    c = D_0042D5E4;
    d = D_0042D5E8;
    arg0->f0 = a;
    arg0->f4 = b;
    arg0->f8 = c;
    arg0->fC = d;
}
