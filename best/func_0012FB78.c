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

M2C_UNK func_0012E7E8(s32, s32 *);                  /* extern */
M2C_UNK func_0012E858();                            /* extern */
M2C_UNK func_0012FBE8(void *);                      /* extern */
extern s32 D_0040E4F4;

void func_0012FB78(void *arg0, s32 arg1) {
    if (arg1 == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
            D_0040E4F4 = 0x18;
            func_0012E7E8(M2C_FIELD(arg0, s32 *, 0xC), &D_0040E4F4);
        }
    } else if (M2C_FIELD(arg0, s32 *, 0x14) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 0;
        D_0040E4F4 = 0;
        func_0012E858();
    }
    func_0012FBE8(arg0);
}
