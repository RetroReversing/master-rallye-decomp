void func_002660C8(int *arg0) {
    s32 one = 1;
    arg0[7] = 0;
    arg0[0] = one;
    arg0[9] = 0;
    arg0[10] = 0;
    arg0[12] = 0;
}

void func_00268550(int *arg0, s32 arg1) {
    s32 one = 1;
    if (arg1 == one) {
        arg0[7] = 1;
        return;
    }
    if (arg1 == 0) {
        arg0[7] = 0;
        return;
    }
    arg0[7] = 1;
}

typedef struct S_2634C0 {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    f32 unkC;
    s32 unk10;
    s32 unk14;
    s32 unk18;
} S_2634C0;

S_2634C0 *func_002634C0(S_2634C0 *arg0) {
    volatile char pad[0x20];
    S_2634C0 *p;
    S_2634C0 *ret = arg0;

    (void)pad;
    arg0->unk0 = 0;
    p = (S_2634C0 *)((char *)arg0 + 0x10);
    arg0->unk4 = 0;
    arg0->unk8 = 0;
    arg0->unk10 = 0;
    p->unk4 = 0;
    p->unk8 = 0;
    arg0->unkC = 40.0f;
    return ret;
}

typedef struct Elem20 {
    s32 id;
    f32 f0, f1, f2, f3, f4, f5, f6;
} Elem20;

typedef struct Container634 {
    Elem20 *begin;
    Elem20 *end;
} Container634;

s32 func_00263428(Container634 *arg0, s32 *arg1) {
    s32 sp0;
    f32 sp4;
    f32 sp10;
    f32 sp14;
    f32 sp18;
    f32 sp1C;
    s32 sp20;
    s32 var_7;
    Elem20 *var_4;
    Elem20 *temp_2;
    s32 target;
    s32 *var_3;

    temp_2 = arg0->end;
    var_4 = arg0->begin;
    var_7 = 0;
    if (var_4 != temp_2) {
        target = *arg1;
        var_3 = (s32 *)var_4 + 1;
loop_2:
        sp0 = var_3[-1];
        sp4 = (f32)var_3[0];
        sp10 = (f32)var_3[3];
        sp14 = (f32)var_3[4];
        sp18 = (f32)var_3[5];
        sp20 = var_3[-1];
        sp1C = (f32)var_3[6];
        if (var_3[-1] == target) {
            return var_7;
        }
        var_7 += 1;
        var_4 += 1;
        var_3 += 8;
        if (var_4 == temp_2) {
            goto block_5;
        }
        goto loop_2;
    }
block_5:
    return -1;
}
