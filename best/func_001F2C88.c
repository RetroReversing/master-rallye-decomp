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
M2C_UNK func_00151670(void *, s32);                 /* extern */
M2C_UNK func_001D2CD8(s32, s32);                    /* extern */
void *func_001F27A0(void *);                        /* extern */
M2C_UNK func_00211518(void *, s32);                 /* extern */
M2C_UNK func_00211728(void *, s32);                 /* extern */
M2C_UNK func_00211AF0(void *, s32);                 /* extern */
M2C_UNK func_002122C0(void *, s32);                 /* extern */

void *func_001F2C88(void *arg0) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;
    void *temp_2_4;
    void *temp_2_5;
    void *temp_2_6;
    void *temp_2_7;
    void *temp_2_8;
    void *temp_2_9;

    temp_2 = func_001F27A0(D_002AD408(0x3C));
    func_001D2CD8(temp_2 + 0x14, M2C_FIELD(arg0, s32 *, 0x14));
    M2C_FIELD(temp_2, s32 *, 0x18) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    temp_2_2 = D_002AD408(0xC);
    M2C_FIELD(temp_2_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2_2, s32 *, 4) = 0;
    M2C_FIELD(temp_2_2, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x1C) = temp_2_2;
    func_00211518(temp_2_2, M2C_FIELD(arg0, s32 *, 0x1C));
    temp_2_3 = D_002AD408(0xC);
    M2C_FIELD(temp_2_3, s32 *, 0) = 0;
    M2C_FIELD(temp_2_3, s32 *, 4) = 0;
    M2C_FIELD(temp_2_3, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x20) = temp_2_3;
    func_00211728(temp_2_3, M2C_FIELD(arg0, s32 *, 0x20));
    temp_2_4 = D_002AD408(0xC);
    M2C_FIELD(temp_2_4, s32 *, 0) = 0;
    M2C_FIELD(temp_2_4, s32 *, 4) = 0;
    M2C_FIELD(temp_2_4, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x24) = temp_2_4;
    func_00211AF0(temp_2_4, M2C_FIELD(arg0, s32 *, 0x24));
    temp_2_5 = D_002AD408(0xC);
    M2C_FIELD(temp_2_5, s32 *, 0) = 0;
    M2C_FIELD(temp_2_5, s32 *, 4) = 0;
    M2C_FIELD(temp_2_5, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x28) = temp_2_5;
    func_00151670(temp_2_5, M2C_FIELD(arg0, s32 *, 0x28));
    temp_2_6 = D_002AD408(0xC);
    M2C_FIELD(temp_2_6, s32 *, 0) = 0;
    M2C_FIELD(temp_2_6, s32 *, 4) = 0;
    M2C_FIELD(temp_2_6, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x2C) = temp_2_6;
    func_00151670(temp_2_6, M2C_FIELD(arg0, s32 *, 0x2C));
    temp_2_7 = D_002AD408(0xC);
    M2C_FIELD(temp_2_7, s32 *, 0) = 0;
    M2C_FIELD(temp_2_7, s32 *, 4) = 0;
    M2C_FIELD(temp_2_7, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x30) = temp_2_7;
    func_00151670(temp_2_7, M2C_FIELD(arg0, s32 *, 0x30));
    temp_2_8 = D_002AD408(0xC);
    M2C_FIELD(temp_2_8, s32 *, 0) = 0;
    M2C_FIELD(temp_2_8, s32 *, 4) = 0;
    M2C_FIELD(temp_2_8, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x34) = temp_2_8;
    func_002122C0(temp_2_8, M2C_FIELD(arg0, s32 *, 0x34));
    temp_2_9 = D_002AD408(0xC);
    M2C_FIELD(temp_2_9, s32 *, 0) = 0;
    M2C_FIELD(temp_2_9, s32 *, 4) = 0;
    M2C_FIELD(temp_2_9, s32 *, 8) = 0;
    M2C_FIELD(temp_2, void **, 0x38) = temp_2_9;
    func_00151670(temp_2_9, M2C_FIELD(arg0, s32 *, 0x38));
    return temp_2;
}
