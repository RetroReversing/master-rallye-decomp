extern void *D_002AD408(int);
extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_002BD8E0(void *, void *);
extern void func_002BCA88(void *, void *, void *, void *, void *, void *, void *);
extern void func_002BCDA8(int);
extern void func_002BCE48(void *);
extern void func_002BDFD0(int);
extern void func_002BE738(void *, int, int, char *);

extern int D_0042D440;
extern unsigned int D_00428D90;
extern unsigned int D_00428D94;
extern int D_00428D98;
extern void *D_00428D9C;
extern char D_00480AE0[];

int func_002BD590(void *arg0, void *arg1, int arg2) {
    void *obj;
    int sp0, sp4, sp8, spC, sp10, sp14;

    func_0040AF58();
    obj = *(void **)((char *)*(void **)((char *)arg1 + 0xC) + 8);
    func_0040AFA0();
    if (arg2 != 0) {
        func_002BD8E0(arg0, obj);
    }
    if (*(int *)((char *)obj + 0x58) != 0) {
        func_002BCA88(obj, &sp0, &sp4, &sp8, &spC, &sp10, &sp14);
        func_002BCDA8(sp10);
        *(int *)((char *)arg1 + 8) = 0;
        *(int *)((char *)arg1 + 4) = sp8;
        *(int *)((char *)arg1 + 0) = sp4;
        func_002BCE48(obj);
        D_0042D440 = 0;
    }
    return 0;
}

typedef struct S_002BE0D8 {
    struct S_002BE0D8 *next;
    int unk4;
    int unk8;
    int size;
} S_002BE0D8;

S_002BE0D8 *func_002BE0D8(void *arg0, S_002BE0D8 **arg1, int arg2) {
    S_002BE0D8 *cur;
    S_002BE0D8 *best;
    int bestSize;

    best = 0;
    bestSize = 0x7FFFFFFF;
    cur = *arg1;
    while (cur != 0) {
        int sz = cur->size;
        if (sz >= arg2) {
            if (sz < bestSize) {
                bestSize = sz;
                best = cur;
                if ((bestSize - arg2) < 0x100) {
                    break;
                }
            }
        }
        cur = cur->next;
    }
    return best;
}

void func_002BE220(void) {
    func_002BDFD0(1);
    func_002BE738(func_002BE550(), 0x1E, 1, D_00480AE0);
}

void *func_002BE550(void) {
    if (D_00428D9C == 0) {
        D_00428D9C = D_002AD408(4);
        D_00428D94 = 0;
        D_00428D90 = 0;
        D_00428D98 = 0;
    }
    return D_00428D9C;
}
