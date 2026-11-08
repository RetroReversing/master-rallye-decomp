void* func_0027C520(void* arg0, void* arg1) {
    f32* a0 = (f32*)arg0;
    f32* a1 = (f32*)arg1;
    f32* v1 = (f32*)((u8*)a1 + 0xBC);
    f32* a2 = (f32*)((u8*)a1 + 0x94);
    f32* a3 = (f32*)((u8*)a1 + 0xA0);
    f32 f3 = a2[1];
    f32 f1 = a1[0x25];
    f32 f4 = v1[3] * f1 + v1[4] * f3 + v1[5] * a2[2];
    f32 f2 = v1[6] * f1 + v1[7] * f3 + v1[8] * a2[2];
    f32 f0 = a1[0x2F] * f1 + v1[1] * f3 + v1[2] * a2[2];
    f4 = f4 + v1[5] * a2[2];
    f2 = f2 + v1[8] * a2[2];
    f0 = f0 + v1[2] * a2[2];
    a0[0] = a3[0] - f0;
    a0[2] = a3[2] - f2;
    a0[1] = a3[1] - f4;
    return arg0;
}

void func_0027C600(void* arg0, void* arg1) {
    f32* a0 = (f32*)arg0;
    f32* a1 = (f32*)arg1;
    f32* v0 = (f32*)((u8*)a0 + 0xA0);
    v0[0] = a1[0];
    v0[1] = a1[1];
    v0[2] = a1[2];
}

void func_0027C350(void* arg0) {
    func_00271A28((s32)arg0 + 4);
    func_002719C0((s32)arg0);
}

void func_0027C970(void* arg0, void* arg1) {
    f32* a0 = (f32*)arg0;
    f32* a1 = (f32*)arg1;
    f32* v0 = (f32*)((u8*)a0 + 0x104);
    v0[0] = a1[0];
    v0[1] = a1[1];
    v0[2] = a1[2];
}
