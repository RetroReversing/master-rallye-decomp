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

s32 func_0010EB88(s32);                             /* extern */
s32 func_00110050();                                /* extern */
M2C_UNK func_0011DFB8(s32);                         /* extern */
M2C_UNK func_0011E278(s32, M2C_UNK);                /* extern */
s32 func_0011E2B8(s32, M2C_UNK);                    /* extern */
s32 func_0011E528(s32);                             /* extern */
M2C_UNK func_0011E650(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00191C50(s32, M2C_UNK);                /* extern */
s32 func_00193B60();                                /* extern */
s32 func_00194738(s32);                             /* extern */
s32 func_00194C40();                                /* extern */

void func_0012A888(void *arg0) {
    s32 temp_2;
    s32 temp_4;
    s32 temp_4_2;

    func_0011E650(M2C_FIELD(arg0, s32 *, 0xC), 3, 0);
    func_0011DFB8(M2C_FIELD(arg0, s32 *, 0xC));
    if (func_0011E528(M2C_FIELD(arg0, s32 *, 0xC)) == 0) {
        temp_2 = func_0011E2B8(M2C_FIELD(arg0, s32 *, 0xC), 1);
        switch (temp_2) {                           /* irregular */
        case -3:
            temp_4 = M2C_FIELD(arg0, s32 *, 0xC);
            if (func_00194738(func_00194C40()) != 0) {
                func_0011E278(temp_4, 0x20);
            } else {
                func_0011E278(temp_4, 2);
            }
            break;
        case 1:
            func_00191C50(func_00193B60(), 0);
            func_0011E278(M2C_FIELD(arg0, s32 *, 0xC), 0x1E);
            break;
        case 2:
            if (func_0010EB88(func_00110050()) != 0) {
                temp_4_2 = M2C_FIELD(arg0, s32 *, 0xC);
                if (func_00194738(func_00194C40()) != 0) {
                    func_0011E278(temp_4_2, 0x35);
                } else {
                    func_0011E278(temp_4_2, 0x24);
                }
            }
            break;
        }
    }
}
