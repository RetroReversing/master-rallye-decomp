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
extern void *D_00428F90;
extern M2C_UNK D_004766C0;
extern M2C_UNK D_00481DC8;

void *func_002C7190(void) {
    void *temp_2;
    void *temp_2_2;
    void *temp_3;
    void *temp_4;
    void *temp_5;

    temp_2 = D_00428F90;
    if (temp_2 == NULL) {
        temp_2_2 = D_002AD408(0x3C);
        M2C_FIELD(temp_2_2, s32 *, 0) = 0;
        M2C_FIELD(temp_2_2, void **, 8) = temp_2_2;
        M2C_FIELD(temp_2_2, M2C_UNK **, 0x30) = &D_004766C0;
        temp_4 = temp_2_2 + 0xC;
        M2C_FIELD(temp_2_2, void **, 4) = temp_2_2;
        temp_3 = temp_2_2 + 0x18;
        M2C_FIELD(temp_2_2, s32 *, 0xC) = 0;
        temp_5 = temp_2_2 + 0x24;
        M2C_FIELD(temp_4, void **, 4) = temp_4;
        M2C_FIELD(temp_4, void **, 8) = temp_4;
        M2C_FIELD(temp_2_2, s32 *, 0x18) = 0;
        M2C_FIELD(temp_3, void **, 4) = temp_3;
        M2C_FIELD(temp_3, void **, 8) = temp_3;
        M2C_FIELD(temp_2_2, s32 *, 0x24) = 0;
        M2C_FIELD(temp_5, void **, 4) = temp_5;
        M2C_FIELD(temp_5, void **, 8) = temp_5;
        M2C_FIELD(temp_2_2, M2C_UNK **, 0x30) = &D_00481DC8;
        D_00428F90 = temp_2_2;
        M2C_FIELD(temp_2_2, s32 *, 0x34) = 0;
        M2C_FIELD(temp_2_2, s32 *, 0x38) = 0;
    }
    return temp_2;
}
