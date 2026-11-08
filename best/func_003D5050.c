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

M2C_UNK func_003D4D70();                            /* extern */
M2C_UNK func_003F74F8(s32);                         /* extern */
extern void *D_004404DC;

void func_003D5050(void **arg0) {
    if (M2C_FIELD(*arg0, s64 *, 0x10) & 0x2000) {
        func_003D4D70();
    }
    if (M2C_FIELD(*arg0, s64 *, 0x10) & 0x4000) {
        func_003F74F8(M2C_FIELD(D_004404DC, s32 *, 8));
        func_003F74F8(M2C_FIELD(D_004404DC, s32 *, 0xC));
    }
}
