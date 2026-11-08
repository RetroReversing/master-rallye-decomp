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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_001918C0(s32);                             /* extern */
s32 func_00193B60();                                /* extern */
s32 func_001BB138(s32, s32);                        /* extern */
void *func_00201350();                              /* extern */
M2C_UNK func_0021E4F0(void *);                      /* extern */
M2C_UNK func_0021E620(void *, M2C_UNK, s32);        /* extern */

void func_0019A7A0(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E8) = 0;
    M2C_FIELD(arg0, s32 *, 0x1E4) = 0;
    M2C_FIELD(arg0, s32 *, 0x22C) = func_001918C0(func_00193B60());
    if (M2C_FIELD(arg0, s32 *, 0x228) >= M2C_FIELD(func_00201350(), s32 *, 0x10)) {
        func_0021E4F0(arg1);
        return;
    }
    func_0021E620(arg1, 0, func_001BB138(D_002AD408(0x18), M2C_FIELD(arg0, s32 *, 0x228)));
}
