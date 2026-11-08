s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char*)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0)
        ret = *v;
    return ret;
}

void func_001D6AD8(void ***arg0) {
    void **slot = *arg0;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, void **))((s32 *)obj)[0x21])((char *)slot + ((s16 *)obj)[0x40], slot);
    }
}

void func_001D6B10(void ***arg0, void **arg1) {
    void **slot = *arg0;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32, void **))((s32 *)obj)[3])((char *)slot + ((s16 *)obj)[4], 3, slot);
    }
    *arg0 = arg1;
}

void func_001D6B60(void *arg0, void **arg1) {
    void **slot = *(void ***)((char*)arg0 + 4);
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32, void **))((s32 *)obj)[3])((char *)slot + ((s16 *)obj)[4], 3, slot);
    }
    *(void ***)((char*)arg0 + 4) = arg1;
}
