extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

extern void *D_0044DCD8;
extern void *D_0047C978;
extern void *D_00494BA0;

void *func_0029AA48(void *arg0) {
    void *v = D_00494BA0;
    void *vt = &D_0047C978;
    s32 neg1 = -1;
    s32 one = 1;
    *(u32 *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    *(void **)((char *)arg0 + 8) = vt;
    *(void **)((char *)arg0 + 4) = v;
    *(s32 *)((char *)arg0 + 0xC) = neg1;
    *(s32 *)((char *)arg0 + 0x18) = one;
    *(s32 *)((char *)arg0 + 0) = neg1;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x14) = 0;
    *(s32 *)((char *)arg0 + 0x1C) = 0;
    *(s32 *)((char *)arg0 + 0x20) = 0;
    return arg0;
}

extern void *D_0047CB38;
extern void *D_00494B98;

void *func_0029A698(void *arg0) {
    s32 *p;
    s32 i;
    void *v;
    void *vt;
    *(u32 *)((char *)arg0 + 4) = 0;
    *(void **)((char *)arg0 + 8) = &D_0044DCD8;
    v = D_00494B98;
    vt = &D_0047CB38;
    *(s32 *)((char *)arg0 + 0) = -1;
    p = (s32 *)((char *)arg0 + 0x14);
    *(void **)((char *)arg0 + 8) = vt;
    i = 3;
    *(void **)((char *)arg0 + 4) = v;
    for (; i != -1; i--) {
        *p++ = 0;
    }
    *(s32 *)((char *)arg0 + 0xC) = 0;
    *(s32 *)((char *)arg0 + 0x10) = 0;
    *(s32 *)((char *)arg0 + 0x28) = 0;
    *(s32 *)((char *)arg0 + 0x24) = 0;
    return arg0;
}
