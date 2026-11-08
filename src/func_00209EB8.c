extern s32 D_00478490; /* vtable/data */
extern void func_00207230(void *);

/* func_0016D178 - best attempt from notes (scheduling artifact, no pure C fix under project compiler) */
void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

/* func_00208B40 - constructor, sets vtable and zeros 4 vector-like subobjects */
void *func_00208B40(void *arg0) {
    s32 *p = (s32 *)arg0;
    func_00207230(arg0);
    p[10] = 0;              /* 0x28 */
    p[9] = (s32)&D_00478490; /* 0x24 */
    p[12] = 0;              /* 0x30 = (base 0x28)+8 */
    p[11] = 0;              /* 0x2C = (base 0x28)+4 */
    p[13] = 0;              /* 0x34 */
    p[15] = 0;              /* 0x3C */
    p[14] = 0;              /* 0x38 */
    p[16] = 0;              /* 0x40 */
    p[18] = 0;              /* 0x48 */
    p[17] = 0;              /* 0x44 */
    p[19] = 0;              /* 0x4C */
    p[21] = 0;              /* 0x54 */
    p[20] = 0;              /* 0x50 */
    return arg0;
}

/* func_00209788 - interpolate between two points */
typedef struct Vec3f { float x, y, z; } Vec3f;

void *func_00209788(Vec3f *out, void *unused, Vec3f *a, Vec3f *b, Vec3f *c, Vec3f *d) {
    float t;
    float sp0, sp8, sp4;
    (void)unused;
    if (c->x == d->x) {
        sp0 = c->x;
        t = (c->x - a->x) / (b->x - a->x);
        sp8 = a->z + (b->z - a->z) * t;
    } else {
        sp8 = c->z;
        t = (c->z - a->z) / (b->z - a->z);
        sp0 = a->x + (b->x - a->x) * t;
    }
    out->z = sp8;
    out->x = sp0;
    out->y = a->y + (b->y - a->y) * t;
    sp4 = out->y;
    return out;
}

/* func_00209EB8 - component-wise min/max of 2 float pairs */
typedef struct Vec2f { float x, y; } Vec2f;

void func_00209EB8(Vec2f *a, Vec2f *b, Vec2f *minOut, Vec2f *maxOut) {
    float ax = a->x, bx = b->x;
    float ay, by;
    if (ax < bx) {
        minOut->x = ax;
        maxOut->x = b->x;
    } else {
        minOut->x = bx;
        maxOut->x = a->x;
    }
    ay = a->y; by = b->y;
    if (ay < by) {
        minOut->y = ay;
        maxOut->y = b->y;
    } else {
        minOut->y = by;
        maxOut->y = a->y;
    }
}
