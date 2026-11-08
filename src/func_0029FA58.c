extern s32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}

void func_0029FA58(void *arg0, s32 arg1, s32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x3C) = arg2;
    *(s32 *)((u8 *)arg0 + 0x34) = 1;
}

extern void func_001D2458(void *);
extern void func_001D2CD8(void *, void *);
extern void D_002AD390(void *);

void func_0029FA10(void *arg0) {
    s32 buf[4];
    func_001D2458(buf);
    func_001D2CD8((u8 *)arg0 + 0x30, (void *)buf[0]);
    D_002AD390((void *)buf[0]);
    *(s32 *)((u8 *)arg0 + 0x34) = 1;
    *(s32 *)((u8 *)arg0 + 0x2C) = 1;
}

extern void *func_0017E620(void);

void func_0029F9A0(void *arg0, s32 arg1, s32 arg2) {
    void **obj = (void **)func_0017E620();
    void *vt = *obj;
    void *(*fn)(void *, s32, s32) = *(void *(**)(void *, s32, s32))((u8 *)vt + 0x2C);
    s16 offset = *(s16 *)((u8 *)vt + 0x28);
    void *ret = fn((void *)((u8 *)obj + offset), arg1, arg2);
    func_001D2CD8((u8 *)arg0 + 0x30, ret);
    *(s32 *)((u8 *)arg0 + 0x2C) = 1;
}
