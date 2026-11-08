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

s32 func_001D4010(s32 *);                           /* extern */
M2C_UNK func_0021ECC8(s32, s32);                    /* extern */
M2C_UNK func_0021EDA0(s32, s32);                    /* extern */
s32 func_0021F4B0();                                /* extern */
s32 func_002971B0(s32);                             /* extern */
s32 func_002971F8(s32);                             /* extern */
M2C_UNK func_00297398(s32, s32);                    /* extern */
M2C_UNK func_002973F0(s32, M2C_UNK);                /* extern */
s32 func_00297500();                                /* extern */
M2C_UNK func_002A1D30(s32, s32 *, s32, M2C_UNK);    /* extern */
s32 func_002A2458();                                /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32);              /* extern */
extern M2C_UNK D_0047BDB8;

void func_0029A900(void *arg0) {
    s32 *var_16;
    s32 var_17;

    if ((M2C_FIELD(arg0, s32 *, 0x28) != 0) && (func_002971B0(func_00297500()) == M2C_FIELD(arg0, s32 *, 0x28)) && (func_002971F8(func_00297500()) == 4)) {
        func_002973F0(func_00297500(), 0);
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            func_0021ECC8(func_0021F4B0(), M2C_FIELD(arg0, s32 *, 0xC));
        }
        var_17 = 0;
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            func_0021EDA0(func_0021F4B0(), M2C_FIELD(arg0, s32 *, 0x10));
        }
        var_16 = arg0 + 0x14;
        do {
            if (*var_16 != 0) {
                func_003F9698(&D_0047BDB8, func_001D4010(var_16));
                func_002A1D30(func_002A2458(), var_16, var_17 == 0, 1);
            }
            var_17 += 1;
            var_16 += 4;
        } while (var_17 < 4);
        if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
            func_00297398(func_00297500(), M2C_FIELD(arg0, s32 *, 0x24));
        }
    }
}
