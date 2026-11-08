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

M2C_UNK func_002C1C58(void *);                      /* extern */
M2C_UNK func_002C1F28(void *);                      /* extern */
M2C_UNK func_002C20E0();                            /* extern */

s32 func_002C2870(void *arg0) {
    void *temp_2;
    void *temp_2_2;

    if (M2C_FIELD(arg0, s32 *, 0x64) != 0) {
        temp_2 = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
        M2C_FIELD(temp_2, M2C_UNK (**)(void *), 0x2C)(arg0 + M2C_FIELD(temp_2, s16 *, 0x28));
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        func_002C20E0();
        func_002C1C58(arg0 + 0x1C);
        goto block_4;
    }
    temp_2_2 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2_2, M2C_UNK (**)(void *), 0x1C)(arg0 + M2C_FIELD(temp_2_2, s16 *, 0x18));
    if (M2C_FIELD(arg0, s32 *, 0x64) == 0) {
        func_002C20E0();
        func_002C1F28(arg0 + 0x1C);
block_4:
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
    }
    return 1;
}
