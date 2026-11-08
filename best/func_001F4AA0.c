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

M2C_UNK func_001DB808(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001DBC58(s32, M2C_UNK *);              /* extern */
M2C_UNK func_001EF888(s32);                         /* extern */
M2C_UNK func_001F45B8(void *, s32);                 /* extern */
M2C_UNK func_001F93E8(s32, void *);                 /* extern */
M2C_UNK func_003F9698(M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK D_004262B0;
extern M2C_UNK D_00477890;
extern M2C_UNK D_00477898;
extern M2C_UNK D_004778D8;
extern M2C_UNK D_00477900;
extern M2C_UNK D_00477908;
extern M2C_UNK D_00477910;
extern M2C_UNK D_00477928;

void func_001F4AA0(void *arg0, void *arg1) {
    M2C_UNK *var_6;

    if (M2C_FIELD(arg1, s32 *, 0x18) != 0) {
        var_6 = &D_00477890;
    } else {
        var_6 = &D_00477898;
    }
    func_003F9698(&D_004778D8, M2C_FIELD(arg1, s32 *, 0x14), var_6, &D_004778D8);
    M2C_FIELD(&D_004262B0, s32 *, 0xC) = (s32) (M2C_FIELD(&D_004262B0, s32 *, 0xC) + 1);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_001DBC58(M2C_FIELD(arg1, s32 *, 0x20), &D_00477900);
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_001DB808(M2C_FIELD(arg1, s32 *, 0x28), &D_00477908);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_001DB808(M2C_FIELD(arg1, s32 *, 0x2C), &D_00477910);
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_001DB808(M2C_FIELD(arg1, s32 *, 0x38), &D_00477928);
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_001EF888(M2C_FIELD(arg1, s32 *, 0x1C));
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
        func_001F45B8(arg0, M2C_FIELD(arg1, s32 *, 0x24));
    }
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_001F93E8(M2C_FIELD(arg1, s32 *, 0x34), arg1);
    }
    M2C_FIELD(&D_004262B0, s32 *, 0xC) = (s32) (M2C_FIELD(&D_004262B0, s32 *, 0xC) - 1);
}
