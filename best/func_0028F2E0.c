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

M2C_UNK func_0028F600(s32);                         /* extern */
M2C_UNK func_0028F658(void *, s32, void *);         /* extern */

void func_0028F2E0(void *arg0, void *arg1) {
    s32 temp_6;
    void *temp_3;

    M2C_FIELD(arg0, void **, 0x1C) = arg1;
    temp_3 = M2C_FIELD(arg1, void **, 0x4C);
    if (temp_3 != NULL) {
        temp_6 = M2C_FIELD(temp_3, s32 *, 8);
        if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
            func_0028F600(temp_6 - 0x28);
        } else {
            func_0028F658(arg0, temp_6 - 0x28, arg0 + 0x18);
        }
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
    }
}
