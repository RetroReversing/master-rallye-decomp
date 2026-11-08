/* identical to func_001F0378 (matched), with its names changed by decompdecomp */
typedef s32 (*cb_t)(void *, void *, s32);

void func_0016D178(void *arg0, f32 *arg1) {
    *arg1 = *(f32 *)((u8 *)arg0 + 0x30) * 2.5f;
}

void func_001F03D8(void *arg0, void *arg1) {
    void *v = *(void **)((char *)arg0 + 8);
    s16 off = *(s16 *)((char *)v + 0x70);
    ((cb_t)*(void **)((char *)v + 0x74))((char *)arg0 + off, arg1, 0xC);
}

void func_001F0408(void *arg0, void *arg1) {
    void *v = *(void **)((char *)arg0 + 8);
    s16 off = *(s16 *)((char *)v + 0x50);
    ((cb_t)*(void **)((char *)v + 0x54))((char *)arg0 + off, arg1, 0x10);
}

void func_001F0438(void *arg0, void *arg1) {
    void *v = *(void **)((char *)arg0 + 8);
    s16 off = *(s16 *)((char *)v + 0x70);
    ((cb_t)*(void **)((char *)v + 0x74))((char *)arg0 + off, arg1, 0x10);
}
