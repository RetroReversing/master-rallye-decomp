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

M2C_UNK D_002AD530(s32);                            /* extern */
M2C_UNK func_001703D0(s32, M2C_UNK);                /* extern */
M2C_UNK func_00171378(s32, M2C_UNK);                /* extern */
M2C_UNK func_00266048(void *, s32);                 /* extern */
extern M2C_UNK D_004735C8;

void func_0016F698(void *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;

    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &D_004735C8;
    temp_4 = M2C_FIELD(arg0, s32 *, 0x70);
    if (temp_4 != 0) {
        func_00171378(temp_4, 3);
    }
    temp_4_2 = M2C_FIELD(arg0, s32 *, 0x38);
    if (temp_4_2 != 0) {
        func_001703D0(temp_4_2, 3);
    }
    temp_4_3 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_4_3 != 0) {
        D_002AD530(temp_4_3);
    }
    temp_4_4 = M2C_FIELD(arg0, s32 *, 0x68);
    if (temp_4_4 != 0) {
        D_002AD530(temp_4_4);
    }
    temp_4_5 = M2C_FIELD(arg0, s32 *, 0x6C);
    if (temp_4_5 != 0) {
        D_002AD530(temp_4_5);
    }
    func_00266048(arg0, arg1);
}
