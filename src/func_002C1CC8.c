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

M2C_UNK func_002C1F08(s32);                         /* extern */
M2C_UNK func_003F94D0(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
M2C_UNK func_00409E38(s32);                         /* extern */
extern M2C_UNK D_00481238;
extern M2C_UNK D_00481268;
extern M2C_UNK D_00481290;
extern M2C_UNK D_004812B8;
extern M2C_UNK D_004812E0;
extern M2C_UNK D_00481310;
extern M2C_UNK D_00481338;

void func_002C1CC8(void *arg0) {
    s32 temp_4;
    s32 temp_4_2;
    s32 temp_4_3;
    s32 temp_4_4;
    s32 temp_4_5;
    s32 temp_4_6;
    s32 temp_4_7;

    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_003F9698(&D_00481238);
        temp_4 = M2C_FIELD(arg0, s32 *, 0);
        if (temp_4 != 0) {
            func_002C1F08(temp_4);
            M2C_FIELD(arg0, s32 *, 0) = 0;
        }
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_003F9698(&D_00481268);
        temp_4_2 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_4_2 != 0) {
            func_002C1F08(temp_4_2);
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_003F9698(&D_00481290);
        temp_4_3 = M2C_FIELD(arg0, s32 *, 0xC);
        if (temp_4_3 != 0) {
            func_002C1F08(temp_4_3);
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x10) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        func_003F9698(&D_004812B8);
        temp_4_4 = M2C_FIELD(arg0, s32 *, 0x14);
        if (temp_4_4 != 0) {
            func_002C1F08(temp_4_4);
            M2C_FIELD(arg0, s32 *, 0x14) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x18) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        func_003F9698(&D_004812E0);
        temp_4_5 = M2C_FIELD(arg0, s32 *, 0x1C);
        if (temp_4_5 != 0) {
            func_00409E38(temp_4_5);
            M2C_FIELD(arg0, s32 *, 0x1C) = 0;
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x24) != 0) {
        func_003F9698(&D_00481310);
        temp_4_6 = M2C_FIELD(arg0, s32 *, 0x24);
        if (temp_4_6 != 0) {
            func_002C1F08(temp_4_6);
            M2C_FIELD(arg0, s32 *, 0x24) = 0;
        }
    }
    if (M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        func_003F9698(&D_00481338);
        temp_4_7 = M2C_FIELD(arg0, s32 *, 0x28);
        if (temp_4_7 != 0) {
            func_00409E38(temp_4_7);
            M2C_FIELD(arg0, s32 *, 0x28) = 0;
        }
    }
    func_003F94D0(arg0 + 0x2C, 0, 0x18);
}
