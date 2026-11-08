// ===== func_001D2CD8 =====
extern void D_002AD530(s32);
extern s32 D_002AD5A8(s32);
extern void func_003FA8A4(s32, s32);
extern s32 func_003FA9B8(s32);

void func_001D2CD8(s32 *arg0, s32 arg1) {
    s32 temp;
    if (*arg0 != 0)
        D_002AD530(*arg0);
    *arg0 = 0;
    if (__builtin_expect(arg1 == 0, 1))
        return;
    temp = D_002AD5A8(func_003FA9B8(arg1) + 1);
    *arg0 = temp;
    func_003FA8A4(temp, arg1);
}

// ===== func_001D2D48 =====
extern s32 func_003FA9B8(s32);

void func_001D2D48(s32 *arg0, s32 arg1, s32 arg2) {
    s32 len, start, i;
    if (*arg0 == 0) return;
    len = func_003FA9B8(*arg0);
    arg2 = (len < arg2) ? len : arg2;
    start = (arg1 > -1) ? arg1 : 0;
    if (start < arg2) {
        for (i = start; i < arg2; i++) {
            u8 c = ((u8*)*arg0)[i];
            if ((u32)(c - 0x41) < 0x1A)
                ((u8*)*arg0)[i] = c + 0x20;
        }
    }
}

// ===== func_001D2E38 =====
extern s32 func_003FA9B8(s32);

void func_001D2E38(s32 *arg0, s32 arg1, s32 arg2) {
    s32 len, start, i;
    if (*arg0 == 0) return;
    len = func_003FA9B8(*arg0);
    arg2 = (len < arg2) ? len : arg2;
    start = (arg1 > -1) ? arg1 : 0;
    if (start < arg2) {
        for (i = start; i < arg2; i++) {
            u8 c = ((u8*)*arg0)[i];
            if ((u32)(c - 0x61) < 0x1A)
                ((u8*)*arg0)[i] = c - 0x20;
        }
    }
}

// ===== func_001D3920 =====
s32 func_001D3920(void *arg0) {
    s32 *v = *(s32**)((char*)arg0 + 4);
    return (v != arg0) ? *v : 0;
}
