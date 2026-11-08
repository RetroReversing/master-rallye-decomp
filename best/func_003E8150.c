extern s32 func_002BF920(void);
extern s64 D_002BFA80(s32);
extern s64 func_0040C530(f32);
extern f32 func_0040C7F0(s64, s64);
extern f32 func_0040C7F0a(s64);
extern f32 D_0043BFD0;
extern s32 D_0043BFCC;
extern s32 D_0043C070;
extern const char D_0048A668[];
extern const char D_0048A698[];

typedef struct {
    f32 unk0;
    u8 pad4[4];
    s64 unk8;
    f32 unk10;
    f32 unk14;
    s32 unk18;
} S_D_00496980;

extern s32 func_002BD4E8(s32);
extern s32 func_002BDB28(void);
extern s32 func_002CD128(const char *);
extern void func_002CD170(s32);
extern s32 func_002CF8B0(s32);
extern s32 func_002D04D0(void);
extern s32 func_003ECE40(s32);
extern void func_003ECE50(const char *);

void func_003E80A8(S_D_00496980 *arg0, f32 fparg0) {
    s64 var2;
    if (D_0043BFCC == 0) {
        s32 temp3 = arg0->unk18;
        s64 temp2 = D_002BFA80(func_002BF920());
        s64 temp16 = (temp3 == 0) ? temp2 : (temp2 >> temp3);
        arg0->unk0 = fparg0;
        if (fparg0 == 0.0f) {
            arg0->unk8 = temp16;
            return;
        }
        var2 = temp16 - func_0040C530(fparg0 * arg0->unk10);
    } else {
        arg0->unk0 = fparg0;
        var2 = func_0040C530((D_0043BFD0 - fparg0) * arg0->unk10);
    }
    arg0->unk8 = var2;
}

void func_003E8150(S_D_00496980 *arg0) {
    f32 var_f0;
    if (D_0043BFCC == 0) {
        s32 temp4 = arg0->unk18;
        s64 temp2 = D_002BFA80(func_002BF920());
        s64 temp5 = arg0->unk8;
        s64 shifted = (temp4 == 0) ? temp2 : (temp2 >> temp4);
        s64 temp4_2 = shifted - temp5;
        if ((temp4_2 >> 31) != 0) {
            var_f0 = func_0040C7F0(temp4_2, temp5);
        } else {
            var_f0 = (f32)(s32)temp4_2;
        }
        arg0->unk0 = var_f0 * arg0->unk14;
    } else {
        f32 t = func_0040C7F0a(arg0->unk8);
        arg0->unk0 = D_0043BFD0 - t * arg0->unk14;
    }
}

void func_003E8230(void) {
    f32 f0 = D_0043BFD0;
    f32 f2 = f0 + 0.033f;
    s32 i0 = (s32)(f0 * 30.0f);
    s32 i2 = (s32)(f2 * 30.0f);
    D_0043BFD0 = f2;
    if (i2 != i0) {
        return;
    }
    f32 f = f2 + 0.00035f;
    for (;;) {
        s32 ic = (s32)(f * 30.0f);
        if (ic == i0) {
            f = f + 0.00035f;
        } else {
            break;
        }
    }
    D_0043BFD0 = f;
}

void func_003ED008(void) {
    s32 temp_16;
    if (D_0043C070 == 0) {
        temp_16 = func_003ECE40(1);
        if (func_002CF8B0(func_002D04D0()) != 0) {
            func_002CD170(func_002CD128(D_0048A698));
            func_002CD170(func_002CD128(D_0048A668));
            func_003ECE50(D_0048A668);
            D_0043C070 = 1;
        } else {
            func_003ECE50(D_0048A698);
        }
        func_003ECE40(temp_16);
    }
    func_002BD4E8(func_002BDB28());
}
