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

M2C_UNK func_001269F0(void *);                      /* extern */
M2C_UNK func_00126C18(void *);                      /* extern */
M2C_UNK func_00126DA0(void *);                      /* extern */

void func_00128B98(void *arg0) {
    s32 temp_2;
    s32 temp_3;

    temp_2 = M2C_FIELD(arg0, s32 *, 0x6C) - 1;
    M2C_FIELD(arg0, s32 *, 0x6C) = temp_2;
    if (temp_2 == 0) {
        temp_3 = M2C_FIELD(arg0, s32 *, 0x68);
        switch (temp_3) {                           /* irregular */
        case 1:
            func_001269F0(arg0);
            break;
        case 2:
            func_00126DA0(arg0);
            break;
        case 3:
            func_00126C18(arg0);
            break;
        }
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    }
}
