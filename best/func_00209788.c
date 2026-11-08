extern unsigned char D_00478490[];
extern void func_00207230(void *);

void *func_00208B40(void *arg0) {
    int *p = (int *)arg0;
    int *b1, *b2, *b3, *b4;
    void *ret;
    func_00207230(arg0);
    p[10] = 0;
    b1 = p + 10;
    p[9] = (int)D_00478490;
    b2 = p + 13;
    b1[2] = 0;
    b3 = p + 16;
    b1[1] = 0;
    b4 = p + 19;
    p[13] = 0;
    ret = arg0;
    b2[2] = 0;
    b2[1] = 0;
    p[16] = 0;
    b3[2] = 0;
    b3[1] = 0;
    p[19] = 0;
    b4[2] = 0;
    b4[1] = 0;
    return ret;
}

typedef struct Vec3f { float x, y, z; } Vec3f;
Vec3f *func_00209788(Vec3f *out, void *unused, Vec3f *a, Vec3f *b, Vec3f *c, Vec3f *d) {
    float sp[4];
    float t;
    (void)unused;
    if (c->x == d->x) {
        float ax = a->x;
        sp[0] = c->x;
        t = (c->x - ax) / (b->x - ax);
        sp[2] = a->z + (b->z - a->z) * t;
    } else {
        float az = a->z;
        sp[2] = c->z;
        t = (c->z - az) / (b->z - az);
        sp[0] = a->x + (b->x - a->x) * t;
    }
    out->z = sp[2];
    out->x = sp[0];
    out->y = a->y + (b->y - a->y) * t;
    sp[1] = out->y;
    return out;
}
