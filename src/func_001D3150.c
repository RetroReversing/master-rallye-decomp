typedef struct { int state; } Alloc3150;
static inline void init3150(s32 *base, volatile Alloc3150 *a) {
    s32 *v1;
    (void)a;
    base[0] = 0;
    v1 = base + 1;
    v1[0] = 0;
    v1[1] = 0;
    v1[2] = 0;
}
void *func_001D3150(void *arg0) {
    volatile Alloc3150 a;
    init3150((s32 *)arg0, &a);
    return arg0;
}
