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

M2C_UNK D_002AD390(void *);                         /* extern */
M2C_UNK func_00271F60(void *);                      /* extern */
M2C_UNK func_002722C8(s32);                         /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */

void func_002313D0(void *arg0, s32 arg1) {
    func_002722C8(arg0 + 0x34);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x34));
    func_00271F60(arg0 + 0x30);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x30));
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
