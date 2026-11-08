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

M2C_UNK func_002B2028(s32);                         /* extern */
M2C_UNK func_002B84E0(s32, M2C_UNK);                /* extern */
s32 func_002B8598(s32);                             /* extern */
M2C_UNK func_002B8768(s32);                         /* extern */
M2C_UNK func_002BFB30(void *, s32);                 /* extern */
extern M2C_UNK D_00480368;

void func_002BB6E8(void *arg0, s32 arg1) {
    s32 temp_17;
    s32 temp_4;

    temp_17 = arg0 + 0x28;
    M2C_FIELD(arg0, M2C_UNK **, 0x24) = &D_00480368;
    if (func_002B8598(temp_17) != 0) {
        func_002B8768(temp_17);
    }
    temp_4 = M2C_FIELD(arg0, s32 *, 0x60);
    if (temp_4 != 0) {
        func_002B2028(temp_4);
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    func_002B84E0(temp_17, 2);
    func_002BFB30(arg0, arg1);
}
