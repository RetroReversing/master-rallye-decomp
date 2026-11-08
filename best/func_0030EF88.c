extern void func_002BF1D0(void *arg0, int arg1);
extern void *D_002AD408(int size);
extern void func_002C14B0(void *arg0);
extern int D_0042DAD8;
extern void *D_0042DADC;
extern void D_004810C8;

typedef struct {
    char pad0[0xC];
    void *unkC;
    int unk10;
} S_0030EF88_alloc;

typedef struct {
    char pad0[0x14];
    void *unk14;
} S_0030EF88_arg;

void func_0030EF88(S_0030EF88_arg *arg0) {
    S_0030EF88_alloc *p;
    int saved;

    func_002BF1D0(arg0, 1);
    if (D_0042DAD8 == 0) {
        D_0042DAD8 = (int)arg0->unk14;
    }
    if (D_0042DADC == 0) {
        p = D_002AD408(0x18);
        saved = D_0042DAD8;
        func_002C14B0(p);
        D_0042DADC = p;
        p->unk10 = saved;
        p->unkC = &D_004810C8;
    }
}
