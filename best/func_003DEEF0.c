typedef struct S_func_003DAC48_arg0 {
    /* 0x00 */ u8 unk_00[0x38];
    /* 0x38 */ s32 unk_38;
} S_func_003DAC48_arg0;

typedef struct S_func_003DAC28_arg0 {
    /* 0x00 */ u8 unk_00[0x38];
    /* 0x38 */ s32 unk_38;
} S_func_003DAC28_arg0;

typedef struct S_func_003DAC68_arg0 {
    /* 0x00 */ s32 unk_00;
    /* 0x04 */ u8 unk_04[0x34];
    /* 0x38 */ s32 unk_38;
    /* 0x3C */ u8 unk_3C[0x4];
    /* 0x40 */ s64 unk_40;
} S_func_003DAC68_arg0;

typedef struct S_func_003D6B38_arg0 {
    /* 0x00 */ u8 unk_00[0x50];
    /* 0x50 */ void *vtable;
    /* 0x58 */ void *unk_58;
} S_func_003D6B38_arg0;

extern void func_004035D8(s32);
extern void func_00403528(s32, s64);
extern s64 func_004034A8(s32, s32, s64);
extern s32 func_003F7600(s32);
extern s32 func_003DA7E0(void *, s32);
extern void func_003DAB38(void *, s32, s32);
extern void func_003DA918(void *, s32);
extern void func_002AE2F0(void);
extern void func_002AE718(void);
extern void D_004898C8;

void func_003DEE90(S_func_003DAC48_arg0 *arg0) {
    func_004035D8(arg0->unk_38);
}

void func_003DEE68(S_func_003DAC28_arg0 *arg0, s32 arg1) {
    func_00403528(arg0->unk_38, (s64)arg1);
}

s32 func_003DEEF0(S_func_003DAC68_arg0 *arg0, s32 arg1, s64 arg2) {
    s64 var_16;
    s32 var_18;
    s64 var_19;
    
    var_19 = arg2;
    var_18 = arg1;
    var_16 = var_19;
    
    while (var_16 > 0) {
        s64 temp = func_004034A8(arg0->unk_38, var_18, var_16);
        if (temp == -1) {
            arg0->unk_00 |= 0x20;
            break;
        }
        var_16 -= temp;
        var_18 += (s32)temp;
    }
    
    if (arg0->unk_40 >= 0) {
        arg0->unk_40 = arg0->unk_40 + (arg2 - var_16);
    }
    
    return (s32)(arg2 - var_16);
}

void *func_003DF178(S_func_003D6B38_arg0 *arg0, s32 arg1) {
    s32 temp;
    
    temp = func_003F7600(arg1);
    func_003DA7E0(arg0, temp);
    arg0->unk_58 = (void *)arg1;
    arg0->vtable = &D_004898C8;
    func_003DAB38(arg0, 0, 0);
    return arg0;
}
