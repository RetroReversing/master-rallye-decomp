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

M2C_UNK func_00242BC8(void *, s32);                 /* extern */
M2C_UNK func_002AD530(void *, void *, s32);         /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
M2C_UNK func_003B8EF8(void *);                      /* extern */
M2C_UNK func_003B8FD0(void *);                      /* extern */
M2C_UNK func_003B90A8(void *);                      /* extern */
M2C_UNK func_003B9180(void *);                      /* extern */
extern M2C_UNK D_00487FB0;

void func_003B7F80(void *arg0, s32 arg1) {
    s32 temp_6;
    void *temp_2;
    void *temp_5;
    void *var_2;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &D_00487FB0;
    func_003B8EF8(arg0 + 0x3C);
    func_003B8FD0(arg0 + 0x40);
    func_003B90A8(arg0 + 0x44);
    func_003B9180(arg0 + 0x48);
    temp_5 = M2C_FIELD(arg0, void **, 0x4C);
    if (temp_5 != NULL) {
        temp_6 = M2C_FIELD(temp_5, s32 *, -0x10) * 0x14;
        temp_2 = temp_6 + temp_5;
        if (temp_5 != temp_2) {
            var_2 = temp_2 - 0x14;
            __repair_rows: {
                var_2 -= 0x14;
            }
if (temp_5 != var_2) goto __repair_rows;
        }
        func_002AD530(temp_5 - 0x10, temp_5, temp_6);
    }
    func_003B9180(arg0 + 0x48);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x48));
    func_003B90A8(arg0 + 0x44);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x44));
    func_003B8FD0(arg0 + 0x40);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x40));
    func_003B8EF8(arg0 + 0x3C);
    func_002B2028(M2C_FIELD(arg0, s32 *, 0x3C));
    func_00242BC8(arg0, arg1);
}
