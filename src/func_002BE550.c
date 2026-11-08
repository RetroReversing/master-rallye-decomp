extern void *D_002AD408(int);
extern void func_002BDFD0(int, int);
extern void func_002BE738(void *, int, int, char *);

extern unsigned int D_00428D90;
extern unsigned int D_00428D94;
extern int D_00428D98;
extern void *D_00428D9C;
extern char D_00480AE0[];

void *func_002BE550(void) {
    void *ret = D_00428D9C;
    if (ret == 0) {
        ret = D_002AD408(4);
        D_00428D94 = 0;
        D_00428D90 = 0;
        D_00428D98 = 0;
        D_00428D9C = ret;
    }
    return D_00428D9C;
}

void func_002BE220(void) {
    func_002BDFD0(0, 1);
    func_002BE738(func_002BE550(), 0x1E, 1, D_00480AE0);
}

typedef struct S_002BE0D8 {
    struct S_002BE0D8 *next;
    int unk4;
    int unk8;
    int size;
} S_002BE0D8;

S_002BE0D8 *func_002BE0D8(void *a0, S_002BE0D8 **a1, int a2) {
    S_002BE0D8 *cur;
    S_002BE0D8 *best;
    int bestSize;

    best = 0;
    bestSize = 0x7FFFFFFF;
    cur = *a1;
    while (cur != 0) {
        int sz = cur->size;
        if (sz >= a2) {
            if (sz < bestSize) {
                bestSize = sz;
                best = cur;
                if ((bestSize - a2) < 0x100) {
                    goto out;
                }
            }
        }
        cur = cur->next;
    }
out:
    return best;
}
