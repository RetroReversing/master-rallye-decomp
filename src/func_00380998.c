extern void func_002B2028(void *);
extern u32 D_00437E18[];
extern void func_00386C38(void *);
extern s32 func_00386D28(void *, s32, s32);
extern void func_00386CA0(void *, s32);
extern void func_003F9698(const char *, s32);
extern s32 D_00486E38;
extern u32 D_0042FBD8;
extern u8 D_00486E20[];
extern u8 D_0049B848[];
extern s32 func_001D4040(void *, void *);
extern s32 func_001E4280(void);
extern s32 func_001E38C8(s32, void *);
extern void func_001E3EC0(s32, void *, s32);
extern void func_001E33C8(s32, void *, s32);
extern void func_001E3650(s32, void *);

void func_003D1220(void *arg0) {
    s32 size = *(s32 *)((u8 *)arg0 + 0x4);
    if ((u32)(size + 0x10) >= 0x81U) {
        func_002B2028(arg0);
        return;
    }
    u32 *bucket = D_00437E18 + (((u32)(size + 0x17) >> 3) - 1);
    *(s32 *)arg0 = (s32)*bucket;
    *bucket = (u32)arg0;
}

void func_00381358(void *arg0) {
    void *p = *(void **)((u8 *)arg0 + 0x10);
    if (p != NULL) {
        *(s32 *)p = *(s32 *)p - 1;
        if (*(s32 *)p == 0) {
            void *v = *(void **)((u8 *)p + 0x4);
            void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((u8 *)v + 0xC);
            fn((u8 *)p + *(s16 *)((u8 *)v + 0x8), 3, p);
        }
        *(void **)((u8 *)arg0 + 0x10) = NULL;
    }
    *(s32 *)((u8 *)arg0 + 0x8) = 0;
}

s32 func_00380998(void *arg0, s32 arg1) {
    s32 sp[8];
    func_00386C38(sp);
    s32 res = func_00386D28(sp, arg1, *(s32 *)((u8 *)arg0 + 0x4));
    if (res == 0) {
        func_003F9698((const char *)&D_00486E38, arg1);
    }
    func_00386CA0(sp, 2);
    return res;
}

void func_003808A0(void) {
    if (D_0042FBD8 == 0) {
        func_001D4040(D_0049B848, D_00486E20);
        D_0042FBD8 = 1;
    }
    if (func_001E38C8(func_001E4280(), D_0049B848) == 0) {
        func_001E3EC0(func_001E4280(), D_0049B848, 0x10);
        func_001E33C8(func_001E4280(), D_0049B848, 0);
    }
    func_001E3650(func_001E4280(), D_0049B848);
}
