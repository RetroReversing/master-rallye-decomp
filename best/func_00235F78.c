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

s32 func_00235F78(void *arg0, void *arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_3;
    s32 temp_4;

    temp_4 = M2C_FIELD(arg1, s32 *, 0);
    temp_2 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_4 != temp_2) {
        temp_3 = M2C_FIELD(arg1, s32 *, 4);
        if (temp_3 != temp_2) {
            temp_2_2 = M2C_FIELD(arg0, s32 *, 4);
            if (temp_4 == temp_2_2) {
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
                M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
                return 1;
            }
            if (temp_3 == temp_2_2) {
                M2C_FIELD(arg0, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
                M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 0);
                return 1;
            }
            return 0;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 0);
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 0x1C);
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(arg1, s32 *, 4);
    return 1;
}
