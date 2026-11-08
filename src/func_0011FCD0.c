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

M2C_UNK func_0011DFB8(s32);                         /* extern */
M2C_UNK func_0011E278(s32, M2C_UNK);                /* extern */
s32 func_0011E2B8(s32, M2C_UNK);                    /* extern */
s32 func_0011E528(s32);                             /* extern */
M2C_UNK func_0011E650(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0011FCD0(void *arg0) {
    s32 temp_2;

    func_0011E650(M2C_FIELD(arg0, s32 *, 0xC), 3, 0);
    if (func_0011E528(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        temp_2 = func_0011E2B8(M2C_FIELD(arg0, s32 *, 0xC), 1);
        switch (temp_2) {
        case -3:
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 1);
            break;
        case 1:
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0xD);
            break;
        case 2:
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0xE);
            break;
        case 3:
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0xF);
            break;
        case 4:
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x2C);
            break;
        }
        func_0011DFB8(M2C_FIELD(arg0, s32 *, 0xC));
    }
}
