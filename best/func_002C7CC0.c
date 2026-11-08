/* machine draft (m2c), tried by autopilot */
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

extern M2C_UNK D_0049ABC0;

s32 func_002C7CC0(void *arg0) {
    if (!(M2C_FIELD(arg0, s64 *, 0x30) & (0x8000 << 0x12))) {
        M2C_FIELD(arg0, s64 *, 0x88) = 0;
        M2C_FIELD(arg0, s64 *, 0x90) = 0;
    } else {
        M2C_FIELD(arg0, s64 *, 0x88) = (s64) (u16) M2C_FIELD(arg0, s64 *, 0x30);
        M2C_FIELD(arg0, s64 *, 0x90) = (s64) M2C_FIELD(arg0, u16 *, 0x32);
    }
    if (M2C_FIELD(arg0, s64 *, 0x30) & (0x8000 << 0x13)) {
        M2C_FIELD(arg0, f32 *, 0x38) = (f32) (((f32) M2C_FIELD(&D_0049ABC0, u8 *, 6) * 0.0078125f) - 1.0f);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (((f32) M2C_FIELD(&D_0049ABC0, u8 *, 7) * 0.0078125f) - 1.0f);
        M2C_FIELD(arg0, f32 *, 0x40) = (f32) (((f32) M2C_FIELD(&D_0049ABC0, u8 *, 4) * 0.0078125f) - 1.0f);
        M2C_FIELD(arg0, f32 *, 0x44) = (f32) (((f32) M2C_FIELD(&D_0049ABC0, u8 *, 5) * 0.0078125f) - 1.0f);
    }
    if (M2C_FIELD(arg0, s64 *, 0x30) & (0x8000 << 0x11)) {
        M2C_FIELD(arg0, f32 *, 0x58) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0xE) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x5C) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0xF) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x60) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0xC) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x64) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0xD) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x68) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0x10) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0x12) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x70) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0x11) * 0.00390625f);
        M2C_FIELD(arg0, f32 *, 0x74) = (f32) ((f32) M2C_FIELD(&D_0049ABC0, u8 *, 0x13) * 0.00390625f);
    }
    return 1;
}
