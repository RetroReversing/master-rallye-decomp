extern void *func_001D4DB8(void *);
extern void func_003F9698(const char *, int, int, int, int);
extern void func_002B2028(void *);
extern void *D_002AD390(void *);

void func_001D4E78(void *arg0) {
    func_001D4DB8(arg0);
    *(int *)((char *)arg0 + 0x28) = 1;
    *(int *)((char *)arg0 + 0x10) = 0;
    *(int *)((char *)arg0 + 0x14) = 0;
    *(int *)((char *)arg0 + 0x18) = 0;
    *(int *)((char *)arg0 + 0x1C) = 1;
    *(int *)((char *)arg0 + 0x20) = 1;
    *(int *)((char *)arg0 + 0x24) = 1;
    *(int *)((char *)arg0 + 0x30) = 0;
    *(int *)((char *)arg0 + 0x2C) = 0;
    *(int *)((char *)arg0 + 0x3C) = 0;
}

void func_001D4E40(void *arg0) {
    func_003F9698("AREA 2D: X=%d, Y=%d, W=%d, H=%d\n", 
                   *(int *)((char *)arg0 + 0), 
                   *(int *)((char *)arg0 + 4), 
                   *(int *)((char *)arg0 + 8), 
                   *(int *)((char *)arg0 + 0xC));
}

void func_001D4ED0(void *arg0, int arg1) {
    void *t = *(void **)((char *)arg0 + 0x3C);
    if (t != 0) {
        func_002B2028(t);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_001D4E00(void *arg0, int arg1, int arg2, int arg3, int arg4) {
    *(int *)((char *)arg0 + 0xC) = arg4;
    *(int *)((char *)arg0 + 0) = arg1;
    *(int *)((char *)arg0 + 4) = arg2;
    *(int *)((char *)arg0 + 8) = arg3;
}
