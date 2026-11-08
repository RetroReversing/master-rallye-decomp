extern void func_002585C0(void *);
/* func_003B57A0 */
s32 func_003B57A0(void *arg1, void *arg2, void *arg3) {
    s32 sp0;
    void *t = *(void **)((char *)arg3 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg3 + *(s16 *)((char *)t + 0x90), &sp0);
    *(s32 *)((char *)arg2 + 0x18) = *(s32 *)(*(void **)((char *)arg1 + 0x18) + (sp0 << 2));
    {
        s32 sp4;
        void *t2 = *(void **)((char *)arg3 + 0x08);
        ((void (*)(void *, s32 *))(*(void **)((char *)t2 + 0x94)))((char *)arg3 + *(s16 *)((char *)t2 + 0x90), &sp4);
        *(s32 *)((char *)arg2 + 0x1C) = *(s32 *)(*(void **)((char *)arg1 + 0x18) + (sp4 << 2));
    }
    return 0;
}

/* func_003B56F0 */
extern s32 D_002AD408(s32);
extern void *func_0024C090(s32, s32, s32);

void func_003B56F0(void *arg1, void *arg2) {
    s32 sp0, sp4;
    s32 temp_17, temp_16;
    void *t = *(void **)((char *)arg2 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + *(s16 *)((char *)t + 0x90), &sp0);
    t = *(void **)((char *)arg2 + 0x08);
    temp_17 = *(s32 *)(*(void **)((char *)arg1 + 0x00) + (sp0 << 2));
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + *(s16 *)((char *)t + 0x90), &sp4);
    temp_16 = *(s32 *)(*(void **)((char *)arg1 + 0x00) + (sp4 << 2));
    func_0024C090(D_002AD408(0x48), temp_17, temp_16);
    /* store 1 to +0x44 of result? need capture */
}
