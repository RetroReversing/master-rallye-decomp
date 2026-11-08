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

void ***func_001D6BB0();                            /* extern */
s32 func_00200550(s32, void *, f32, M2C_UNK);       /* extern */
M2C_UNK func_003B93F0(void *, s32);                 /* extern */

void func_003BFEA0(void *arg0, s32 arg1) {
    s32 temp_2;
    void **temp_5;
    void *temp_3;

    temp_5 = *func_001D6BB0();
    temp_3 = *temp_5;
    temp_2 = M2C_FIELD(temp_3, s32 (**)(void *, void **), 0x54)(temp_5 + M2C_FIELD(temp_3, s16 *, 0x50), temp_5);
    if (temp_2 != 0) {
        if ((func_00200550(temp_2, arg0 + 0x18, M2C_FIELD(arg0, f32 *, 0x24), 0x3F800000) != 0) && (M2C_FIELD(arg0, f32 *, 0x24) != -1.0f)) {
            func_003B93F0(arg0, arg1);
        }
    }
}
