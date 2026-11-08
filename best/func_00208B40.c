extern unsigned char D_00478490[];
extern void func_00207230(void *);

void *func_00208B40(void *arg0) {
    int *p = (int *)arg0;
    int *b1, *b2, *b3, *b4;
    func_00207230(arg0);
    p[10] = 0;                    /* 0x28 */
    b1 = p + 10;                  /* $v0 = s0+0x28 */
    p[9] = (int)D_00478490;       /* 0x24 */
    b2 = p + 13;                  /* $a0 = s0+0x34 */
    b1[2] = 0;                    /* 8($v0) */
    b3 = p + 16;                  /* $v1 = s0+0x40 */
    b1[1] = 0;                    /* 4($v0) */
    b4 = p + 19;                  /* $a1 = s0+0x4c */
    p[13] = 0;                    /* 0x34 */
    b2[1] = 0;                    /* 4($a0) -- try swapping order? target has 8 then 4 */
    b2[2] = 0;                    /* 8($a0) */
    p[16] = 0;                    /* 0x40 */
    b3[1] = 0;
    b3[2] = 0;
    p[19] = 0;
    b4[1] = 0;
    b4[2] = 0;
    return arg0;
}

typedef struct Vec3f { float x, y, z; } Vec3f;
Vec3f *func_00209788(Vec3f *out, void *unused, Vec3f *a, Vec3f *b, Vec3f *c, Vec3f *d) {
    float t;
    (void)unused;
    if (c->x == d->x) {
        float cx = c->x;
        float ax = a->x;
        t = (cx - ax) / (b->x - ax);
        out->x = cx;
        out->z = a->z + (b->z - a->z) * t;
    } else {
        float cz = c->z;
        float az = a->z;
        t = (cz - az) / (b->z - az);
        out->z = cz;
        out->x = a->x + (b->x - a->x) * t;
    }
    out->y = a->y + (b->y - a->y) * t;
    return out;
}
