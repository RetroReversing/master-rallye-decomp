/* func_00307000 */
extern void func_00307060(void *);
extern s32 func_0021F4B0(void);
extern void func_0021EBE8(s32);
extern s32 func_002FD7A0(void *);
extern void func_002FA3F0(s32);

typedef struct Vtbl148 {
    char pad[0x38];
    s16 off38;
    char pad2[2];
    void (*fn3C)(void *, void *);
} Vtbl148;

typedef struct Obj24 {
    char pad[0x148];
    Vtbl148 *vt148;
} Obj24;

typedef struct Obj0 {
    char pad[0x24];
    Obj24 *obj24;
} Obj0;

void func_00307000(Obj0 *arg0) {
    Obj24 *s = arg0->obj24;
    Vtbl148 *vt = s->vt148;
    void *p = (void *)((char *)s + (s32)vt->off38);
    vt->fn3C(p, (void *)s);
    func_00307060(arg0);
    func_0021EBE8(func_0021F4B0());
    func_002FA3F0(func_002FD7A0(arg0));
}

/* func_002FC138 */
typedef struct { unsigned char b[16]; } __attribute__((packed, aligned(1))) B16;
B16 *func_002FC138(B16 *p, unsigned int n, const B16 *v) {
    for (; n; n--, p++) {
        if (p) {
            *p = *v;
        }
    }
    return p;
}
