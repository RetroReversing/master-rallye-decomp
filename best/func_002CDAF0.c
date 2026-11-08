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

M2C_UNK func_002CD9C8(M2C_UNK);                     /* extern */
M2C_UNK func_002CEF68();                            /* extern */
M2C_UNK func_002CF418(M2C_UNK *);                   /* extern */
s32 *func_002D04D0();                               /* extern */
s32 func_0030C1B8();                                /* extern */
M2C_UNK func_0030CB08(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0030CBD0();                            /* extern */
M2C_UNK func_0030CBF8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0030CC90(M2C_UNK);                     /* extern */
M2C_UNK func_0030CCE8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0030CD48(s32);                         /* extern */
M2C_UNK func_0030CD88();                            /* extern */
M2C_UNK func_0030D4D0(M2C_UNK);                     /* extern */
M2C_UNK func_0030D5F8(M2C_UNK);                     /* extern */
M2C_UNK func_0030DC50(M2C_UNK);                     /* extern */
s32 func_003ECE40(s32);                             /* extern */
M2C_UNK func_003F9698(M2C_UNK *);                   /* extern */
extern s32 D_004292F8;
extern M2C_UNK D_004832C8;
extern M2C_UNK D_004832D8;
extern M2C_UNK D_004832E8;
extern M2C_UNK D_004832F8;
extern M2C_UNK D_00483308;
extern M2C_UNK D_00483318;
extern M2C_UNK D_00483358;

s32 func_002CDAF0(void) {
    s32 temp_23;
    s32 var_16;
    s32 var_17;
    s32 var_18;

    temp_23 = func_003ECE40(1);
    if (func_0030C1B8() >= 0) {
        func_002CF418(&D_004832C8);
        func_0030CBD0();
        var_17 = 0x5010;
        var_16 = 0;
        func_0030D4D0(0);
        func_0030DC50(1);
        var_18 = 0x5010;
        func_0030D4D0(0);
        func_0030CBF8(D_004292F8, 0x40, 0x50);
        func_0030D4D0(0);
        func_002CF418(&D_004832D8);
        do {
            if (var_16 == 0) {
                func_0030CCE8(0, 0x5010, 0x50A00);
                var_17 += 0x50A00;
            } else if (var_16 != 1) {
                func_0030CCE8(var_16, var_18, 0x28500);
                var_17 += 0x28500;
            }
            var_16 += 1;
            var_18 += 0x28500;
        } while (var_16 < 2);
        *func_002D04D0() = var_17;
        func_0030CD48(var_17);
        func_0030CC90(3);
        func_0030CB08(-1, 0);
        func_0030D4D0(0);
        func_002CF418(&D_004832E8);
        func_0030CD88();
        func_0030D4D0(0);
        func_002CF418(&D_004832F8);
        func_002CD9C8(0x40);
        func_0030D5F8(0);
        func_0030D5F8(1);
        func_002CF418(&D_00483308);
        func_002CEF68();
        func_002CF418(&D_00483358);
        func_003ECE40(temp_23);
        return 1;
    }
    func_003F9698(&D_00483318);
loop_9:
    goto loop_9;
}
