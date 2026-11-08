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

void *func_003B5A70(void *arg0, void *arg2) {
    M2C_UNK32 sp0;
    M2C_UNK32 sp4;
    M2C_UNK32 sp8;
    M2C_UNK32 sp10;
    M2C_UNK32 sp14;
    M2C_UNK32 sp18;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    sp0 = 0;
    sp4 = 0;
    sp8 = 0;
    temp_3 = M2C_FIELD(arg2, void **, 8);
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, M2C_UNK32 *), 0x84)(arg2 + M2C_FIELD(temp_3, s16 *, 0x80), &sp10);
    temp_3_2 = M2C_FIELD(arg2, void **, 8);
    sp0 = sp10;
    M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, M2C_UNK32 *), 0x84)(arg2 + M2C_FIELD(temp_3_2, s16 *, 0x80), &sp14);
    temp_3_3 = M2C_FIELD(arg2, void **, 8);
    sp4 = sp14;
    M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, M2C_UNK32 *), 0x84)(arg2 + M2C_FIELD(temp_3_3, s16 *, 0x80), &sp18);
    M2C_FIELD(arg0, M2C_UNK32 *, 0) = sp0;
    M2C_FIELD(arg0, M2C_UNK32 *, 4) = sp4;
    M2C_FIELD(arg0, M2C_UNK32 *, 8) = sp18;
    sp8 = sp18;
    return arg0;
}
