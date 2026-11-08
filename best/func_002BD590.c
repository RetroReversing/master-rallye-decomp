extern void func_0040AF58(void);
extern void func_0040AFA0(void);
extern void func_002BD8E0(void *, void *);
extern void func_002BCA88(void *, int *, int *, int *, int *, int *, int *);
extern void func_002BCDA8(int);
extern void func_002BCE48(void *);

extern int D_0042D440;

int func_002BD590(void *arg0, void *arg1, int arg2) {
    void *obj;
    int sp0, sp4, sp8, spC, sp10, sp14;
    int v8, v4;

    func_0040AF58();
    obj = *(void **)((char *)*(void **)((char *)arg1 + 0xC) + 8);
    func_0040AFA0();
    if (arg2 != 0) {
        func_002BD8E0(arg0, obj);
    }
    if (*(int *)((char *)obj + 0x58) != 0) {
        func_002BCA88(obj, &sp0, &sp4, &sp8, &spC, &sp10, &sp14);
        func_002BCDA8(sp10);
        v8 = sp8;
        v4 = sp4;
        *(int *)((char *)arg1 + 8) = 0;
        *(int *)((char *)arg1 + 4) = v8;
        *(int *)((char *)arg1 + 0) = v4;
        func_002BCE48(obj);
        D_0042D440 = 0;
    }
    return 0;
}
