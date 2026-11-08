/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0, tried by autopilot */
#ifndef M2C_DEFINES
#define M2C_DEFINES
typedef s32 M2C_UNK;
typedef s8 M2C_UNK8;
typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#define M2C_ERROR(desc) (0)
#define M2C_CARRY 0
#define M2C_OVERFLOW(a) (0)
#endif

M2C_UNK func_001D2DE8(s32, s32);                    /* extern */
M2C_UNK func_001D6278(void *, s32, s32);            /* extern */
M2C_UNK func_0030BE70(void *, s32);                 /* extern */
s32 func_003A4EE8(s32, M2C_UNK);                    /* extern */

void func_00390A98(void **arg0, s32 arg1) {
    s32 sp0;
    s32 sp4;
    M2C_UNK (*temp_6)(void *, s32 *, M2C_UNK);
    void *temp_3;

    sp0 = arg1;
    func_0030BE70(*arg0, arg1);
    func_0030BE70(*arg0, sp0 + 4);
    func_0030BE70(*arg0, sp0 + 8);
    sp4 = 0;
    temp_3 = M2C_FIELD(*arg0, void **, 8);
    temp_6 = M2C_FIELD((temp_3 + 0x90), M2C_UNK (**)(void *, s32 *, M2C_UNK), 4);
    temp_6(M2C_FIELD(temp_3, s16 *, 0x90) + *arg0, &sp4, temp_6);
    if (sp4 != 0) {
        func_001D2DE8(sp0 + 0x10, sp4);
        func_001D6278(*arg0, func_003A4EE8(sp0 + 0x10, 0), sp4 + 1);
    }
}
