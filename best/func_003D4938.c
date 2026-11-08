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

M2C_UNK func_003D4D70(s32);                         /* extern */
M2C_UNK func_003D5050(void **);                     /* extern */
s32 func_003D9CF8(void *, s8, s32);                 /* extern */
s32 func_003FA9B8(M2C_UNK *);                       /* extern */
extern M2C_UNK D_00488F10;

void **func_003D4938(void **arg0, M2C_UNK *arg1) {
    M2C_UNK *var_21;
    M2C_UNK *var_4;
    s32 temp_17;
    s32 temp_19;
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_4_2;
    s32 var_2;
    s8 temp_22;
    void *temp_20;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_4;

    temp_4 = *arg0;
    var_21 = arg1;
    if (M2C_FIELD(temp_4, u8 *, 0x1A) != 0) {
        var_2 = 0;
    } else {
        temp_4_2 = M2C_FIELD(temp_4, s32 *, 4);
        var_2 = 1;
        if (temp_4_2 != 0) {
            func_003D4D70(temp_4_2);
            var_2 = 1;
        }
    }
    if (var_2 != 0) {
        var_4 = var_21;
        if (var_21 == NULL) {
            var_21 = &D_00488F10;
            var_4 = &D_00488F10;
        }
        temp_2 = func_003FA9B8(var_4);
        temp_3 = *arg0;
        temp_19 = temp_2;
        temp_2_2 = M2C_FIELD(temp_3, s32 *, 8);
        temp_22 = M2C_FIELD(temp_3, s8 *, 0x18);
        temp_20 = M2C_FIELD(temp_3, void **, 0);
        temp_17 = (temp_19 < temp_2_2) ? (temp_2_2 - temp_19) : 0;
        M2C_FIELD(temp_3, s32 *, 8) = 0;
        if ((!(M2C_FIELD(temp_3, s64 *, 0x10) & 2) && (temp_17 > 0) && (func_003D9CF8(temp_20, temp_22, temp_17) != temp_17)) || (M2C_FIELD(M2C_FIELD(temp_20, void **, 0x50), s32 (**)(void *, M2C_UNK *, s32), 0x34)(temp_20, var_21, temp_19) != temp_19)) {
            temp_3_2 = *arg0;
            M2C_FIELD(temp_3_2, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_2, u8 *, 0x1A) | 4);
        } else {
            if ((M2C_FIELD(*arg0, s64 *, 0x10) & 2) && (temp_17 > 0)) {
                temp_3_3 = *arg0;
                if (func_003D9CF8(temp_20, temp_22, temp_17) != temp_17) {
                    M2C_FIELD(temp_3_3, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3_3, u8 *, 0x1A) | 4);
                }
            }
            if (M2C_FIELD(*arg0, s64 *, 0x10) & 0x6000) {
                func_003D5050(arg0);
            }
        }
    }
    return arg0;
}
