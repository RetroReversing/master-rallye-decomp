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

M2C_UNK func_001160A8(s32, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_00116D08();                                /* extern */
s32 func_001189C0();                                /* extern */
M2C_UNK func_00191B08(s32, s32);                    /* extern */
M2C_UNK func_00191BB8(s32, s32);                    /* extern */
M2C_UNK func_00191C50(s32, s32);                    /* extern */
M2C_UNK func_00191E60(s32, s32);                    /* extern */
M2C_UNK func_00191EB8(s32, M2C_UNK);                /* extern */
M2C_UNK func_00191FD0(s32, s32);                    /* extern */
M2C_UNK func_00192028(s32, s32);                    /* extern */
s32 func_00192398(s32, M2C_UNK);                    /* extern */
s32 func_001924D0(s32, M2C_UNK);                    /* extern */
M2C_UNK func_00192998(s32, M2C_UNK, s32);           /* extern */
M2C_UNK func_00192AF0(s32, M2C_UNK, s32);           /* extern */
s32 func_00193B60();                                /* extern */
s32 func_001942E8(s32, M2C_UNK);                    /* extern */
s32 func_00194398(s32);                             /* extern */
M2C_UNK func_001943D8(s32, M2C_UNK);                /* extern */
s32 func_00194428(s32);                             /* extern */
s32 func_001944B8(s32);                             /* extern */
s32 func_00194548(s32);                             /* extern */
s32 func_001945D8(s32);                             /* extern */
M2C_UNK func_00194618(s32, s32);                    /* extern */
s32 func_00194738(s32);                             /* extern */
s32 func_00194C40();                                /* extern */

void func_00133170(void) {
    s32 temp_16;
    s32 temp_16_10;
    s32 temp_16_11;
    s32 temp_16_12;
    s32 temp_16_2;
    s32 temp_16_3;
    s32 temp_16_4;
    s32 temp_16_5;
    s32 temp_16_6;
    s32 temp_16_7;
    s32 temp_16_8;
    s32 temp_16_9;
    s32 temp_17;
    s32 temp_17_2;
    s32 temp_17_3;
    s32 temp_17_4;
    s32 temp_17_5;
    s32 temp_17_6;
    s32 temp_17_7;
    s32 temp_18;
    s32 temp_18_2;

    temp_17 = func_001942E8(func_00194C40(), 0);
    func_00192998(func_00193B60(), 0, temp_17);
    temp_16 = func_00193B60();
    func_00192AF0(temp_16, 0, M2C_FIELD(((temp_17 * 0x34) + func_001189C0()), s32 *, 4));
    if (func_00194738(func_00194C40()) != 0) {
        temp_17_2 = func_001942E8(func_00194C40(), 1);
        func_00192998(func_00193B60(), 1, temp_17_2);
        temp_16_2 = func_00193B60();
        func_00192AF0(temp_16_2, 1, M2C_FIELD(((temp_17_2 * 0x34) + func_001189C0()), s32 *, 4));
        func_001943D8(func_00194C40(), 2);
    }
    temp_16_3 = func_00193B60();
    func_00191C50(temp_16_3, func_00194398(func_00194C40()));
    temp_16_4 = func_00193B60();
    temp_17_3 = func_001189C0();
    func_00191BB8(temp_16_4, (func_00194398(func_00194C40()) * 0x2C) + temp_17_3 + 0x5FC);
    temp_16_5 = func_00193B60();
    func_00191B08(temp_16_5, func_00194428(func_00194C40()));
    temp_16_6 = func_00193B60();
    func_00192028(temp_16_6, func_001944B8(func_00194C40()));
    temp_16_7 = func_00193B60();
    func_00191E60(temp_16_7, func_00194548(func_00194C40()) + 1);
    if (func_00194428(func_00194C40()) == 3) {
        temp_17_4 = func_00193B60();
        temp_16_8 = func_001189C0();
        func_00191FD0(temp_17_4, M2C_FIELD(((func_001942E8(func_00194C40(), 0) * 0x34) + temp_16_8), s32 *, 4));
        temp_17_5 = func_00194C40();
        temp_16_9 = func_001189C0();
        func_00194618(temp_17_5, M2C_FIELD(((func_001942E8(func_00194C40(), 0) * 0x34) + temp_16_9), s32 *, 4));
    } else {
        temp_16_10 = func_00193B60();
        func_00191FD0(temp_16_10, func_001945D8(func_00194C40()) + 1);
    }
    temp_18 = func_00194548(func_00194C40());
    if (func_00194428(func_00194C40()) != 1) {
        if (func_00194738(func_00194C40()) != 0) {
            temp_18_2 = func_00116D08();
            temp_17_6 = func_001924D0(func_00193B60(), 0);
            temp_16_11 = func_00192398(func_00193B60(), 0);
            func_001160A8(temp_18_2, 2, 0, temp_17_6, temp_16_11, func_00192398(func_00193B60(), 1));
        } else {
            temp_17_7 = func_00116D08();
            temp_16_12 = func_001924D0(func_00193B60(), 0);
            func_001160A8(temp_17_7, 1, temp_18, temp_16_12, func_00192398(func_00193B60(), 0), -1);
        }
    }
    if (func_00194738(func_00194C40()) != 0) {
        func_00191E60(func_00193B60(), 2);
        func_00191EB8(func_00193B60(), 2);
    }
}
