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

M2C_UNK func_00191E60(s32, M2C_UNK);                /* extern */
M2C_UNK func_00192998(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00192B68(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00192BE0(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00192C50(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00193B60();                                /* extern */

void func_00135820(void) {
    func_00191E60(func_00193B60(), 5);
    func_00192BE0(func_00193B60(), 0, 0);
    func_00192998(func_00193B60(), 0, 0);
    func_00192B68(func_00193B60(), 0, 0x42FA0000);
    func_00192C50(func_00193B60(), 0, 1);
    func_00192BE0(func_00193B60(), 1, 1);
    func_00192998(func_00193B60(), 0, 1);
    func_00192B68(func_00193B60(), 1, 0x42AC0000);
    func_00192C50(func_00193B60(), 1, 1);
    func_00192BE0(func_00193B60(), 2, 2);
    func_00192998(func_00193B60(), 0, 2);
    func_00192B68(func_00193B60(), 2, 0x43460000);
    func_00192C50(func_00193B60(), 2, 1);
    func_00192BE0(func_00193B60(), 3, 3);
    func_00192998(func_00193B60(), 0, 3);
    func_00192B68(func_00193B60(), 3, 0x427C0000);
    func_00192C50(func_00193B60(), 3, 1);
    func_00192BE0(func_00193B60(), 4, 5);
    func_00192998(func_00193B60(), 0, 4);
    func_00192B68(func_00193B60(), 4, 0x42AC0000);
    func_00192C50(func_00193B60(), 4, 1);
}
