extern void func_002B2028(void *p);
extern void func_002A1D10(void *a0, void *a1);
extern void func_001D4040(void *a0, char *s);
extern void *D_002AD408(int size);
extern void func_001D3310(void *p);
extern void func_002A1A00(void *a0, void *a1);
extern void func_002A23C8(void *a0, void *a1, void *a2);

extern int D_0042686C;
extern char D_0047C3B8[];
extern int D_00494B70;
extern char D_0047C6B8[];

void func_002A2398(void *arg0) {
    if (*(int *)((char *)arg0 + 8) == 1) {
        func_002A1D10(arg0, arg0);
    }
}

void func_002A2328(int *arg0, int arg1) {
    int v;
    if (arg1 != 0) {
        v = arg0[1];
    } else {
        if (D_0042686C == 0) {
            func_001D4040(&D_00494B70, D_0047C3B8);
            D_0042686C = 1;
        }
        v = D_00494B70;
    }
    *arg0 = v;
}

void func_002A2208(void *arg0, void *arg1, int arg2) {
    void *p;
    int sp0 = 0;

    *(int *)((char *)arg0 + 8) = arg2;
    func_002A23C8(arg0, arg1, &sp0);
    p = D_002AD408(0x24);
    func_001D3310(p);
    *(void **)((char *)p + 0x14) = D_0047C6B8;
    func_002A1A00(p, &sp0);
}

void func_002A6D88(void **arg0) {
    void **head = arg0;
    void *h = *head;
    void **n = (void **)*(void **)h;

    if (n != (void **)h) {
        do {
            void **next = (void **)*n;
            func_002B2028(n);
            n = next;
        } while (n != (void **)*head);
    }
    *(void **)h = h;
    *((void **)h + 1) = h;
}
