extern void *D_002AD408(s32);
extern void func_001E2460(void *, void *);
extern void func_001E2C78(void *, void *, s32);
extern void *D_0044DD18;
extern void *D_0047BA70;
extern void *D_0047BB30;
extern void *D_0047BB40;

void *func_0029D0D0(void *arg0) {
    char sp[0x40];
    void *obj;
    void *p;

    obj = D_002AD408(0x24);
    *(s32 *)((u8 *)obj + 8) = 0;
    *(void **)((u8 *)obj + 0x10) = &D_0044DD18;
    p = (u8 *)obj + 0x14;
    *(s32 *)((u8 *)obj + 0xC) = 0;
    *(s32 *)((u8 *)obj + 4) = 0;
    *(s32 *)((u8 *)obj + 0) = 0;
    *(s32 *)((u8 *)obj + 0x14) = 0;
    *(s32 *)((u8 *)p + 8) = 0;
    *(s32 *)((u8 *)p + 4) = 0;
    *(s32 *)((u8 *)obj + 0x20) = 0;
    func_001E2460(sp, obj);
    func_001E2C78(sp, &D_0047BA70, *(s32 *)((u8 *)arg0 + 0xC));
    func_001E2C78(sp, &D_0047BB30, *(s32 *)((u8 *)arg0 + 0x10));
    func_001E2C78(sp, &D_0047BB40, *(s32 *)((u8 *)arg0 + 0x14));
    return obj;
}

extern s32 func_00296710(void);
extern s32 func_00296530(s32, void *);
extern void func_002060F8(s32);

void func_0029C268(void *arg0, void *arg1) {
    if (func_00296530(func_00296710(), arg1) != 0) {
        func_002060F8(*(s32 *)((u8 *)arg1 + 0x4C));
    }
}

extern void func_0029C268(void *, void *);
extern void func_0029C2A8(void *, s32);
extern void func_0029C570(void *, s32);

void func_0029C1C8(void *arg0, void *arg1) {
    s32 v = *(s32 *)((u8 *)arg0 + 0x10);
    switch (v) {
    case 1:
        func_0029C268(arg0, arg1);
        break;
    case 2:
        func_0029C2A8(arg0, 0);
        break;
    case 3:
        func_0029C570(arg0, 0);
        break;
    case 4:
        func_0029C2A8(arg0, 1);
        break;
    case 5:
        func_0029C570(arg0, 1);
        break;
    }
}

void func_0029C1A0(void *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 arg4, s32 *arg5, s32 *arg6) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = arg2;
    *(s32 *)((u8 *)arg0 + 0x2C) = arg4;
    *(s32 *)((u8 *)arg0 + 0x14) = *arg3;
    *(s32 *)((u8 *)arg0 + 0x18) = *arg5;
    *(s32 *)((u8 *)arg0 + 0x1C) = *arg6;
}
