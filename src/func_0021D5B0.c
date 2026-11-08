extern void func_00217220(void *, void *);
extern void func_00217598(void *, void *, int);
extern void *func_002B1FC0(int);
extern void *func_003D2910(int);

/* func_001D3920 - known bnel idiom, try to get close */
s32 func_001D3920(void *arg0) {
    void **p = (void **)((u8 *)arg0 + 4);
    void *v = *p;
    s32 r = 0;
    if (v != arg0 && v != arg0) {
        r = *(s32 *)v;
    }
    return r;
}

/* func_002176B0 */
typedef struct { char d[20]; } E176;
void func_002176B0(E176 *p, E176 *end) {
    if (end - p > 16) {
        E176 *q = p + 64;
        func_00217220(p, q);
        func_00217598(q, end, 0);
    } else {
        func_00217220(p, end);
    }
}

/* func_0021D110 */
void *func_0021D110(void *arg0) {
    void *a;
    void *b;
    *(s32 *)arg0 = 0;
    a = func_002B1FC0(0xC);
    if (a == 0) a = func_003D2910(0xC);
    *(void **)((u8 *)arg0 + 4) = a;
    *(void **)a = a;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 4) + 4) = *(void **)((u8 *)arg0 + 4);
    b = func_002B1FC0(0xC);
    if (b == 0) b = func_003D2910(0xC);
    *(void **)((u8 *)arg0 + 8) = b;
    *(void **)b = b;
    *(void **)((u8 *)*(void **)((u8 *)arg0 + 8) + 4) = *(void **)((u8 *)arg0 + 8);
    return arg0;
}

/* func_0021D5B0 */
void func_0021D5B0(void *arg0, void *arg1, f32 fparg0) {
    f32 x = *(f32 *)arg1;
    f32 sq = fparg0 * fparg0;
    *(f32 *)arg0 = x;
    {
        f32 y = *(f32 *)((u8 *)arg1 + 4);
        *(f32 *)((u8 *)arg0 + 4) = y;
    }
    {
        f32 z = *(f32 *)((u8 *)arg1 + 8);
        *(f32 *)((u8 *)arg0 + 0x10) = sq;
        *(f32 *)((u8 *)arg0 + 8) = z;
        *(f32 *)((u8 *)arg0 + 0xC) = fparg0;
    }
}
