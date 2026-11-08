extern s32 D_0042685C;
extern void *D_00494B60;
extern const char D_0047AD68[];
extern s32 D_0043C3B0[];

extern void func_001D4040(void *, const char *);
extern void func_0029F220(void *, void *);
extern void func_0029F378(void *, void *);
extern void func_0029F708(void *, void *);
extern void func_0029F3C8(void *, void *);
extern void *func_0017E620(void);
extern void func_001D2CD8(void *, void *);

void func_0029F2B8(void *arg0, void *arg1)
{
    if (D_0042685C == 0) {
        func_001D4040(&D_00494B60, D_0047AD68);
        D_0042685C = 1;
    }
    func_0029F220(arg0, arg1);
    if (func_001E3650(func_001E4280(), (s32)&D_00494B60) <= 0) {
        if (*(s32 *)((u8 *)arg0 + 0x2C) != 0) {
            func_0029F708(arg0, arg1);
        }
        if (*(s32 *)((u8 *)arg0 + 0x34) != 0 || *(s32 *)((u8 *)arg0 + 0x2C) != 0) {
            func_0029F378(arg0, arg1);
        }
    }
}

void func_0029F378(void *arg0, void *arg1)
{
    s32 v3c = *(s32 *)((u8 *)arg0 + 0x3C);
    s32 v38 = *(s32 *)((u8 *)arg0 + 0x38);

    if (v38 != v3c) {
        *(s32 *)((u8 *)arg0 + 0x38) = v3c;
        func_0029F3C8(arg0, arg1);
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    } else if (*(s32 *)((u8 *)arg0 + 0x2C) != 0) {
        *(s32 *)((u8 *)arg0 + 0x38) = v3c;
        func_0029F3C8(arg0, arg1);
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    } else {
        *(s32 *)((u8 *)arg0 + 0x34) = 0;
    }
}

void func_0029F940(void *arg0, s32 arg1)
{
    void **obj = (void **)func_0017E620();
    void *vt = *obj;
    void *(*fn)(void *, s32, s32) = *(void *(**)(void *, s32, s32))((u8 *)vt + 0x2C);
    s16 offset = *(s16 *)((u8 *)vt + 0x28);
    void *ret = fn((void *)((u8 *)obj + offset), arg1, 0);
    func_001D2CD8((u8 *)arg0 + 0x30, ret);
    *(s32 *)((u8 *)arg0 + 0x2C) = 1;
}

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2)
{
    s32 *p = D_0043C3B0;
    p[3] = arg0;
    p[1] = arg1;
    p[2] = arg2;
}
