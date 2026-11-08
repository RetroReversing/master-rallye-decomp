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
M2C_UNK func_00212628(void *, s32);                 /* extern */
M2C_UNK func_002B2028(void *);                      /* extern */

void func_001F39D0(void *arg0, s32 arg1) {
    void *temp_17;
    void *temp_2;
    void *temp_2_2;

    temp_17 = arg0 + 0x24;
    if (M2C_FIELD(temp_17, s32 *, 4) != 0) {
        func_00212628(temp_17, M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4));
        temp_2 = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(temp_2, void **, 8) = temp_2;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x24), s32 *, 4) = 0;
        temp_2_2 = M2C_FIELD(arg0, void **, 0x24);
        M2C_FIELD(temp_2_2, void **, 0xC) = temp_2_2;
        M2C_FIELD(temp_17, s32 *, 4) = 0;
    }
    func_002B2028(M2C_FIELD(arg0, void **, 0x24));
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
