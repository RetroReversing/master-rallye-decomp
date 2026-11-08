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
M2C_UNK func_002BCF50(void *, void *);              /* extern */
M2C_UNK func_002BD008(void *, void *);              /* extern */
M2C_UNK func_002BD1C0(void *, void *);              /* extern */
M2C_UNK func_002BD3E8(void *, M2C_UNK);             /* extern */
s32 func_002BE550();                                /* extern */
M2C_UNK func_002BE628(s32, M2C_UNK);                /* extern */
s32 func_002BEC58(void *, M2C_UNK *, M2C_UNK);      /* extern */
M2C_UNK func_002BF1D0(void *, M2C_UNK);             /* extern */
M2C_UNK func_002BF428(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_004805D8;
extern M2C_UNK D_004805E0;
extern M2C_UNK D_00480670;
extern M2C_UNK D_00480690;
extern M2C_UNK D_004806A0;
extern M2C_UNK D_004806C0;
extern M2C_UNK D_00480878;
extern M2C_UNK D_00480898;
extern M2C_UNK D_004808E8;

void func_002BD258(void *arg0) {
    void *temp_2;
    void *temp_2_2;
    void *temp_2_3;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_003F9698(&D_004806C0);
        return;
    }
    func_003F9698(&D_00480670);
    M2C_FIELD(arg0, s32 *, 4) = 0x4E20;
    M2C_FIELD(arg0, s32 *, 8) = 0x5DC;
    func_002BE628(func_002BE550(), 0x10);
    M2C_FIELD(arg0, s32 *, 0xC) = func_002BEC58(D_002AD408(8), &D_00480690, 0);
    temp_2 = D_002AD408(0x10);
    M2C_FIELD(temp_2, s32 *, 0) = 0;
    M2C_FIELD(temp_2, M2C_UNK **, 4) = &D_00480878;
    M2C_FIELD(arg0, void **, 0x10) = temp_2;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    temp_2_2 = D_002AD408(0x2C);
    func_002BF428(temp_2_2, &D_004805D8);
    M2C_FIELD(arg0, void **, 0x14) = temp_2_2;
    M2C_FIELD(temp_2_2, M2C_UNK **, 0xC) = &D_004808E8;
    M2C_FIELD(temp_2_2, s32 *, 0x24) = 0;
    M2C_FIELD(temp_2_2, s32 *, 0x28) = 0;
    M2C_FIELD(temp_2_2, s32 *, 0x20) = 0;
    temp_2_3 = D_002AD408(0x30);
    func_002BF428(temp_2_3, &D_004805E0);
    M2C_FIELD(arg0, void **, 0x18) = temp_2_3;
    M2C_FIELD(temp_2_3, s32 *, 0x20) = 0;
    M2C_FIELD(temp_2_3, M2C_UNK **, 0xC) = &D_00480898;
    M2C_FIELD(temp_2_3, s32 *, 0x28) = 0;
    M2C_FIELD(temp_2_3, s32 *, 0x2C) = 0;
    M2C_FIELD(temp_2_3, s32 *, 0x24) = 0;
    func_002BCF50(M2C_FIELD(arg0, void **, 0x14), arg0);
    func_002BD008(M2C_FIELD(arg0, void **, 0x18), arg0);
    func_002BD1C0(M2C_FIELD(arg0, void **, 0x10), arg0);
    func_002BF1D0(M2C_FIELD(arg0, void **, 0x18), 4);
    func_002BF1D0(M2C_FIELD(arg0, void **, 0x14), 3);
    func_002BD3E8(arg0, 1);
    M2C_FIELD(arg0, s32 *, 0) = 1;
    func_003F9698(&D_004806A0);
}
