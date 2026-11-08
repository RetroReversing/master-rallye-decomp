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

void func_0018DE60(void *arg0, void *arg1) {
    M2C_FIELD(arg1, f32 *, 0x210) = (f32) M2C_FIELD(arg0, f32 *, 8);
    M2C_FIELD(arg1, f32 *, 0x214) = (f32) M2C_FIELD(arg0, f32 *, 0xC);
    M2C_FIELD(arg1, f32 *, 0x218) = (f32) M2C_FIELD(arg0, f32 *, 0x10);
    M2C_FIELD(arg1, f32 *, 0x21C) = (f32) M2C_FIELD(arg0, f32 *, 0x14);
    M2C_FIELD(arg1, f32 *, 0x220) = (f32) M2C_FIELD(arg0, f32 *, 0x18);
    M2C_FIELD(arg1, f32 *, 0x224) = (f32) M2C_FIELD(arg0, f32 *, 0x1C);
    M2C_FIELD(arg1, f32 *, 0x228) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    M2C_FIELD(arg1, f32 *, 0x22C) = (f32) M2C_FIELD(arg0, f32 *, 0x24);
    M2C_FIELD(arg1, f32 *, 0x230) = (f32) M2C_FIELD(arg0, f32 *, 0x28);
    M2C_FIELD(arg1, f32 *, 0x234) = (f32) M2C_FIELD(arg0, f32 *, 0x2C);
    M2C_FIELD(arg1, f32 *, 0x238) = (f32) M2C_FIELD(arg0, f32 *, 0x30);
    M2C_FIELD(arg1, f32 *, 0x23C) = (f32) M2C_FIELD(arg0, f32 *, 0x34);
    M2C_FIELD(arg1, f32 *, 0x240) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
}
