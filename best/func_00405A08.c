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

M2C_UNK func_00405438(M2C_UNK, void *, M2C_UNK, s32, s32, s32); /* extern */
void *func_004058E0(s32);                           /* extern */

void func_00405A08(void *arg0, s32 arg1) {
    void *temp_2;

    temp_2 = func_004058E0(arg1);
    M2C_FIELD(temp_2, s32 *, 0x14) = (s32) M2C_FIELD(arg0, s32 *, 0x14);
    M2C_FIELD(temp_2, s32 *, 0x1C) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_2, s32 *, 0x20) = 0x8000000C;
    func_00405438(0x80000008, temp_2, 0x40, M2C_FIELD(arg0, s32 *, 0x20), M2C_FIELD(arg0, s32 *, 0x24), M2C_FIELD(arg0, s32 *, 0x28));
}
