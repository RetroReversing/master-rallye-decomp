extern void *D_002AD390(void *);
extern void func_0021DDD8(void *, s32);
extern void *D_004785B0;
extern void *func_002063F0(void *, s32, void *);
extern void func_00218A68(void *, void *, void *);

void func_00205580(void *arg0, void *arg1) {
    f32 temp_f0, temp_f0_2, temp_f11, temp_f12, temp_f13;
    f32 temp_f1, temp_f1_2, temp_f2, temp_f3, temp_f3_2;
    f32 temp_f5, temp_f6, temp_f7, temp_f7_2, temp_f8, temp_f9;
    void *temp_2;
    void *temp_3;

    temp_f6 = *(f32 *)((u8 *)arg0 + 8);
    temp_3 = (u8 *)arg1 + 0xC;
    temp_f1 = *(f32 *)((u8 *)arg0 + 0xC);
    temp_2 = (u8 *)arg1 + 0x18;
    temp_f2 = *(f32 *)((u8 *)arg0 + 4);
    temp_f0 = 2.0f * temp_f6;
    temp_f5 = *(f32 *)((u8 *)arg0 + 0);
    temp_f3 = 2.0f * temp_f1;
    temp_f7 = 2.0f * temp_f2;
    temp_f12 = temp_f0 * temp_f6;
    temp_f13 = temp_f0 * temp_f5;
    temp_f11 = temp_f3 * temp_f5;
    temp_f1_2 = temp_f3 * temp_f1;
    temp_f0_2 = temp_f0 * temp_f2;
    temp_f8 = temp_f7 * temp_f2;
    temp_f9 = temp_f3 * temp_f2;
    temp_f7_2 = temp_f7 * temp_f5;
    temp_f3_2 = temp_f3 * temp_f6;

    *(f32 *)((u8 *)arg1 + 0xC) = (f32)(temp_f0_2 + temp_f11);
    *(f32 *)((u8 *)arg1 + 0) = (f32)(1.0f - (temp_f12 + temp_f1_2));
    *(f32 *)((u8 *)arg1 + 8) = (f32)(temp_f9 + temp_f13);
    *(f32 *)((u8 *)arg1 + 4) = (f32)(temp_f0_2 - temp_f11);
    *(f32 *)((u8 *)temp_3 + 4) = (f32)(1.0f - (temp_f8 + temp_f1_2));
    *(f32 *)((u8 *)temp_3 + 8) = (f32)(temp_f3_2 - temp_f7_2);
    *(f32 *)((u8 *)arg1 + 0x18) = (f32)(temp_f9 - temp_f13);
    *(f32 *)((u8 *)temp_2 + 4) = (f32)(temp_f3_2 + temp_f7_2);
    *(f32 *)((u8 *)temp_2 + 8) = (f32)(1.0f - (temp_f8 + temp_f12));
}

void func_00205C68(void *arg0, s32 arg1) {
    void *obj;
    void **vt;
    void (*fn)(void *, s32);
    s16 off;

    *(u32 *)arg0 = (u32)&D_004785B0;
    obj = *(void **)((u8 *)arg0 + 0x80);
    if (obj != NULL) {
        vt = *(void **)((u8 *)obj + 0x0);
        off = *(s16 *)((u8 *)vt + 8);
        fn = (void (*)(void *, s32))((u8 *)vt + 0xC);
        ((void (*)(void *, s32))fn)((u8 *)obj + off, 3);
    }
    func_0021DDD8((u8 *)arg0 + 4, 2);
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

void func_00205CE0(void *arg0, s16 *arg1) {
    s16 sp2c;
    void *temp_2;
    s32 *o = (s32 *)arg0;

    o[0x21] = o[0x21] + 1;
}

s32 func_00205D60(s32 *arg1) {
    s32 temp_3, temp_4;
    void *temp_2;

    temp_2 = func_002063F0((u8 *)arg1, 0, 0);
    temp_4 = *(s32 *)temp_2;
    temp_3 = ((*(s32 *)((u8 *)temp_2 + 4)) - temp_4) >> 1;
    if (temp_3 != 0) {
        *(u16 *)((u8 *)temp_4 + ((temp_3 - 1) * 2)) = *(s32 *)arg1;
        return 1;
    }
    *(s32 *)arg1 = -1;
    return 0;
}
