extern void *func_002B1FC0(int, void *);
extern void *func_003D2910(int, void *);

typedef struct S1 {
    struct S1 *next;
    short unk4;
    int unk8;
} S1;

typedef struct T1 {
    int unk4;
    int unk8;
    void **unkC;
    int unk10;
} T1;

void *func_001531D8(void *arg0, T1 *arg1, S1 *arg2) {
    int rem;
    S1 *cur;
    S1 *p;
    S1 *newp;
    int tmp;
    rem = (short)arg2->unk4 % ((arg1->unk8 - arg1->unk4) >> 2);
    cur = *(S1 **)(arg1->unk4 + rem * 4);
    p = cur;
    if (p) {
        do {
            if (p->unk4 == arg2->unk4) {
                *(int *)arg0 = p->unk8;
                *(int *)(arg0 + 4) = (int)arg1;
                ((int *)arg0)[2] = 0;
                return arg0;
            }
            p = p->next;
        } while (p);
    }
    newp = (S1 *)func_002B1FC0(8, 0);
    tmp = (int)newp + 4;
    if (newp == 0) {
        newp = (S1 *)func_003D2910(8, 0);
        tmp = (int)newp + 4;
    }
    if (tmp != 0) {
        *(int *)(tmp) = 0;
    }
    if (newp != 0) {
        *(short *)((char *)newp + 4) = *(short *)((char *)arg2);
    }
    newp->next = cur;
    *(S1 **)(arg1->unk4 + rem * 4) = newp;
    arg1->unk10++;
    *(int *)arg0 = *(int *)((char *)newp + 4);
    *(int *)(arg0 + 4) = (int)arg1;
    ((int *)arg0)[2] = 1;
    return arg0;
}
