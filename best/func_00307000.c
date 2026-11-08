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

M2C_UNK func_0021EBE8(s32);                         /* extern */
s32 func_0021F4B0();                                /* extern */
M2C_UNK func_002FA3F0(s32);                         /* extern */
s32 func_002FD7A0(void *);                          /* extern */
M2C_UNK func_00307060(void *);                      /* extern */

void func_00307000(void *arg0) {
    void *temp_2;
    void *temp_5;

    temp_5 = M2C_FIELD(arg0, void **, 0x24);
    temp_2 = M2C_FIELD(temp_5, void **, 0x148);
    M2C_FIELD(temp_2, M2C_UNK (**)(void *, void *), 0x3C)(temp_5 + M2C_FIELD(temp_2, s16 *, 0x38), temp_5);
    func_00307060(arg0);
    func_0021EBE8(func_0021F4B0());
    func_002FA3F0(func_002FD7A0(arg0));
}
