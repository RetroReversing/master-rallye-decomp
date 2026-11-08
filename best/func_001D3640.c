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

void *D_002AD408(M2C_UNK);                          /* extern */
s32 D_002AD5A8(s32);                                /* extern */
M2C_UNK func_001DAD18(s32, void *);                 /* extern */
void *func_002C7190();                              /* extern */
M2C_UNK func_003F931C(s32, s32, s32);               /* extern */
extern M2C_UNK D_00476718;

void func_001D3640(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_2_2;
    s32 var_17;
    void *temp_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_6;

    var_17 = arg1;
    if (arg3 == 0) {
        var_17 = D_002AD5A8(arg2);
        func_003F931C(var_17, arg1, arg2);
    }
    temp_2 = D_002AD408(0x10);
    temp_6 = M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(temp_2, s32 *, 8) = var_17;
    M2C_FIELD(temp_2, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_2, M2C_UNK **, 4) = &D_00476718;
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    if (temp_6 != temp_2) {
        if (temp_6 != NULL) {
            temp_2_2 = M2C_FIELD(temp_6, s32 *, 0) - 1;
            M2C_FIELD(temp_6, s32 *, 0) = temp_2_2;
            if (temp_2_2 == 0) {
                temp_2_3 = M2C_FIELD(temp_6, void **, 4);
                M2C_FIELD(temp_2_3, M2C_UNK (**)(void *, M2C_UNK, void *), 0xC)(temp_6 + M2C_FIELD(temp_2_3, s16 *, 8), 3, temp_6);
            }
        }
        M2C_FIELD(arg0, void **, 0) = temp_2;
        if (temp_2 != NULL) {
            M2C_FIELD(temp_2, s32 *, 0) = (s32) (M2C_FIELD(temp_2, s32 *, 0) + 1);
        }
    }
    func_001DAD18(M2C_FIELD(func_002C7190(), s32 *, 0x14), arg0 + 4);
    temp_2_4 = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_2_4, M2C_UNK (**)(void *), 0x24)(arg0 + M2C_FIELD(temp_2_4, s16 *, 0x20));
}
