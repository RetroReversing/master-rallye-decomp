// ===== func_001D2E38: uppercase range [start,end) =====
extern s32 func_003FA9B8(s32);

void func_001D2E38(s32 *arg0, s32 arg1, s32 arg2) {
    s32 len;
    s32 end;
    s32 start;
    s32 i;
    if (*arg0 == 0) return;
    len = func_003FA9B8(*arg0);
    end = arg2;
    if (len < end) end = len;
    start = 0;
    if (arg1 > -1) start = arg1;
    if (start < end) {
        for (i = start; i < end; i++) {
            u8 c = ((u8*)*arg0)[i];
            if ((u32)(c - 0x61) < 0x1A)
                ((u8*)*arg0)[i] = c - 0x20;
        }
    }
}

// ===== func_001D2D48: lowercase range [start,end) =====
extern s32 func_003FA9B8(s32);

void func_001D2D48(s32 *arg0, s32 arg1, s32 arg2) {
    s32 len;
    s32 end;
    s32 start;
    s32 i;
    if (*arg0 == 0) return;
    len = func_003FA9B8(*arg0);
    end = arg2;
    if (len < end) end = len;
    start = 0;
    if (arg1 > -1) start = arg1;
    if (start < end) {
        for (i = start; i < end; i++) {
            u8 c = ((u8*)*arg0)[i];
            if ((u32)(c - 0x41) < 0x1A)
                ((u8*)*arg0)[i] = c + 0x20;
        }
    }
}

// ===== func_001D2CD8 =====
extern void D_002AD530(s32);
extern s32 D_002AD5A8(s32);
extern void func_003FA8A4(s32, s32);
extern s32 func_003FA9B8(s32);

void func_001D2CD8(s32 *arg0, s32 arg1) {
    s32 temp_4;
    s32 temp_2;
    temp_4 = *arg0;
    if (temp_4 != 0) {
        D_002AD530(temp_4);
    }
    *arg0 = 0;
    if (arg1 == 0) return;
    temp_2 = D_002AD5A8(func_003FA9B8(arg1) + 1);
    *arg0 = temp_2;
    func_003FA8A4(temp_2, arg1);
}
