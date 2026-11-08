extern void func_003A8528(s32, s32);
extern void func_0039A670(s32, s32);

s32 func_0039AB80(s32 arg0, s32 arg1, s32 arg2, s8 arg3) {
    volatile s32 sp0 = arg0;
    volatile s32 sp4 = arg1;
    volatile s32 sp8 = arg2;
    volatile s8 spC = arg3;
    volatile s32 sp10 = sp8;
    while (sp0 != sp4) {
        func_003A8528(sp10, sp0);
        sp0 += 0x30;
        sp10 += 0x30;
    }
    return sp10;
}

f32 func_0039AA38(void) {
    volatile f32 x = 6.2831855f;
    return x;
}

void func_0039A6D0(s32 arg0, s32 arg1, s32 arg2) {
    volatile s32 a = arg0;
    volatile s32 b = arg1;
    volatile s32 c = arg2;
    (void)a;
    func_0039A670(b, c);
}
