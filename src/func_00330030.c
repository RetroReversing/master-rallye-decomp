extern void *func_002DDA20(void);
extern void *func_00305038(void *, void *);
extern void func_00342D00(void *, s32, void *, void *);

void *func_0033F588(void *src, void *end, void *dst) {
    char *s = (char *)src;
    char *d = (char *)dst;
    if (s != end) {
        do {
            if (d != NULL) {
                ((f32 *)d)[0] = ((const f32 *)s)[0];
                ((f32 *)d)[1] = ((const f32 *)s)[1];
                ((f32 *)d)[2] = ((const f32 *)s)[2];
                ((f32 *)d)[3] = ((const f32 *)s)[3];
                ((f32 *)d)[4] = ((const f32 *)s)[4];
                ((f32 *)d)[5] = ((const f32 *)s)[5];
                ((f32 *)d)[6] = ((const f32 *)s)[6];
                ((f32 *)d)[7] = ((const f32 *)s)[7];
                ((f32 *)d)[8] = ((const f32 *)s)[8];
                ((f32 *)d)[9] = ((const f32 *)s)[9];
                ((f32 *)d)[10] = ((const f32 *)s)[10];
                ((s32 *)d)[11] = ((const s32 *)s)[11];
            }
            s += 0x30;
            d += 0x30;
        } while (s != end);
    }
    return dst;
}

s32 func_00330030(void *thiz, void *arg1) {
    (void)thiz;
    void *ptr = *(void **)((char *)arg1 + 8);
    s32 *flag = (s32 *)((char *)ptr - 0x28);
    if (*flag != 0) {
        void *ret = func_00305038(*(void **)func_002DDA20(), (char *)ptr - 0x28);
        if (ret != NULL) {
            return *(s32 *)((char *)ret + 0x28);
        }
    }
    return 0;
}

void func_0032FF90(void *arg0, void *arg1) {
    char *a0 = (char *)arg0;
    char *a1 = (char *)arg1;
    *(s32 *)(a0 + 0x430) = *(s32 *)a1;
    *(s32 *)(a0 + 0x434) = *(s32 *)(a1 + 4);
    *(f32 *)(a0 + 0x440) = *(f32 *)(a1 + 0x10);
    *(f32 *)(a0 + 0x444) = *(f32 *)(a1 + 0x14);
    *(f32 *)(a0 + 0x448) = *(f32 *)(a1 + 0x18);
    *(f32 *)(a0 + 0x44C) = *(f32 *)(a1 + 0x1C);
    *(f32 *)(a0 + 0x450) = *(f32 *)(a1 + 0x20);
    *(f32 *)(a0 + 0x454) = *(f32 *)(a1 + 0x24);
    *(f32 *)(a0 + 0x458) = *(f32 *)(a1 + 0x28);
    *(f32 *)(a0 + 0x45C) = *(f32 *)(a1 + 0x2C);
    *(f32 *)(a0 + 0x454) = 0.25f;
    *(f32 *)(a0 + 0x458) = 512.0f;
    func_00342D00((void *)(a0 + 0x30), *(s32 *)(a0 + 0x434), a0 + 0x440, a1 + 0x10);
}
