f32 func_003F3140(f32);

void *func_00204E58(void *arg0, void *arg1) {
    f32 x = func_003F33C8(*(f32 *)((s8 *)arg1 + 0));
    f32 len = func_003F3140(x);
    f32 scale = 1.0f;
    f32 v;
    scale = x / len;
    *(s32 *)((s8 *)arg0 + 0) = 0;
    *(f32 *)((s8 *)arg0 + 0xC) = scale * *(f32 *)((s8 *)arg1 + 0xC);
    *(f32 *)((s8 *)arg0 + 4) = scale * *(f32 *)((s8 *)arg1 + 4);
    *(f32 *)((s8 *)arg0 + 8) = scale * *(f32 *)((s8 *)arg1 + 8);
    return arg0;
}

void func_00204EF8(void *, void *, void *, f32);

void *func_00205360(void *arg0, void *arg2, void *arg3, void *arg4, f32 fparg0) {
    f32 f20 = fparg0;
    f32 f0 = 1.0f - f20;
    f32 f21 = 2.0f * f20;
    f32 prod = f21 * f0;
    func_00204EF8((void *)0, arg2, arg3, prod);
    func_00204EF8((void *)0, arg2, arg3, fparg0);
    func_00204EF8(arg0, (void *)0, (void *)0, prod);
    return arg0;
}

void func_00205580(void *arg0, void *arg1) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f3;
    f32 temp_f5;
    f32 temp_f6;
    f32 temp_f7;
    f32 temp_f8;
    f32 temp_f9;

    temp_f6 = *(f32 *)((s8 *)arg0 + 8);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xC);
    temp_f2 = *(f32 *)((s8 *)arg0 + 4);
    temp_f5 = *(f32 *)((s8 *)arg0 + 0);
    temp_f0 = 2.0f * temp_f6;
    temp_f3 = 2.0f * temp_f1;
    temp_f7 = 2.0f * temp_f2;
    temp_f12_dummy: ;
    temp_f8 = temp_f7 * temp_f2;
    temp_f9 = temp_f3 * temp_f2;
    {
        f32 a0 = temp_f0 * temp_f6;
        f32 a1 = temp_f0 * temp_f5;
        f32 a2 = temp_f3 * temp_f5;
        f32 a3 = temp_f3 * temp_f1;
        f32 a4 = temp_f0 * temp_f2;
        f32 a5 = temp_f7 * temp_f2;
        f32 a6 = temp_f3 * temp_f2;
        f32 a7 = temp_f7 * temp_f5;
        f32 a8 = temp_f3 * temp_f6;
        f32 b0 = 1.0f - (a0 + a3);
        f32 b1 = a4 - a2;
        f32 b2 = a6 + a5;
        f32 b3 = a8 - a7;
        f32 b4 = 1.0f - (a5 + a1);
        f32 b5 = a2 + a7;
        f32 b6 = a6 - a5;
        f32 b7 = a8 - a1;
        f32 b8 = 1.0f - (a4 + a3);
        f32 b9 = a6 + a5;
        *(f32 *)((s8 *)arg1 + 0xC) = b0;
        *(f32 *)((s8 *)arg1 + 0) = b1;
        *(f32 *)((s8 *)arg1 + 8) = b2;
        *(f32 *)((s8 *)arg1 + 4) = b3;
        *(f32 *)((s8 *)arg1 + 0xC) = b4;
        *(f32 *)((s8 *)arg1 + 8) = b5;
        *(f32 *)((s8 *)arg1 + 0x18) = b6;
        *(f32 *)((s8 *)arg1 + 4) = b7;
        *(f32 *)((s8 *)arg1 + 8) = b8;
    }
}

void func_002059A8(void *, s32);

void func_00205988(void) {
    func_002059A8((void *)0, 0);
}
