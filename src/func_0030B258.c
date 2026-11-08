extern void func_002B2028(void *, void *);
extern s32 D_0040E658[];
extern void *D_0042D508;
extern u32 D_0040E618[];

s32 func_0030B940(void *arg0, s16 *arg1) {
    s32 idx = *arg1;
    s32 *base = *(s32 **)((u8 *)arg0 + 0x24);
    s32 *out = *(s32 **)((u8 *)arg0 + 0x48);
    return *(s32 *)((u8 *)out + (u32)base[idx] * 4);
}

void func_0030B968(void *arg0, s16 *arg1) {
    s16 idx = *(s16 *)((u8 *)(*(void **)((u8 *)arg0 + 0xC)) + *arg1 * 2);
    if (idx != -2) {
        void *arr = *(void **)((u8 *)arg0 + 0);
        void *elem = (u8 *)arr + idx * 16;
        s32 a = *(s32 *)((u8 *)elem + 4);
        s32 b = *(s32 *)((u8 *)elem + 8);
        *(s32 *)((u8 *)arr + a * 16 + 8) = b;
        *(s32 *)((u8 *)arr + b * 16 + 4) = a;
        *(s32 *)((u8 *)elem + 8) = 0;
        *(s32 *)((u8 *)arr + *(s32 *)((u8 *)arr + 4) * 16 + 8) = idx;
        *(s32 *)((u8 *)elem + 4) = *(s32 *)((u8 *)arr + 4);
        *(s32 *)((u8 *)arr + 4) = idx;
    }
}

void func_0030B258(s32 arg0, s32 arg1) {
    if (arg1 != 0xFFFF) return;
    if (arg0 != 0) {
        void *dst = &D_0042D508;
        void *v1;
        if (D_0040E658[3] != 0) {
            v1 = func_00151930(&D_0040E658);
        } else {
            D_0040E658[2]++;
            v1 = &D_0040E658[4];
        }
        *(void **)dst = v1;
        return;
    }
    {
        void *top = D_0042D508;
        void *chunk = (u8 *)top - 0x10;
        if (--*(s32 *)((u8 *)chunk + 0x8) != 0) return;
        if (*(s32 *)((u8 *)chunk + 0x4) + 0x10 != 0) {
            func_002B2028(chunk, top);
        } else {
            *(s32 *)((u8 *)chunk + 0x0) = (s32)D_0040E618[-1];
            D_0040E618[-1] = (u32)chunk;
        }
    }
}
