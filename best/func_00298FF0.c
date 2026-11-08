/* machine draft (m2c) for ee-gcc-2.95.2 -O2 -G0 -fno-schedule-insns, tried by autopilot */
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

void **func_0017E620();                             /* extern */
M2C_UNK func_001D2CD8(s32, s32);                    /* extern */

void func_00298FF0(void *arg0, s32 arg1) {
    s32 (*temp_7)(void *, s32, M2C_UNK, M2C_UNK);
    void **temp_2;
    void *temp_3;

    temp_2 = func_0017E620();
    temp_3 = *temp_2;
    temp_7 = M2C_FIELD(temp_3, s32 (**)(void *, s32, M2C_UNK, M2C_UNK), 0x2C);
    func_001D2CD8(arg0 + 0x4C, temp_7(temp_2 + M2C_FIELD(temp_3, s16 *, 0x28), arg1, 0, temp_7));
    M2C_FIELD(arg0, s32 *, 0x44) = 1;
}
