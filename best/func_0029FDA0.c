extern int D_0043C3B0[];

void func_003F0B30(int arg0, int arg1, int arg2) {
    int *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

extern int func_00297500(void);
extern int func_002971B0(int);
extern void func_0029FE48(void *, void *, int, int, int *);

void func_0029FDA0(void *arg0, void *arg1) {
    void *obj = *(void **)((char *)arg1 + 0x4C);
    int sp0;

    if (obj == 0) return;
    if ((*(int *)((char *)obj + 0x78) & 1) == 0) return;

    sp0 = 0;
    {
        int val = func_002971B0(func_00297500());
        if (val != *(int *)((char *)arg0 + 0x14)) {
            sp0 = *(int *)((char *)arg0 + 0xC);
        } else {
            int v = *(int *)((char *)arg0 + 0x10);
            if (v != 0) {
                sp0 = v;
            } else {
                sp0 = *(int *)((char *)arg0 + 0xC);
            }
        }
    }

    if (sp0 != *(int *)((char *)*(void **)((char *)obj + 8) - 0x28)) {
        int sp10 = sp0;
        func_0029FE48(arg0, arg1, *(int *)((char *)arg0 + 0x18), *(int *)((char *)arg0 + 0x1C), &sp10);
    }
}

extern void *D_0044DCD8;
extern void *D_0047CA78;
extern int D_00494BF8;

void *func_0029FA90(void *arg0) {
    *(int *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    {
        void *v = D_00494BF8;
        void *vt = &D_0047CA78;
        *(void **)((char *)arg0 + 8) = vt;
        *(void **)((char *)arg0 + 4) = v;
        *(int *)((char *)arg0 + 0) = -1;
    }
    *(int *)((char *)arg0 + 0x20) = 3;
    *(int *)((char *)arg0 + 0xC) = 0;
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x1C) = 3;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0x18) = 3;
    *(int *)((char *)arg0 + 0x24) = 3;
    *(int *)((char *)arg0 + 0x28) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    return arg0;
}

void func_0029FA68(void *arg0, void *arg1, void *arg2) {
    void *dst = (char *)arg0 + 0x40;
    *(float *)((char *)arg0 + 0x40) = *(float *)((char *)arg2 + 0);
    *(float *)((char *)dst + 4) = *(float *)((char *)arg2 + 4);
    *(float *)((char *)dst + 8) = *(float *)((char *)arg2 + 8);
    *(float *)((char *)dst + 0xC) = *(float *)((char *)arg2 + 0xC);
}
