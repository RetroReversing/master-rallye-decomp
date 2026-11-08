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

M2C_UNK func_00262548(s32, void *);                 /* extern */
s32 func_00262838(M2C_UNK);                         /* extern */
extern s32 D_004267A8;
extern s32 D_00493B00;

void *func_00262C98(void *arg0) {
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 4) = (s32) D_00493B00;
    M2C_FIELD(arg0, f32 *, 0x20) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x28) = 8000.0f;
    M2C_FIELD(arg0, f32 *, 0x2C) = 9000.0f;
    M2C_FIELD(arg0, f32 *, 0x38) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x24) = 1.0f;
    M2C_FIELD(arg0, f32 *, 0x40) = 0.0f;
    M2C_FIELD(arg0, f32 *, 0x3C) = 0.0f;
    M2C_FIELD(arg0, s32 *, 8) = 1;
    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    func_00262548(func_00262838(1), arg0);
    D_004267A8 += 1;
    M2C_FIELD(arg0, s32 *, 0) = 0xADADADAD;
    return arg0;
}
