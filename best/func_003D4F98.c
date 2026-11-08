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

void **func_003D4F98(void **arg0, s32 arg1, s32 arg2) {
    s32 temp_4_2;
    s32 var_2;
    void *temp_3;
    void *temp_4;
    void *temp_4_3;

    temp_4 = *arg0;
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
        temp_4_3 = M2C_FIELD(*arg0, void **, 0);
        temp_3 = *arg0;
        if (M2C_FIELD(M2C_FIELD(temp_4_3, void **, 0x50), s32 (**)(void *, s32, s32), 0x34)(temp_4_3, arg1, arg2) != arg2) {
            M2C_FIELD(temp_3, u8 *, 0x1A) = (u8) (M2C_FIELD(temp_3, u8 *, 0x1A) | 2);
        }
        if (M2C_FIELD(*arg0, s64 *, 0x10) & 0x6000) {
            func_003D5050(arg0);
        }
    }
    return arg0;
}
