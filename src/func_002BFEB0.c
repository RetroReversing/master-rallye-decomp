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

void func_002BFEB0(void *arg0, s32 arg1) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    void *temp_3;
    void *temp_4;

    temp_3 = M2C_FIELD(arg0, void **, 0x14);
    temp_2 = M2C_FIELD(temp_3, s32 *, 4);
    if (temp_2 != 0) {
        M2C_FIELD(temp_3, s32 *, 4) = (s32) (temp_2 + arg1);
    }
    temp_2_2 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0xC);
    if (temp_2_2 != 0) {
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x14), s32 *, 0xC) = (s32) (temp_2_2 + arg1);
    }
    temp_4 = M2C_FIELD(arg0, void **, 0x14);
    temp_2_3 = M2C_FIELD(temp_4, s32 *, 0x14);
    if (temp_2_3 != 0) {
        M2C_FIELD(temp_4, s32 *, 0x14) = (s32) (temp_2_3 + arg1);
    }
}
