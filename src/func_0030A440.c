/* func_003D5858 */
void func_003D5858(void *unused, void (*arg1)(void)) {
    (void)unused;
    arg1();
}

/* func_0030A440 */
typedef struct { s32 map; s32 pad[8]; s32 refs; } Pool0;
extern Pool0 D_004262D0;
typedef struct { s32 a; s32 count; } RC0;
s32 *func_0030A440(s32 *p, s32 n, s32 *v) {
    while (n) {
        if (p) {
            s32 id;
            id = *v;
            *p = id;
            if (id >= 0) {
                s32 off = id * 4;
                RC0 *r = (RC0 *)(D_004262D0.refs + (*(s32 *)(D_004262D0.map + off) * 8));
                r->count++;
            }
        }
        n--;
        p++;
    }
    return p;
}

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
    vt->fn3C((void *)((char *)s + vt->off38), s);
    func_00307060(arg0);
    func_0021EBE8(func_0021F4B0());
    func_002FA3F0(func_002FD7A0(arg0));
}

/* func_002FC138 */
typedef struct { unsigned long long x; } __attribute__((packed)) U64Packed;
U64Packed *func_002FC138(U64Packed *p, unsigned int n, const U64Packed *v) {
    for (; n; n--, p++) {
        if (p) {
            *p = *v;
        }
    }
    return p;
}
