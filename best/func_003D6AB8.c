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

extern s32 D_00439528;
extern M2C_UNK *D_00439538;
extern M2C_UNK *D_00439578;
extern M2C_UNK *D_004395C0;
extern M2C_UNK *D_00439600;
extern M2C_UNK D_0043A6E0;
extern M2C_UNK D_0043A738;
extern M2C_UNK D_0043A790;
extern M2C_UNK D_0043A7E8;
extern M2C_UNK D_0043A848;
extern M2C_UNK D_0043A8A8;

s32 func_003D6AB8(s32 arg0) {
    M2C_UNK *var_2;
    M2C_UNK *var_3;
    M2C_UNK *var_4;
    s32 temp_2;

    if (arg0 != D_00439528) {
        if (arg0 != 0) {
            var_3 = &D_0043A7E8;
            var_2 = &D_0043A8A8;
            var_4 = &D_0043A848;
        } else {
            var_3 = &D_0043A6E0;
            var_2 = &D_0043A790;
            var_4 = &D_0043A738;
        }
        D_004395C0 = var_3;
        D_00439538 = var_4;
        D_00439600 = var_2;
        D_00439578 = var_2;
        temp_2 = D_00439528;
        D_00439528 = arg0;
        return temp_2;
    }
    return arg0;
}
