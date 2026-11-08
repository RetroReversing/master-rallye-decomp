void func_002C00B8(s32 *arg1, s32 arg2) {
    if (*arg1 != 0) {
        *arg1 = *arg1 + arg2;
    }
}

void func_002BFEF8(s32 *arg0, s32 arg1) {
    s32 *head;
    s32 *node;
    s32 base;
    s32 off;
    s32 end;
    s32 v0;
    s32 v1;
    s32 v2;
    s32 v3;
    head = arg0 + 5;
    node = head;
    base = *(s32 *)(head + 1);
    off = ((s32) (*(u8 *)(head + 3)) << 8) | (s32) (*(u8 *)(head + 2));
    end = base + (off * 16);
    while ((s32)(u32)node < end) {
        v0 = *node;
        if (v0 != 0) *node = v0 + arg1;
        v1 = *(node + 1);
        if (v1 != 0) *(node + 1) = v1 + arg1;
        v2 = *(node + 2);
        if (v2 != 0) *(node + 2) = v2 + arg1;
        v3 = *(node + 3);
        if (v3 != 0) *(node + 3) = v3 + arg1;
        node = (s32 *)((u8 *)node + 0x10);
    }
}

s32 func_002BFEB0(s32, s32);
s32 func_002BFF88(s32, s32);
u32 func_003FA9B8();
u32 func_003F9698(void *, u32, u32, s32);
s32 func_003FA580(s32, s32);

u32 func_002BFD98(s32 *arg0, u32 arg1) {
    u32 state;
    u32 end;
    u32 counter;
    u32 v;
    s32 *p;
    u8 b;
    state = arg1;
    end = (state >> 5) | 1;
    counter = state;
    if (state < end) {
        return state;
    }
    p = arg0;
    for (;;) {
        b = *p;
        p = (s32 *)((u8 *)p + 1);
        v = 0x5C;
        if ((b ^ 0x2F) != 0) {
            v = (s32)(u32)b;
        }
        v = v & 0xDF;
        counter = counter - end;
        state = state ^ ((state << 5) + (state >> 2) + v);
        if (counter < end) {
            break;
        }
    }
    return state;
}

s32 func_002BFE18(s32 *arg0) {
    s32 *p = arg0;
    s32 v = p[3];
    p[5] = v;
    return v;
}
