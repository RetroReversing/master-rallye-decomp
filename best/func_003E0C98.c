/* machine draft (m2c) for ee-gcc-2.95.3 -O1 -G0, tried by autopilot */
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

M2C_UNK func_003E1078(s32, void *);                 /* extern */

void func_003E0C98(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_5;
    void *temp_7;

    temp_7 = M2C_FIELD(arg0, void **, 0x40);
    temp_5 = (arg1 & 0x0FFFFFFF) | 0x20000000;
    M2C_FIELD(temp_7, s32 *, 0xB0) = 1;
    M2C_FIELD(temp_7, s32 *, 0xD8) = temp_5;
    M2C_FIELD(temp_7, s32 *, 0xE4) = arg2;
    M2C_FIELD(temp_7, s32 *, 0xDC) = 0;
    M2C_FIELD(temp_7, s32 *, 0xE0) = 0;
    func_003E1078(temp_5, temp_7);
}
