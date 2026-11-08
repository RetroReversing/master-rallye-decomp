/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_0040B540(M2C_UNK *, s32);              /* extern */
extern s32 D_00441114;
extern M2C_UNK D_0049E400;

void func_004045C8(s8 arg0) {
    s32 var_5;
    void *temp_2;

    var_5 = D_00441114;
    if (var_5 >= 0x7E) {
        D_00441114 = 0;
        M2C_FIELD(&D_0049E400, s8 *, 0x7F) = 0;
        func_0040B540(&D_0049E400, var_5);
        var_5 = D_00441114;
    }
    if (arg0 == 0xA) {
        D_00441114 = 0;
        temp_2 = var_5 + &D_0049E400;
        M2C_FIELD(temp_2, s8 *, 0) = arg0;
        M2C_FIELD(temp_2, s8 *, 1) = 0;
        func_0040B540(&D_0049E400, var_5);
        return;
    }
    D_00441114 = var_5 + 1;
    *(var_5 + &D_0049E400) = arg0;
}
