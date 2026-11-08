extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void func_002BE050(void *, void *, void *);
extern void func_002BE070(void *, void *, void *);
extern void func_002BEE48(s32, s32);

void func_002BE420(void *arg0, s32 arg1, s32 arg2) {
    void *node;
    node = *(void **)((char *)arg0 + 0x10);
    if (node != 0) {
        func_002BE070(arg0, (char *)arg0 + 0x10, node);
        *(s32 *)((char *)node + 8) = arg1;
        *(s32 *)((char *)node + 0xC) = arg2;
        func_002BE050(arg0, (char *)arg0 + 0x14, node);
        func_002BEE48(*(s32 *)((char *)arg0 + 8), 1);
    }
}

extern void func_002BE498(void *, s32);

void func_002BE3D0(void *arg0, void *arg1) {
    s32 type = *(s32 *)((char *)arg1 + 0xC);
    if (type == 0) {
        func_002BE420(arg0, *(s32 *)((char *)arg1 + 0x1C), *(s32 *)((char *)arg1 + 0x18));
    } else if (type == 1) {
        func_002BE498(arg0, *(s32 *)((char *)arg1 + 0x1C));
    }
}

extern void *func_002BE0A8(void *, void *, s32);
extern void func_002BEDD8(s32, s32);

void func_002BE358(void *arg0, s32 arg1) {
    void *node;
    node = func_002BE0A8(arg0, (char *)arg0 + 0x18, arg1);
    if (node != 0) {
        func_002BE070(arg0, (char *)arg0 + 0x18, node);
        func_002BE050(arg0, (char *)arg0 + 0x14, node);
        func_002BEDD8(*(s32 *)((char *)arg0 + 8), 1);
    }
}
