/* identical to func_001BD878 (matched), with its names changed by decompdecomp */
void func_001C2780(void *arg0) {
    s32 n = (*(s32 *)((char *)arg0 + 8) - *(s32 *)((char *)arg0 + 4)) >> 2;
    s32 i;
    for (i = 0; i < n; i++) {
        u32 base = *(u32 *)((char *)arg0 + 4);
        void *o = *(void **)(base + (i << 2));
        void *v = *(void **)((char *)o + 0xDC);
        ((void (*)(void *))*(void **)((char *)v + 0x2C))((char *)o + *(s16 *)((char *)v + 0x28));
    }
}

void func_001BD8F8(void *arg0) {
    s32 n = (*(s32 *)((char *)arg0 + 8) - *(s32 *)((char *)arg0 + 4)) >> 2;
    s32 i;
    for (i = 0; i < n; i++) {
        u32 base = *(u32 *)((char *)arg0 + 4);
        void *o = *(void **)(base + (i << 2));
        void *v = *(void **)((char *)o + 0xDC);
        ((void (*)(void *))*(void **)((char *)v + 0x1C))((char *)o + *(s16 *)((char *)v + 0x18));
    }
}
