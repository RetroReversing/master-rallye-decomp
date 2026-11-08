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

M2C_UNK func_00377D58(void *, u16 *, void *, void *); /* extern */

s16 func_00377E80(void *arg0) {
    u16 sp0;
    u16 sp10;
    s32 temp_6;
    u16 temp_2;
    void *temp_4;
    void *temp_6_2;

    temp_4 = M2C_FIELD(arg0, void **, 0);
    temp_6 = M2C_FIELD(temp_4, s32 *, 0x18);
    sp0 = -1U;
    if (temp_6 != 0) {
        temp_6_2 = temp_4 + (temp_6 * 0x10);
        M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0x60) - M2C_FIELD(temp_6_2, s32 *, 0));
        temp_2 = M2C_FIELD(temp_6_2, u16 *, 0xC);
        sp10 = temp_2;
        sp0 = temp_2;
        func_00377D58(arg0, &sp10, temp_6_2, arg0);
    }
    return (s16) sp0;
}
