extern void func_002698B8(s32 arg0);
extern void func_0019EAC8(s32 arg0, s32 arg1);
extern void D_002AD390(void *arg0);
extern void *jtbl_0044FE50;

void func_00178260(void *arg0) {
    func_002698B8(*(s32 *)(arg0 + 0x2C));
}

f32 func_00178FB8(u32 arg0) {
    if (arg0 == 0) return 0.1f;
    if (arg0 == 2) return 1.0f;
    if (arg0 == 1) return 0.25f;
    if (arg0 == 4) return 0.0f;
    if (arg0 == 3) return 0.5f;
    return 0.0f;
}

f32 func_001780E0(void *arg0) {
    f32 var_f2;
    void *var_2;
    s32 i;
    var_f2 = 0.0f;
    var_2 = *(void **)(arg0 + 0x10);
    i = 3;
    do {
        var_f2 += *(f32 *)(var_2 + 0x128) * *(f32 *)(var_2 + 0x44);
        var_2 += 0x190;
        i--;
    } while (i >= 0);
    if (var_f2 < 0.0f) {
        return 0.0f;
    }
    var_f2 *= 0.25f;
    var_f2 *= 2.4f;
    return var_f2;
}

void func_00178E50(void *arg0, s32 arg1) {
    void *temp_6;
    s32 var_2;
    void *temp_2;
    s32 temp_4;
    temp_6 = *(void **)(arg0 + 0x98);
    var_2 = arg1 & 1;
    if (temp_6 != NULL) {
        temp_2 = *(void **)(temp_6 + 0x18);
        ((void (*)(void *, s32, void *))(*(void **)(temp_2 + 0xC)))(temp_6 + *(s16 *)(temp_2 + 8), 3, temp_6);
    }
    temp_4 = *(s32 *)(arg0 + 0x9C);
    if (temp_4 != 0) {
        func_0019EAC8(temp_4, 3);
        var_2 = arg1 & 1;
    }
    if (var_2 != 0) {
        D_002AD390(arg0);
    }
}
