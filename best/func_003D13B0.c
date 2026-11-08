extern void *func_002AE7F8(int);
extern void func_002AE2F0(void);
extern void func_002AE718(void) __attribute__((noreturn));
extern void *func_002AE8B0(void *, void *(*)(void *), void *);
extern void func_002B2028(void *);
extern void *func_003CD828(void *);
extern void func_003CD948(void **, unsigned int, unsigned int, void *, unsigned int);
extern void func_003D27D8(void *, void *);
extern unsigned int func_003FA9B8(void *);
extern void *func_003D2178;

typedef struct {
    void *unk0;
    int unk4;
    int unk8;
    int unkC;
} Pool;

extern Pool D_00436208;
extern void *D_00437E18[];
extern void *D_0047D9A8;
extern void *D_00488D98;
extern void *D_00488DF8;

void func_003D13B0(void *arg0) {
    void *sp0;
    void *sp4;
    void *sp10;
    void *obj;
    Pool *p;
    void *ret;
    unsigned int sz;
    void **slot;

    if (D_00436208.unkC == 0) {
        D_00436208.unk8++;
        ret = (void *)((char *)&D_00436208 + 0x10);
    } else {
        ret = func_003CD828(&D_00436208);
    }
    sp10 = ret;

    func_003CD948(&sp10, 0, 0xFFFFFFFFU, arg0, func_003FA9B8(arg0));

    p = (Pool *)((char *)sp10 - 0x10);
    if (p->unkC != 0) {
        ret = func_003CD828(p);
    } else {
        p->unk8++;
        ret = sp10;
    }
    sp4 = ret;

    sp0 = &D_00488DF8;
    sp0 = &D_00488D98;

loop_1484:
    p = (Pool *)((char *)sp10 - 0x10);
    p->unk8--;
    if (p->unk8 == 0) {
        sz = (unsigned int)p->unk4;
        if (sz + 0x10 >= 0x81U) {
            func_002B2028(p);
        } else {
            slot = &D_00437E18[((sz + 0x17) >> 3) - 1];
            *(void **)((char *)sp10 - 0x10) = *slot;
            *slot = p;
        }
    }

    obj = func_002AE7F8(8);
    func_003D27D8(obj, &sp0);
    *(void **)obj = &D_00488D98;

    p = (Pool *)((char *)sp4 - 0x10);
    p->unk8--;
    if (p->unk8 == 0) {
        sz = (unsigned int)p->unk4;
        if (sz + 0x10 >= 0x81U) {
            func_002B2028(p);
        } else {
            slot = &D_00437E18[((sz + 0x17) >> 3) - 1];
            *(void **)((char *)sp4 - 0x10) = *slot;
            *slot = p;
        }
    }

    sp0 = &D_0047D9A8;
    func_002AE8B0(obj, ((void *(**)(void *))*(void **)obj)[1], &func_003D2178);
    func_002AE2F0();

    p = (Pool *)((char *)sp10 - 0x10);
    p->unk8--;
    if (p->unk8 != 0) {
        func_002AE2F0();
        goto loop_1484;
    }
    sz = (unsigned int)p->unk4;
    if (sz + 0x10 >= 0x81U) {
        func_002B2028(p);
        func_002AE2F0();
        goto loop_1484;
    }
    slot = &D_00437E18[((sz + 0x17) >> 3) - 1];
    *(void **)((char *)sp10 - 0x10) = *slot;
    *slot = p;
    func_002AE2F0();
    goto loop_1484;
}
