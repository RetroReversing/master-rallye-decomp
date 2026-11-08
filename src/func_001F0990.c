extern void *D_002AD408(s32);
extern void func_001F7EC8(void *);
extern u8 D_00478A70;

void *func_001F0990(void *arg0, s32 arg1) {
    void *obj;

    if (arg1 != 1) {
        return NULL;
    }
    obj = D_002AD408(0x1C);
    func_001F7EC8(obj);
    *(u8 **)((u8 *)obj + 0x10) = &D_00478A70;
    return obj;
}

s32 func_001F0A58(void **arg0, void *arg1) {
    s32 buf[2];
    void *obj;
    void *vt;
    s32 res;
    s16 off;

    obj = *arg0;
    vt = *(void **)((u8 *)obj + 8);
    off = *(s16 *)((u8 *)vt + 0x50);
    res = ((s32 (*)(void *, s32 *, s32, void *))*(s32 *)((u8 *)vt + 0x54))((u8 *)obj + off, buf, 8, obj);
    if (res == 0) {
        return 0;
    }
    *(s32 *)((u8 *)arg1 + 0x1C) = buf[0];
    *(s32 *)((u8 *)arg1 + 0x20) = buf[1];
    return 1;
}
