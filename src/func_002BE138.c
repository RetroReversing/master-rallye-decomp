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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_002B1FC0(M2C_UNK);                         /* extern */
M2C_UNK func_002BE050(void *, void *, s32);         /* extern */
s32 func_002BEC58(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_003F94D0(s32, M2C_UNK, M2C_UNK);       /* extern */
extern M2C_UNK D_00480AD0;
extern M2C_UNK D_00480C68;

void *func_002BE138(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 var_18;

    var_18 = arg1;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &D_00480C68;
    M2C_FIELD(arg0, s32 *, 8) = func_002BEC58(D_002AD408(8), &D_00480AD0, 0);
    if (var_18 != 0) {
        do {
            var_18 -= 1;
            temp_2 = func_002B1FC0(0x10);
            func_003F94D0(temp_2, 0, 0x10);
            func_002BE050(arg0, arg0 + 0x10, temp_2);
        } while (var_18 != 0);
    }
    return arg0;
}
