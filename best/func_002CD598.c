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

s32 func_002B1FC0(s32);                             /* extern */
M2C_UNK func_002B2028(s32);                         /* extern */
M2C_UNK func_002CD890(s32, s32, s32);               /* extern */
s32 func_002CDA18();                                /* extern */
M2C_UNK func_002CDA88(s32);                         /* extern */
M2C_UNK func_002CF418(M2C_UNK *);                   /* extern */
s32 *func_002D04D0();                               /* extern */
M2C_UNK func_0030C630(s32, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0030CB08(s32, M2C_UNK);                /* extern */
M2C_UNK func_0030CC58(M2C_UNK);                     /* extern */
M2C_UNK func_0030CCE8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0030CD48(s32);                         /* extern */
M2C_UNK func_0030D4D0(M2C_UNK);                     /* extern */
M2C_UNK func_0030D9C0(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0030E320(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_003ECE40(s32);                             /* extern */
M2C_UNK func_003FA634(s32, M2C_UNK *);              /* extern */
M2C_UNK func_003FA8A4(s32, M2C_UNK *);              /* extern */
s32 func_003FA9B8(M2C_UNK *);                       /* extern */
M2C_UNK func_003FB548(s32);                         /* extern */
extern s32 D_004294D0;
extern s32 D_0042D5B0;
extern s32 D_0042D5C4;
extern s32 D_0044E7F0;
extern M2C_UNK D_00483208;
extern M2C_UNK D_00483218;
extern M2C_UNK D_00483228;
extern M2C_UNK D_00483230;
extern M2C_UNK D_00483238;

void func_002CD598(s32 arg0, s32 arg1, M2C_UNK *arg2) {
    M2C_UNK sp10;
    M2C_UNK *var_17;
    M2C_UNK *var_19;
    M2C_UNK *var_4;
    s32 temp_16;
    s32 temp_21;
    s32 temp_22;
    s32 temp_2;
    s32 var_16;
    s32 var_2;
    s32 var_3;
    s32 var_4_2;
    s32 var_5;

    temp_22 = func_003ECE40(1);
    func_002CF418(&D_00483208);
    if (D_004294D0 == 0) {
        D_004294D0 = *func_002D04D0();
    }
    func_0030CD48(D_004294D0);
    func_002CD890(arg0, D_0042D5B0, arg1);
    temp_21 = func_002CDA18();
    func_002CF418(&D_00483218);
    if (D_0044E7F0 != 0) {
        var_19 = &D_00483230;
        var_17 = &D_00483228;
        temp_16 = func_003FA9B8(arg2);
        var_16 = temp_16 + func_003FA9B8(&D_00483228);
        var_4 = &D_00483230;
    } else {
        var_17 = &D_00483238;
        var_19 = NULL;
        var_16 = func_003FA9B8(arg2);
        var_4 = &D_00483238;
    }
    temp_2 = func_002B1FC0(var_16 + func_003FA9B8(var_4) + 1);
    func_003FA8A4(temp_2, var_17);
    func_003FA634(temp_2, arg2);
    func_003FB548(temp_2 + func_003FA9B8(var_17));
    if (var_19 != NULL) {
        func_003FA634(temp_2, var_19);
    }
    func_0030D9C0(temp_21, temp_2, 0);
    func_0030CCE8(2, 0x5010, 0x10000);
    func_0030C630(temp_21, 2, 0, 0, 0, 0, 0x7F, 0, 0);
    func_0030D4D0(0);
    func_0030E320(2, &sp10);
    if (M2C_FIELD(&sp10, u8 *, 0x11) != 0) {
        do {
            func_0030D4D0(0);
            var_3 = 0x4E20;
loop_15:
            if (var_3 >= 0) {
                var_3 -= 1;
                var_4_2 = 0x30;
loop_12:
                var_4_2 -= 1;
                if (var_4_2 >= 0) {
                    goto loop_12;
                }
                goto loop_15;
            }
            var_2 = 0x4E20;
loop_21:
            if (var_2 >= 0) {
                var_2 -= 1;
                var_5 = 0x30;
loop_18:
                var_5 -= 1;
                if (var_5 >= 0) {
                    goto loop_18;
                }
                goto loop_21;
            }
            func_0030CB08(D_0042D5C4, 0);
            func_0030E320(2, &sp10);
        } while (M2C_FIELD(&sp10, u8 *, 0x11) != 0);
    }
    func_0030D4D0(0);
    func_002CDA88(temp_21);
    func_0030D4D0(0);
    func_0030CC58(2);
    func_0030D4D0(0);
    if (temp_2 != 0) {
        func_002B2028(temp_2);
    }
    func_003ECE40(temp_22);
}
