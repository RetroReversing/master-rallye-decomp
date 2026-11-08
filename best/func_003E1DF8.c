/* machine draft (m2c) for ee-gcc-2.9-991111 -O2 -G0, tried by autopilot */
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

M2C_UNK func_003E1708(void *, M2C_UNK *);           /* extern */
M2C_UNK func_003E3D68(M2C_UNK);                     /* extern */
u32 func_003E5438(void *, M2C_UNK);                 /* extern */
extern M2C_UNK D_00489AD0;
extern M2C_UNK D_00489AF8;

void func_003E1DF8(void *arg0) {
    s32 temp_2_2;
    u32 temp_16;
    u32 temp_18;
    u32 temp_2;

    M2C_FIELD(arg0, s32 *, 0x848) = 1;
    func_003E3D68(0);
    temp_2 = func_003E5438(arg0, 0x1C);
    temp_2_2 = (temp_2 >> 0x11) & 3;
    M2C_FIELD(arg0, s32 *, 0x140) = temp_2_2;
    if (temp_2_2 != 1) {
        func_003E1708(arg0, &D_00489AD0);
    }
    M2C_FIELD(arg0, s32 *, 0x13C) = (s32) ((temp_2 >> 0x13) & 1);
    temp_16 = temp_2 >> 0x14;
    temp_18 = func_003E5438(arg0, 0x10) >> 8;
    if ((temp_16 != 0x48) && (temp_16 != 0x58) && (temp_16 != 0x44)) {
        func_003E1708(arg0, &D_00489AF8);
    }
    M2C_FIELD(arg0, s32 *, 0x138) = (s32) (M2C_FIELD(arg0, s32 *, 0x138) + (temp_18 << 0xA));
    M2C_FIELD(arg0, s32 *, 0x124) = (s32) ((((temp_2 >> 0xF) & 3) << 0xC) | (M2C_FIELD(arg0, s32 *, 0x124) & 0xFFF));
    M2C_FIELD(arg0, s32 *, 0x128) = (s32) ((((temp_2 >> 0xD) & 3) << 0xC) | (M2C_FIELD(arg0, s32 *, 0x128) & 0xFFF));
    M2C_FIELD(arg0, s32 *, 0x134) = (s32) (M2C_FIELD(arg0, s32 *, 0x134) + (((temp_2 >> 1) & 0xFFF) << 0x12));
}
