extern s32 D_002AD408(s32);
extern void *func_0024C090(s32, s32, s32);

void func_003B56F0(void *arg1, void *arg2) {
    s32 sp0, sp4;
    s32 temp_17, temp_16;
    void *t;
    void *r;

    t = *(void **)((char *)arg2 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + *(s16 *)((char *)t + 0x90), &sp0);
    temp_17 = *(s32 *)(*(void **)((char *)arg1 + 0x00) + (sp0 << 2));
    t = *(void **)((char *)arg2 + 0x08);
    ((void (*)(void *, s32 *))(*(void **)((char *)t + 0x94)))((char *)arg2 + *(s16 *)((char *)t + 0x90), &sp4);
    temp_16 = *(s32 *)(*(void **)((char *)arg1 + 0x00) + (sp4 << 2));
    r = func_0024C090(D_002AD408(0x48), temp_17, temp_16);
    *(s32 *)((char *)r + 0x44) = 1;
}
