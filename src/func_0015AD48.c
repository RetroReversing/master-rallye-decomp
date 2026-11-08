/* func_00151630 */
void func_00151630(void *src, void *end, void *dst) {
    void *s = src;
    void *d = dst;
    if (s == end) {
        return;
    }
    do {
        if (d != 0) {
            ((f32 *)d)[0] = ((f32 *)s)[0];
            ((f32 *)d)[1] = ((f32 *)s)[1];
            ((f32 *)d)[2] = ((f32 *)s)[2];
        }
        s = (void *)((u8 *)s + 0xC);
        d = (void *)((u8 *)d + 0xC);
    } while (s != end);
}

/* func_0015A620 */
extern void *D_0044DCD8;
extern void D_002AD390(void *);

void func_0015A620(void *arg0, int flags) {
    *(void **)((u8 *)arg0 + 8) = &D_0044DCD8;
    *(void **)((u8 *)arg0 + 0x24) = &D_0044DCD8;
    if (flags & 1) {
        D_002AD390(arg0);
    }
}

/* func_0015ACE0 */
void func_0015ACE0(f32 x, f32 minv, f32 maxv) {
    f32 v = x;
    if (v < minv) {
        v = minv;
    }
    if (maxv < v) {
        v = maxv;
    }
    /* result in f0 */
}

/* func_0015AD48 */
extern void *D_00444880;
extern void func_001D4040(void *, void *);
extern f32 func_001E3610(int, void *);
extern int func_001E4280(void);
extern void *func_002003C0(void);

void func_0015AD48(void) {
    void *buf[4];
    void *p2;
    int v;

    ((int *)func_002003C0())[6] = 0; /* +0x18 */
    p2 = func_002003C0();
    v = func_001E4280();
    func_001D4040(buf, &D_00444880);
    ((f32 *)p2)[9] = func_001E3610(v, buf); /* +0x24 */
    ((f32 *)func_002003C0())[0] = 0.9f;
}
