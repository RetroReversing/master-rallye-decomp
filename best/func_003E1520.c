extern void func_003E1520(void *);
extern void func_003E3D68(s32);
extern void func_003E1708(void *, const char *);
extern void func_003E67F0(void *, s32, s32, s32);
extern void func_003E6900(void *, s32, s32, s32);
extern const char D_00489A88[];

void func_003D7B00(void *arg0, s32 arg1) {
    if (*(s32*)arg0 == 0) {
        arg1 |= 4;
    }
    *(u8*)((u8*)arg0 + 0x1A) = arg1;
}

s32 func_003E14A8(void *arg0) {
    s32 var_4;
    void *temp_16;

    temp_16 = *(void **)((u8*)arg0 + 0x40);
    var_4 = 0;
    if (*(s32*)((u8*)temp_16 + 4) != 0) {
        if (*(s32*)((u8*)temp_16 + 8) != 0) {
            func_003E1520(temp_16);
            var_4 = 1;
            *(s32*)((u8*)arg0 + 8) = *(s32*)((u8*)temp_16 + 0x118) - *(s32*)((u8*)temp_16 + 0xAC);
            *(s32*)((u8*)temp_16 + 4) = 0;
        }
    }
    return var_4;
}

void func_003E1510(void *arg0) {
    *(s32*)((u8*)arg0 + 0x848) = 0;
    func_003E3D68(1);
}

void func_003E1520(void *arg0) {
    s32 temp_6;

    temp_6 = *(s32*)((u8*)arg0 + 0x118);
    if (*(s32*)((u8*)arg0 + 0x120) != 0) {
        func_003E1708(arg0, D_00489A88);
    } else if (*(s32*)((u8*)arg0 + 0x174) == 3) {
        func_003E67F0(arg0, *(s32*)((u8*)arg0 + 0x1BC), temp_6 - 1, temp_6 - 1);
    } else {
        func_003E6900(arg0, *(s32*)((u8*)arg0 + 0x1CC), *(s32*)((u8*)arg0 + 0x1DC), temp_6 - 1);
    }
    *(s32*)((u8*)arg0 + 0x120) = 0;
}
