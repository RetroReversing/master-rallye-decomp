extern void func_001F9ED0(void *, void *);

void func_001FA388(void *arg0, void **arg1, s32 arg2, s32 arg3) {
    u8 *base = (u8 *)(*arg1) + arg2 * 0x34;
    u8 *end = base + arg3 * 0x34;
    u8 *p = base;

    if (p != end) {
        u8 *a1 = p;
        do {
            func_001F9ED0(arg0, a1);
            p += 0x34;
            a1 = p;
        } while (p != end);
    }
}

s32 func_001FB8F0(s32 arg0, void **arg1, s32 arg2, s32 *arg3) {
    void **head = (void **)*arg1;
    void **node = (void **)*head;
    s32 idx = 0;

    if (node == head) goto notfound;
loop:
    if (((s32 *)node)[9] == arg2) goto found;
    if (((s32 *)node)[10] == arg2) goto found;
    if (((s32 *)node)[11] == arg2) goto found;
    node = (void **)node[0];
    idx++;
    if (node != (void **)*arg1) goto loop;
notfound:
    *arg3 = -1;
    return 0;
found:
    *arg3 = idx;
    return 1;
}

extern void func_001FBFE8(void *);

void func_001FBD18(void *arg0) {
    u8 *p = (u8 *)arg0;
    u8 *end = p + 0x50;

    if (p < end) {
        do {
            s32 flag;
            func_001FBFE8(p);
            flag = 1;
            if (!(0.0f < *(f32 *)(p + 0x24))) {
                flag = 0;
            }
            if (flag == 0) {
                func_001FBFE8(p + 0x28);
            }
            p += 0x50;
        } while (p < end);
    }
}

void *func_001F9790(void *arg0, s32 arg1) {
    volatile s32 pad; (void)pad;
    ((s32 *)arg0)[3] = -1;
    ((s32 *)arg0)[4] = arg1;
    ((s32 *)arg0)[0] = 0;
    ((s32 *)arg0)[1] = 0;
    ((s32 *)arg0)[2] = 0;
    return arg0;
}
