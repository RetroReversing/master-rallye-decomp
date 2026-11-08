extern s32 D_0043C3B0[];
extern void *func_002B1FC0(s32);
extern void *func_003D2910(s32);
extern void func_00368E78(void **);
extern void func_002B2028(void *);
extern void *D_0042E8E8;

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    register s32 *p = D_0043C3B0;
    p[1] = arg1;
    p[2] = arg2;
    p[3] = arg0;
}

u16 func_0036A768(void *arg0, u32 arg1) {
    u32 sp20 = arg1;
    void *sp0;
    void *sp4 = (u8 *)arg0 + 0x10;
    void *sp14 = (u8 *)arg0 + 0x10;
    u16 var2 = 0xFFFF;
    void *temp4 = *(void **)((u8 *)arg0 + 0x14);
    u32 count = (*(u32 *)((u8 *)arg0 + 0x18) - (u32)temp4) >> 2;
    void *entry = (void *)((u32 *)temp4)[arg1 % count];
    void *cur = entry;
    if (entry != NULL) {
        if (*(u32 *)((u8 *)entry + 0x4) != arg1) {
            cur = entry;
            loop:
            sp4 = (u8 *)arg0 + 0x10;
            if (cur != NULL) {
                if (*(u32 *)((u8 *)cur + 0x4) != sp20) {
                    cur = *(void **)cur;
                    goto loop;
                }
                sp4 = (u8 *)arg0 + 0x10;
            }
        }
    }
    sp4 = (u8 *)arg0 + 0x10;
    sp14 = sp4;
    sp0 = cur;
    if (cur != NULL) {
        var2 = *(u16 *)((u8 *)cur + 0x8);
    }
    return var2;
}

s32 func_0036A728(s32 unused, s32 a, u32 b, u32 c, u32 d, u32 e, u32 f) {
    return (a << 22) | (b & 0x3FF) | (((c >> 3) & 0x7) << 10) | (((d >> 3) & 0x7) << 13) | (((e >> 3) & 0x7) << 16) | (((f >> 3) & 0x7) << 19);
}

void func_00368EE0(s32 arg0, s32 arg1) {
    if (arg1 == 0xFFFF) {
        if (arg0 != 0) {
            void *p = func_002B1FC0(0xC);
            if (p == NULL) {
                p = func_003D2910(0xC);
            }
            D_0042E8E8 = p;
            *(void **)p = p;
            *(void **)((u8 *)p + 0x4) = D_0042E8E8;
            return;
        }
        func_00368E78(&D_0042E8E8);
        func_002B2028(D_0042E8E8);
    }
}
