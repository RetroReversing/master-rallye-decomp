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

M2C_UNK func_0026C570(void *);                      /* extern */
void *func_0026C578();                              /* extern */
M2C_UNK func_003F0768(s32 *);                       /* extern */

void func_003F0770(s32 *arg0) {
    void **temp_5;
    void *temp_2;

    if ((*arg0 == 0) && (M2C_FIELD(func_0026C578(), s32 *, 0xC) == 1)) {
        if (M2C_FIELD(func_0026C578(), s32 *, 8) != 0) {
            temp_5 = M2C_FIELD(func_0026C578(), void ***, 8);
            temp_2 = *temp_5;
            M2C_FIELD(temp_2, M2C_UNK (**)(void *, void **), 0x1C)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x18), temp_5);
        }
        func_0026C570(func_0026C578());
        func_003F0768(arg0);
    }
}
