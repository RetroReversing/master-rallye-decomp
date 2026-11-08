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

s32 D_002AD408(M2C_UNK);                            /* extern */
s32 func_00226638(s32);                             /* extern */
M2C_UNK func_00226F38(s32);                         /* extern */
M2C_UNK func_00227380(s32, void *, s32, s32);       /* extern */
s32 func_00227690(s32);                             /* extern */
s32 func_00227850(s32);                             /* extern */
void *func_00227868(s32, s32);                      /* extern */
s32 func_00227938(s32);                             /* extern */
s32 func_002281E8(s32, s32, M2C_UNK, void *);       /* extern */
M2C_UNK func_002284E8(void *);                      /* extern */
M2C_UNK func_00228520(void *);                      /* extern */

void func_00228320(void *arg0) {
    s32 temp_16;
    s32 temp_2_2;
    s32 temp_5;
    s32 var_16;
    void *temp_17;
    void *temp_2;
    void *temp_2_3;
    void *temp_3;
    void *temp_3_2;

    var_16 = 0;
    if (func_00227690(M2C_FIELD(arg0, s32 *, 4)) != 0) {
        func_00226F38(M2C_FIELD(arg0, s32 *, 4));
        if (func_00227850(M2C_FIELD(arg0, s32 *, 4)) > 0) {
            temp_17 = arg0 + 0x1C;
loop_5:
            if (var_16 < func_00227850(M2C_FIELD(arg0, s32 *, 4))) {
                temp_5 = var_16;
                var_16 += 1;
                temp_2 = func_00227868(M2C_FIELD(arg0, s32 *, 4), temp_5);
                temp_3 = temp_2 + 8;
                M2C_FIELD(temp_3, f32 *, 0xC) = (f32) (M2C_FIELD(temp_3, f32 *, 0xC) - ((M2C_FIELD(temp_2, f32 *, 8) * M2C_FIELD(arg0, f32 *, 0x1C)) + (M2C_FIELD(temp_3, f32 *, 4) * M2C_FIELD(temp_17, f32 *, 4)) + (M2C_FIELD(temp_3, f32 *, 8) * M2C_FIELD(temp_17, f32 *, 8))));
                goto loop_5;
            }
            func_00226F38(M2C_FIELD(arg0, s32 *, 4));
            var_16 = M2C_FIELD(arg0, s32 *, 0x10) != 0;
        }
    }
    if (var_16 == 0) {
        if (func_00227938(M2C_FIELD(arg0, s32 *, 4)) == 0) {
            func_00228520(arg0);
            temp_16 = func_00226638(D_002AD408(0x24));
            temp_2_2 = func_00226638(D_002AD408(0x24));
            func_00227380(M2C_FIELD(arg0, s32 *, 4), M2C_FIELD(arg0, void **, 0), temp_16, temp_2_2);
            temp_2_3 = M2C_FIELD(arg0, void **, 0);
            temp_3_2 = arg0 + 0x1C;
            M2C_FIELD(temp_2_3, f32 *, 0xC) = (f32) (M2C_FIELD(temp_2_3, f32 *, 0xC) - ((M2C_FIELD(temp_2_3, f32 *, 0) * M2C_FIELD(arg0, f32 *, 0x1C)) + (M2C_FIELD(temp_2_3, f32 *, 4) * M2C_FIELD(temp_3_2, f32 *, 4)) + (M2C_FIELD(temp_2_3, f32 *, 8) * M2C_FIELD(temp_3_2, f32 *, 8))));
            func_002284E8(arg0);
            M2C_FIELD(arg0, s32 *, 8) = func_002281E8(D_002AD408(0x2C), temp_16, -1, arg0);
            M2C_FIELD(arg0, s32 *, 0xC) = func_002281E8(D_002AD408(0x2C), temp_2_2, 1, arg0);
        } else {
            func_002284E8(arg0);
        }
    }
}
