s32 func_002B1FC0(void);
void func_003D2910(u32);
void func_003D2B48(u32, u32);
extern u32 D_00437E18[];

void func_003D2ED8(u32 arg0) {
    if (arg0 >= 0x81) {
        if (func_002B1FC0() == 0) {
            func_003D2910(arg0);
            return;
        }
        return;
    } else {
        u32 temp5 = arg0 + 7;
        u32 *p = &D_00437E18[(temp5 >> 3) - 1];
        u32 q = *p;
        if (q) {
            *p = *(u32 *)q;
        } else {
            func_003D2B48(temp5 & ~7, temp5);
        }
    }
}
