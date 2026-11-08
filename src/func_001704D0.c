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
extern M2C_UNK D_004734D8;
extern M2C_UNK D_004734F8;

void func_001704D0(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;

    temp_2 = D_002AD408(0xC);
    M2C_FIELD(temp_2, s32 *, 8) = arg2;
    M2C_FIELD(temp_2, M2C_UNK **, 0) = &D_004734D8;
    M2C_FIELD(arg0, void **, 0x14) = temp_2;
    M2C_FIELD(temp_2, s32 *, 4) = arg1;
    temp_2_2 = D_002AD408(0xC);
    M2C_FIELD(temp_2_2, M2C_UNK **, 0) = &D_004734D8;
    M2C_FIELD(temp_2_2, s32 *, 8) = arg4;
    M2C_FIELD(arg0, void **, 0x18) = temp_2_2;
    M2C_FIELD(temp_2_2, s32 *, 4) = arg3;
    temp_2_3 = D_002AD408(0x10);
    M2C_FIELD(temp_2_3, s32 *, 0xC) = arg1;
    M2C_FIELD(temp_2_3, M2C_UNK **, 0) = &D_004734F8;
    M2C_FIELD(arg0, void **, 4) = temp_2_3;
    temp_2_4 = D_002AD408(0x10);
    M2C_FIELD(temp_2_4, s32 *, 0xC) = arg2;
    M2C_FIELD(temp_2_4, M2C_UNK **, 0) = &D_004734F8;
    M2C_FIELD(arg0, void **, 8) = temp_2_4;
    temp_2_5 = D_002AD408(0x10);
    M2C_FIELD(temp_2_5, s32 *, 0xC) = arg3;
    M2C_FIELD(temp_2_5, M2C_UNK **, 0) = &D_004734F8;
    M2C_FIELD(arg0, void **, 0xC) = temp_2_5;
    temp_2_6 = D_002AD408(0x10);
    M2C_FIELD(temp_2_6, s32 *, 0xC) = arg4;
    M2C_FIELD(temp_2_6, M2C_UNK **, 0) = &D_004734F8;
    M2C_FIELD(arg0, void **, 0x10) = temp_2_6;
}
