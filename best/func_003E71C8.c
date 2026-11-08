extern s32 func_003E0EA0(s32, s32 *);
extern s32 func_003E4F40(void *, u32);
extern s32 func_003E6C80(void *, s32, s32);
extern s32 func_003E6F10(void *, s32, s32);
extern void func_003E70C0(void);
extern s32 AddDmacHandler_4(s32, void *, s32, u32 *);
extern s32 RemoveDmacHandler_2(s32, s32);
extern s32 func_00403A80(s32);
extern s32 func_00403AE8(s32);
extern void func_0040AF58(void);
extern s32 func_0040AFA0(s32);

#define REG_10002010 (*(volatile s32 *)0x10002010)

void func_003E71C8(void *arg0, void *arg1) {
    s32 sp;
    s32 sp20, sp24;
    s32 t19 = *(s32 *)((char *)arg1 + 0xC) * *(s32 *)((char *)arg1 + 0x10);
    s32 t21 = t19 < 0x400;
    s32 t18;

    sp = 2;
    func_003E0EA0(*(s32 *)((char *)arg0 + 0x858), &sp);
    if (REG_10002010 & 0x4000) {
        REG_10002010 = 0x40000000;
    }
    while (REG_10002010 < 0) {}
    func_003E4F40(arg0, 0);
    while (REG_10002010 < 0) {}
    sp24 = *(s32 *)arg1 & 0x0FFFFFFF;
    sp20 = t19 * 0x18;
    if (0xFFFFu < (u32)sp20) {
        t18 = AddDmacHandler_4(4, func_003E70C0, 0, &sp20);
        *(volatile s32 *)0x1000E010 = 0x10;
        func_00403AE8(4);
        func_0040AF58();
        *(s32 *)0x1000B410 = sp24;
        *(s32 *)0x1000B420 = 0xFFFF;
        *(s32 *)0x1000B400 = 0x101;
        func_0040AFA0(0x101);
        sp24 = (sp24 + 0xFFFF0) & 0x0FFFFFFF;
        sp20 -= 0xFFFF;
        if (t21) {
            func_003E6C80(arg0, *(s32 *)((char *)arg0 + 0xD8), t19);
        } else {
            func_003E6F10(arg0, *(s32 *)((char *)arg0 + 0xD8), t19);
        }
        func_00403A80(4);
        RemoveDmacHandler_2(4, t18);
    } else {
        func_0040AF58();
        *(s32 *)0x1000B410 = *(s32 *)arg1 & 0x0FFFFFFF;
        *(s32 *)0x1000B420 = sp20;
        *(s32 *)0x1000B400 = 0x101;
        func_0040AFA0(0x101);
        sp20 = 0;
        if (t21) {
            func_003E6C80(arg0, *(s32 *)((char *)arg0 + 0xD8), t19);
        } else {
            func_003E6F10(arg0, *(s32 *)((char *)arg0 + 0xD8), t19);
        }
    }
    sp = 3;
    func_003E0EA0(*(s32 *)((char *)arg0 + 0x858), &sp);
}
