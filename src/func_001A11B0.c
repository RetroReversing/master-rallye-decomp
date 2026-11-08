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

s32 func_001E9368(s32, M2C_UNK *);                  /* extern */
s32 func_001EA098(s32);                             /* extern */
s32 func_002C3C48();                                /* extern */
extern M2C_UNK D_0040E828;
extern M2C_UNK D_0040E830;
extern M2C_UNK D_0040E838;
extern M2C_UNK D_0040E840;
extern M2C_UNK D_0040E848;
extern M2C_UNK D_0040E850;
extern M2C_UNK D_0040E858;
extern M2C_UNK D_0040E860;
extern M2C_UNK D_0040E868;
extern M2C_UNK D_0040E870;

void *func_001A11B0(void *arg0) {
    s32 temp_2;

    temp_2 = func_001EA098(func_002C3C48());
    if (temp_2 != 0) {
        M2C_FIELD(arg0, s32 *, 0) = func_001E9368(temp_2, &D_0040E828);
        M2C_FIELD(arg0, s32 *, 4) = func_001E9368(temp_2, &D_0040E830);
        M2C_FIELD(arg0, s32 *, 0xC) = func_001E9368(temp_2, &D_0040E838);
        M2C_FIELD(arg0, s32 *, 8) = func_001E9368(temp_2, &D_0040E840);
        M2C_FIELD(arg0, s32 *, 0x10) = func_001E9368(temp_2, &D_0040E848);
        M2C_FIELD(arg0, s32 *, 0x14) = func_001E9368(temp_2, &D_0040E850);
        M2C_FIELD(arg0, s32 *, 0x18) = func_001E9368(temp_2, &D_0040E858);
        M2C_FIELD(arg0, s32 *, 0x1C) = func_001E9368(temp_2, &D_0040E860);
        M2C_FIELD(arg0, s32 *, 0x20) = func_001E9368(temp_2, &D_0040E868);
        M2C_FIELD(arg0, s32 *, 0x24) = func_001E9368(temp_2, &D_0040E870);
    }
    return arg0;
}
