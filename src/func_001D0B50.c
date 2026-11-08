extern void func_001D6AD8(void);

s32 func_001D3920(void *arg0) {
    s32 *v = *(s32 **)((char*)arg0 + 4);
    s32 ret = 0;
    if (v != (s32 *)arg0 && v != (s32 *)arg0)
        ret = *v;
    return ret;
}

void func_001D0B50(s32 *arg0, s32 arg1, s32 arg2) {
    s32 *ptr = arg0 + arg1;
    ptr[0x21] = arg2;
}

s32 func_001D0B40(s32 *arg0, s32 arg1) {
    s32 *ptr = arg0 + arg1;
    return ptr[0x21];
}

void func_001D6A68(void *arg0) {
    void **slot;
    func_001D6AD8();
    slot = *(void ***)arg0;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32, void **))((s32 *)obj)[3])((char*)obj + ((s16 *)obj)[4], 3, slot);
    }
    slot = *(void ***)((char*)arg0 + 4);
    *(void ***)arg0 = NULL;
    if (slot != NULL) {
        void *obj = *slot;
        ((void (*)(void *, s32, void **))((s32 *)obj)[3])((char*)obj + ((s16 *)obj)[4], 3, slot);
    }
    *(void ***)((char*)arg0 + 4) = NULL;
}
