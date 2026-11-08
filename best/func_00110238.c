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

M2C_UNK func_00110098();                            /* extern */
M2C_UNK func_00110478(s32);                         /* extern */
s32 func_002C20D0();                                /* extern */
s32 func_002C2EE0();                                /* extern */
M2C_UNK func_002C39D8(s32);                         /* extern */
M2C_UNK func_003F9698(M2C_UNK *, M2C_UNK *);        /* extern */
extern void **D_00428F24;
extern M2C_UNK D_004464E0;
extern M2C_UNK D_004464F8;
extern M2C_UNK D_0048D748;

void func_00110238(s32 arg1) {
    s32 temp_17;
    void **temp_16;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;
    void *temp_3_4;
    void *temp_5;

    func_003F9698(&D_004464E0, &D_004464F8);
    func_002C39D8(func_002C20D0());
    if (D_00428F24 == NULL) {
        func_002C39D8(func_002C2EE0());
    }
    temp_16 = D_00428F24;
    temp_17 = (arg1 >= 0x2E) ? 0 : arg1;
    temp_3 = *temp_16;
    M2C_FIELD(temp_3, M2C_UNK (**)(void *, M2C_UNK), 0x3C)(temp_16 + M2C_FIELD(temp_3, s16 *, 0x38), 1);
    func_00110098();
    func_00110098();
    func_00110098();
    func_00110098();
    temp_3_2 = *temp_16;
    M2C_FIELD(temp_3_2, M2C_UNK (**)(void *), 0x14)(temp_16 + M2C_FIELD(temp_3_2, s16 *, 0x10));
    temp_5 = *temp_16;
    M2C_FIELD(temp_5, M2C_UNK (**)(void *, s32, M2C_UNK, M2C_UNK), 0x24)(temp_16 + M2C_FIELD(temp_5, s16 *, 0x20), *((temp_17 * 4) + &D_0048D748), 0x200, 0x200);
    if ((u32) (temp_17 - 0x2A) < 4U) {
        temp_3_3 = *temp_16;
        M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, M2C_UNK), 0x34)(temp_16 + M2C_FIELD(temp_3_3, s16 *, 0x30), 0);
    } else {
        temp_3_4 = *temp_16;
        M2C_FIELD(temp_3_4, M2C_UNK (**)(void *, M2C_UNK), 0x34)(temp_16 + M2C_FIELD(temp_3_4, s16 *, 0x30), 1);
    }
    func_00110478(temp_17);
}
