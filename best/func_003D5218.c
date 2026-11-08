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

M2C_UNK func_003DABF8(void *, void *);              /* extern */

void func_003D5218(void *arg0) {
    void *temp_3;
    void *temp_5;

    temp_5 = M2C_FIELD(arg0, void **, 0);
    if (!(M2C_FIELD(temp_5, s32 *, 0) & 0x2000)) {
        temp_3 = M2C_FIELD(temp_5, void **, 0x50);
        M2C_FIELD(temp_3, M2C_UNK (**)(void *, void *), 0x5C)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x58), temp_5);
    } else {
        func_003DABF8(temp_5, temp_5);
    }
    M2C_FIELD(arg0, void **, 0) = NULL;
    M2C_FIELD(arg0, s8 *, 0x1A) = 4;
}
