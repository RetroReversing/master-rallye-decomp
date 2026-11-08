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
M2C_UNK func_001D1900(void *);                      /* extern */
M2C_UNK func_0021EF50();                            /* extern */
M2C_UNK func_0021F4F8(s32, M2C_UNK);                /* extern */
M2C_UNK func_0021FE68(s32, M2C_UNK);                /* extern */

void func_0021E8E8(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 var_21;
    void *temp_16;
    void *temp_17;
    void *var_16;

    func_0021EF50();
    temp_4 = M2C_FIELD(arg0, s32 *, 0x1C);
    if (temp_4 != 0) {
        func_0021F4F8(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x20);
    var_21 = arg1 & 1;
    if (temp_4_2 != 0) {
        func_0021FE68(temp_4_2, 3);
        var_21 = arg1 & 1;
    }
    temp_17 = arg0 + 0x24;
    if (temp_17 != NULL) {
        temp_16 = arg0 + 0x78;
        var_16 = temp_16 - 0xC;
        if (temp_17 != temp_16) {
            do {
                func_001D1900(var_16);
                var_16 -= 0xC;
            } while (temp_17 != var_16);
        }
    }
    func_001D1900(arg0 + 0x10);
    func_001D1900(arg0 + 4);
    if (var_21 != 0) {
        D_002AD390(arg0);
    }
}
