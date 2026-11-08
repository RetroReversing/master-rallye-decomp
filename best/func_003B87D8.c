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

s32 func_003B87D8(void *arg0) {
    void *sp0;
    void **sp10;
    s32 temp_2_2;
    s32 temp_3;
    void **temp_2;
    void **temp_2_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;

    temp_2 = M2C_FIELD(arg0, void ***, 0x3C);
    temp_3_2 = *temp_2;
    sp10 = temp_2;
    sp0 = temp_3_2;
    if (temp_3_2 != temp_2) {
loop_1:
        temp_3_3 = sp0 + 8;
        temp_2_2 = M2C_FIELD(temp_3_3, s32 *, 4);
        if (temp_2_2 > 0) {
            M2C_FIELD(temp_3_3, s32 *, 4) = (s32) (temp_2_2 - 1);
            temp_3 = M2C_FIELD(sp0, s32 *, 0x10);
            M2C_FIELD(sp0, s32 *, 0x10) = (s32) (temp_3 + 1);
            return M2C_FIELD(sp0, s32 *, 8) + (temp_3 * 8);
        }
        temp_3_4 = M2C_FIELD(sp0, void **, 0);
        temp_2_3 = M2C_FIELD(arg0, void ***, 0x3C);
        sp0 = temp_3_4;
        sp10 = temp_2_3;
        if (temp_3_4 == temp_2_3) {
            goto loop_4;
        }
        goto loop_1;
    }
loop_4:
    goto loop_4;
}
