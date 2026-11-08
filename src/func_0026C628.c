/* identical to func_00151568 (matched), with its names changed by decompdecomp */
s32 func_0026C628(s8 *s1, s8 *e1, s8 *s2, s8 *e2) {
    s8 c1, c2;
    while (s1 != e1 && s2 != e2) {
        c1 = *s1;
        c2 = *s2;
        if (c1 < c2) return -1;
        if (c2 < c1) return 1;
        s1++;
        s2++;
    }
    if (s2 == e2)
        return s1 != e1;
    return -1;
}

typedef struct { f32 x, y, z, w; } V4_1525;
typedef struct { V4_1525 v[4]; } M4_1525;

void func_001525D8(M4_1525 *a, M4_1525 *b, f32 s) {
    b->v[0].x = a->v[0].x * s;
    b->v[0].y = a->v[0].y * s;
    b->v[0].z = a->v[0].z * s;
    b->v[1].x = a->v[1].x * s;
    b->v[1].y = a->v[1].y * s;
    b->v[1].z = a->v[1].z * s;
    b->v[2].x = a->v[2].x * s;
    b->v[2].y = a->v[2].y * s;
    b->v[2].z = a->v[2].z * s;
    b->v[3].x = a->v[3].x * s;
    b->v[3].y = a->v[3].y * s;
    b->v[3].z = a->v[3].z * s;
}

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
} S_152688;

extern void func_003F93CC(s32, s32, s32);

void func_00152688(S_152688 *p) {
    s32 s, e;
    s = p->fC;
    e = p->f10;
    func_003F93CC(s, e, 0);
    p->f10 = p->f10 - (e - s);
    s = p->f0;
    e = p->f4;
    func_003F93CC(s, e, 0);
    p->f1C = 1;
    p->f4 = p->f4 - (e - s);
}

extern void *func_001D5F70(void);
extern void *func_001D5EB0(void *, s32, s32);
extern void func_003F96E8(void *);

void func_001528E0(void) {
    func_003F96E8(func_001D5EB0(func_001D5F70(), 0, 0xFFFF));
}
