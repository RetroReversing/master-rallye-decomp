extern void func_002B2028(void *p);
extern int func_002A1D10(void *a0, void *a1);
extern void func_001D4040(void *a0, char *s);
extern void *D_002AD408(int size);
extern void func_001D3310(void *p);
extern void func_002A1A00(void *a0, void *a1);
extern void func_002A23C8(void *a0, int a1, void *a2);

extern int D_0042686C;
extern char D_0047C3B8[];
extern int D_00494B70;
extern char D_0047C6B8[];

void func_002A6D88(void *arg0) {
    void **headp = (void **)arg0;
    void *head = *headp;
    void *n = *(void **)head;
    if (n != head) {
        void *cur = n;
        do {
            n = *(void **)cur;
            func_002B2028(cur);
            cur = n;
        } while (n != head);
    }
    *(void **)head = head;
    *((void **)head + 1) = head;
}

void func_002A2398(void *arg0) {
    if (*(int *)((char *)arg0 + 8) == 1) {
        func_002A1D10(0, arg0);
    }
}

void func_002A2328(void *arg0, int arg1) {
    int v;
    if (arg1 != 0) {
        v = *(int *)((char *)arg0 + 4);
    } else {
        if (D_0042686C == 0) {
            func_001D4040(&D_00494B70, D_0047C3B8);
            D_0042686C = 1;
        }
        v = D_00494B70;
    }
    *(int *)arg0 = v;
}

void func_002A2208(void *arg0, void *arg1, int arg2) {
    int sp0;
    void *p;

    *(int *)((char *)arg0 + 8) = arg2;
    sp0 = 0;
    func_002A23C8(&sp0, 0, (void *)&sp0);
    p = D_002AD408(0x24);
    func_001D3310(p);
    *(void **)((char *)p + 0x14) = D_0047C6B8;
    func_002A1A00(p, &sp0);
}
