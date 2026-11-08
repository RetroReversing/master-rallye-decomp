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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_00169408(s32);                             /* extern */
s32 func_0018DED0(s32);                             /* extern */
s32 func_001E3820(s32, void *, M2C_UNK *);          /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern M2C_UNK D_0040E698;
extern s32 D_0040E8C4;
extern s32 D_0040E8C8;
extern M2C_UNK D_0044F760;
extern M2C_UNK D_0044F7A0;
extern s32 D_0048DD8C;
extern s32 D_0048DD90;

void func_00168258(void *arg0) {
    s32 temp_2;
    s32 temp_2_2;
    s32 temp_2_3;
    s32 temp_2_4;

    temp_2 = func_001E3820(func_001E4280(), arg0 + 0x70, &D_0040E698);
    M2C_FIELD(arg0, s32 *, 0x3C) = temp_2;
    if (temp_2 == 0) {
        func_003F9698(&D_0044F760);
        temp_2_2 = D_0048DD8C;
        if (D_0040E8C4 == 0) {
            D_0048DD8C = func_0018DED0(D_002AD408(0x10));
            D_0040E8C4 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x3C) = temp_2_2;
    }
    temp_2_3 = func_001E3820(func_001E4280(), arg0 + 0x8C, arg0 + 0x44);
    M2C_FIELD(arg0, s32 *, 0x40) = temp_2_3;
    if (temp_2_3 == 0) {
        func_003F9698(&D_0044F7A0);
        temp_2_4 = D_0048DD90;
        if (D_0040E8C8 == 0) {
            D_0048DD90 = func_00169408(D_002AD408(0x68));
            D_0040E8C8 = 1;
        }
        M2C_FIELD(arg0, s32 *, 0x40) = temp_2_4;
    }
}
