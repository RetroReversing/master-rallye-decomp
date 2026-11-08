extern void func_0029C268(void *, void *);
extern void func_0029C2A8(void *, s32);
extern void func_0029C570(void *, s32);

void func_0029C1C8(void *arg0, void *arg1) {
    s32 v = *(s32 *)((u8 *)arg0 + 0x10);
    void *saved = arg0;
    (void)arg1;
    switch (v) {
    case 1:
        func_0029C268(saved, saved);
        break;
    case 2:
        func_0029C2A8(saved, 0);
        break;
    case 3:
        func_0029C570(saved, 0);
        break;
    case 4:
        func_0029C2A8(saved, 1);
        break;
    case 5:
        func_0029C570(saved, 1);
        break;
    }
}

void func_0029C1A0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6) {
    *(s32 *)((u8 *)arg0 + 0xC) = arg1;
    *(s32 *)((u8 *)arg0 + 0x10) = arg2;
    *(s32 *)((u8 *)arg0 + 0x14) = *(s32 *)arg3;
    *(s32 *)((u8 *)arg0 + 0x2C) = arg4;
    *(s32 *)((u8 *)arg0 + 0x18) = *(s32 *)arg5;
    *(s32 *)((u8 *)arg0 + 0x1C) = *(s32 *)arg6;
}
