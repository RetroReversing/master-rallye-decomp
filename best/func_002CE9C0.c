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

M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *, s32);   /* extern */
s32 func_003FA760(M2C_UNK *, M2C_UNK *);            /* extern */
s32 func_003FA9B8();                                /* extern */
s32 func_003FAAF0(M2C_UNK *, s32, s32);             /* extern */
extern s32 D_004294E8;
extern s32 *D_004297EC;
extern M2C_UNK D_00483380;
extern M2C_UNK D_00483510;
extern M2C_UNK D_00483530;

s32 *func_002CE9C0(M2C_UNK *arg0, s32 arg1) {
    s32 *temp_19;
    s32 *var_16;
    s32 *var_19;
    s32 *var_2;
    s32 temp_18;
    s32 temp_5;

    var_19 = NULL;
    temp_18 = func_003FA9B8();
    var_16 = &D_004294E8;
loop_1:
    temp_5 = *var_16;
    if (temp_5 != 0) {
        if (func_003FAAF0(arg0, temp_5, temp_18) != 0) {
            var_16 += 0xC;
            goto loop_1;
        }
        var_19 = var_16;
    }
    var_2 = var_19;
    if (var_19 == NULL) {
        var_2 = var_19;
        if (func_003FA760(&D_00483510, arg0) != 0) {
            if (arg1 != 0) {
                D_004297EC = func_002CE9C0(&D_00483380, 0);
            }
            if (D_004297EC == NULL) {
                D_004297EC = &D_004294E8;
            }
            temp_19 = D_004297EC;
            if (arg1 != 0) {
                func_003F9698(&D_00483530, arg0, *temp_19);
            }
            var_2 = temp_19;
        }
    }
    return var_2;
}
