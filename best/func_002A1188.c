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

void **func_0015E848();                             /* extern */
M2C_UNK func_001D5890(s32);                         /* extern */
s32 func_001D5900();                                /* extern */
M2C_UNK func_001E39E8(s32);                         /* extern */
M2C_UNK func_001E3D40(s32);                         /* extern */
M2C_UNK func_001E6D18(s32);                         /* extern */
s32 func_001E6D58();                                /* extern */
M2C_UNK func_001FC740(s32);                         /* extern */
s32 func_001FC760();                                /* extern */
M2C_UNK func_00200200(s32);                         /* extern */
s32 func_002003C0();                                /* extern */
M2C_UNK func_00222B10(s32);                         /* extern */
s32 func_00222CF8();                                /* extern */
M2C_UNK func_00285B10(s32);                         /* extern */
s32 func_002869E0();                                /* extern */
M2C_UNK func_002A1EA8(s32);                         /* extern */
s32 func_002A2458();                                /* extern */
M2C_UNK func_002A2668(s32);                         /* extern */
s32 func_002A28A8();                                /* extern */

void func_002A1188(void) {
    M2C_UNK (*temp_5)(void *, M2C_UNK);
    M2C_UNK (*temp_5_2)(void *, M2C_UNK);
    M2C_UNK (*temp_5_3)(void *, M2C_UNK);
    void **temp_2;
    void **temp_2_2;
    void **temp_2_3;
    void *temp_3;
    void *temp_3_2;
    void *temp_3_3;

    temp_2 = func_0015E848();
    temp_3 = *temp_2;
    temp_5 = M2C_FIELD(temp_3, M2C_UNK (**)(void *, M2C_UNK), 0x44);
    temp_5(temp_2 + M2C_FIELD(temp_3, s16 *, 0x40), temp_5);
    func_001FC740(func_001FC760());
    func_001E39E8(func_001E4280());
    func_001E3D40(func_001E4280());
    func_00200200(func_002003C0());
    func_001D5890(func_001D5900());
    func_002A1EA8(func_002A2458());
    func_00222B10(func_00222CF8());
    func_00285B10(func_002869E0());
    temp_2_2 = func_0015E848();
    temp_3_2 = *temp_2_2;
    temp_5_2 = M2C_FIELD(temp_3_2, M2C_UNK (**)(void *, M2C_UNK), 0x34);
    temp_5_2(temp_2_2 + M2C_FIELD(temp_3_2, s16 *, 0x30), temp_5_2);
    func_001E6D18(func_001E6D58());
    func_002A2668(func_002A28A8());
    temp_2_3 = func_0015E848();
    temp_3_3 = *temp_2_3;
    temp_5_3 = M2C_FIELD(temp_3_3, M2C_UNK (**)(void *, M2C_UNK), 0x3C);
    temp_5_3(temp_2_3 + M2C_FIELD(temp_3_3, s16 *, 0x38), temp_5_3);
}
