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

s32 D_002AD408(M2C_UNK, M2C_UNK);                   /* extern */
s32 func_002F7640(s32);                             /* extern */
extern M2C_UNK D_00485D28;

void *func_00342BB8(void *arg0) {
    void *temp_3;
    void *temp_2;

    temp_3 = arg0 + 0x100;
    M2C_FIELD(arg0, M2C_UNK **, 0x148) = &D_00485D28;
    M2C_FIELD(arg0, s32 *, 0x100) = 0;
    temp_2 = arg0 + 0x130;
    M2C_FIELD(temp_3, f32 *, 0xC) = 1.0f;
    M2C_FIELD(temp_3, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x124) = 1;
    M2C_FIELD(temp_3, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s32 *, 0x114) = 0;
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, s32 *, 0x11C) = 0;
    M2C_FIELD(arg0, s32 *, 0x120) = 0;
    M2C_FIELD(arg0, s32 *, 0x128) = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    M2C_FIELD(temp_2, s32 *, 0xC) = 0;
    M2C_FIELD(temp_2, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0x140) = 0;
    M2C_FIELD(temp_2, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0x144) = func_002F7640(D_002AD408(0x84, 1));
    return arg0;
}
