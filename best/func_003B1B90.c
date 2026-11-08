void func_003D7B00(void *arg0, s32 arg1) {
    if (!*(s32*)((u8*)arg0 + 0)) {
        arg1 |= 4;
    }
    *(u8*)((u8*)arg0 + 0x1A) = arg1;
}

s32 func_003B1FD0(s32 arg0, s32 arg1) {
    s32 sp0 = func_003B1F80(arg0);
    func_003B35F0(sp0 + 8, arg1);
    return sp0;
}

void func_003B1B90(u32 arg0, u32 arg1, s32 arg2) {
    u32 var_18 = arg0;
    while (var_18 < arg1) {
        func_003B3458(var_18);
        var_18 += 0x18;
    }
}

void *func_003B1A40(void *arg0, void *arg1) {
    ((f32*)arg0)[0] = ((f32*)arg1)[0];
    ((f32*)arg0)[1] = ((f32*)arg1)[1];
    ((f32*)arg0)[2] = ((f32*)arg1)[2];
    ((f32*)arg0)[3] = ((f32*)arg1)[3];
    return arg0;
}
