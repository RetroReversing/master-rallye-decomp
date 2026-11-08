void func_001B2370(void *arg0, void *arg1) {
    void *obj = *(void **)((u8 *)arg0 + 0xC8);
    if (obj != NULL) {
        void *vtable = *(void **)obj;
        void (*fn)(void *, s32, void *) = *(void (**)(void *, s32, void *))((u8 *)vtable + 0xC);
        s16 offset = *(s16 *)((u8 *)vtable + 0x8);
        fn((u8 *)obj + offset, 3, obj);
    }
    *(void **)((u8 *)arg0 + 0xC8) = arg1;
}

extern f32 func_001D5E70(void *, f32, f32);

f32 func_001B2D60(void *arg0) {
    f32 f0 = func_001D5E70((u8 *)arg0 + 0xD8, -1.0f, 1.0f);
    f32 v84 = *(f32 *)((u8 *)arg0 + 0x84);
    f32 v20 = *(f32 *)((u8 *)arg0 + 0x20);
    f32 v88 = *(f32 *)((u8 *)arg0 + 0x88);
    f32 vBC = *(f32 *)((u8 *)arg0 + 0xBC);
    f32 result = vBC + f0 * v88 + v84 * v20;
    result = result / (v84 + 1.0f);
    return result;
}

void func_001B2DD0(void *arg0, s32 arg1, f32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x2C) = arg1;
    *(f32 *)((u8 *)arg0 + 0x28) = arg2;
}

void func_001B2DE0(void *arg0, s32 arg1, f32 arg2) {
    *(s32 *)((u8 *)arg0 + 0x90) = arg1;
    *(f32 *)((u8 *)arg0 + 0x8C) = arg2;
}
