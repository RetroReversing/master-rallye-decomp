extern s32 func_003A32A8(s32);
extern void func_003D2EB8(void *, s32);
extern u32 D_0040E618[];

void func_003A32E8(void *arg0, s32 arg1) {
    volatile void *sp0 = arg0;
    volatile s32 sp4;
    volatile s32 sp8;
    volatile s32 spC;
    s32 idx;
    u32 *slot;

    sp4 = arg1;
    if (sp4 != 0) {
        func_003D2EB8((void *)sp0, sp4);
    } else {
        idx = func_003A32A8(sp4);
        sp8 = idx;
        slot = &D_0040E618[sp8];
        spC = (s32)slot;
        *(u32 *)sp0 = *(u32 *)spC;
        *(u32 *)spC = (u32)sp0;
    }
}

extern f32 func_003F3E80(f32);

f32 func_003A3120(f32 arg0) {
    volatile f32 sp0;
    f32 temp;
    sp0 = arg0;
    temp = sp0;
    temp = func_003F3E80(temp);
    return temp;
}

extern void func_003A88A0(void *);
extern void func_003A88D0(void *, void *);
extern void func_003A8930(void *, s32);
extern void func_003A8990(void *, s32);
extern u8 D_0042FD60[];

void func_003A3078(s32 arg0, s32 arg1) {
    volatile s32 sp0;
    volatile s32 sp4;
    u8 sp10[16];

    sp0 = arg0;
    sp4 = arg1;
    if (sp4 == 0xFFFF) {
        if (sp0 != 0) {
            func_003A88A0(sp10);
            func_003A88D0(D_0042FD60, sp10);
            func_003A8930(sp10, 2);
        } else {
            func_003A8990(D_0042FD60, 2);
        }
    }
}

extern void func_003A0770(void *, void *);

void *func_003A2658(void *arg0, s32 arg1, void *arg2, s8 arg3) {
    volatile void *sp0;
    volatile s32 sp4;
    volatile void *sp8;
    volatile s8 spC;
    void *sp10;

    sp0 = arg0;
    sp4 = arg1;
    sp8 = arg2;
    spC = arg3;
    sp10 = (void *)sp0;
    while (sp4 != 0) {
        func_003A0770(sp10, (void *)sp8);
        sp4--;
        sp10 = (void *)((u8 *)sp10 + 0x1C);
    }
    return sp10;
}
