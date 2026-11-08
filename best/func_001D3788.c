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
M2C_UNK func_001D3250(void *, M2C_UNK);             /* extern */
extern M2C_UNK D_004766C0;

void func_001D3788(void *arg0, s32 arg1) {
    void **temp_2_2;
    void *temp_19;
    void *temp_2;
    void *temp_3;
    void *var_16;
    void *var_16_2;
    void *var_16_3;

    temp_3 = arg0 + 0xC;
    M2C_FIELD(arg0, M2C_UNK **, 0x30) = &D_004766C0;
    if (M2C_FIELD(temp_3, void ***, 4) != temp_3) {
loop_2:
        var_16 = NULL;
        if (M2C_FIELD(temp_3, void ***, 4) != temp_3) {
            var_16 = *M2C_FIELD(temp_3, void ***, 4);
        }
        if (var_16 != NULL) {
            func_001D1900(var_16 + 4);
            func_001D3250(var_16, 2);
            D_002AD390(var_16);
        }
        if (M2C_FIELD(temp_3, void ***, 4) != temp_3) {
            goto loop_2;
        }
    }
    temp_2 = arg0 + 0x18;
    temp_19 = arg0 + 0x24;
    if (M2C_FIELD(temp_2, void ***, 4) != temp_2) {
        do {
            temp_2_2 = M2C_FIELD(temp_2, void ***, 4);
            var_16_2 = NULL;
            if (temp_2_2 != temp_2) {
                var_16_2 = *temp_2_2;
            }
            if (var_16_2 != NULL) {
                func_001D1900(var_16_2 + 4);
                func_001D3250(var_16_2, 2);
                D_002AD390(var_16_2);
            }
        } while (M2C_FIELD(temp_2, void ***, 4) != temp_2);
    }
    if (M2C_FIELD(temp_19, void ***, 4) != temp_19) {
loop_18:
        var_16_3 = NULL;
        if (M2C_FIELD(temp_19, void ***, 4) != temp_19) {
            var_16_3 = *M2C_FIELD(temp_19, void ***, 4);
        }
        if (var_16_3 != NULL) {
            func_001D1900(var_16_3 + 4);
            func_001D3250(var_16_3, 2);
            D_002AD390(var_16_3);
        }
        if (M2C_FIELD(temp_19, void ***, 4) != temp_19) {
            goto loop_18;
        }
    }
    func_001D1900(temp_19);
    func_001D1900(temp_2);
    func_001D1900(arg0 + 0xC);
    func_001D1900(arg0);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
