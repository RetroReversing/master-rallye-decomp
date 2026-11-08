typedef struct Vec3f { float x, y, z; } Vec3f;

typedef struct S7CD58 {
    char pad0[0x144];
    Vec3f a;      /* 0x144 */
    char pad150[0x30];
    Vec3f b;      /* 0x174 */
    char pad180[0xC];
    Vec3f c;      /* 0x180 */
} S7CD58;

Vec3f *func_0027CD58(Vec3f *arg0, S7CD58 *arg1, Vec3f *arg2) {
    float dz, dy, dx;
    float ex, ey, ez;
    Vec3f *a = &arg1->a;
    Vec3f *c = &arg1->c;
    Vec3f *b = &arg1->b;
    Vec3f *ret = arg0;

    dz = arg2->z - a->z;
    dy = arg2->y - a->y;
    dx = arg2->x - arg1->a.x;

    ex = c->z * dx - c->x * dz;
    ez = c->x * dy - c->y * dx;
    ey = c->y * dz - c->z * dy;

    ret->x = b->x + ey;
    ret->z = b->z + ez;
    ret->y = b->y + ex;
    return ret;
}

typedef struct S7CCA8 {
    char pad0[0xA0];
    Vec3f a;      /* 0xA0 */
    char padAC[0x7C];
    Vec3f b;      /* 0x11C */
    char pad128[0xC];
    Vec3f c;      /* 0x128 */
} S7CCA8;

Vec3f *func_0027CCA8(Vec3f *arg0, S7CCA8 *arg1, Vec3f *arg2) {
    float dz, dy, dx;
    float ex, ey, ez;
    Vec3f *a = &arg1->a;
    Vec3f *c = &arg1->c;
    Vec3f *b = &arg1->b;
    Vec3f *ret = arg0;

    dz = arg2->z - a->z;
    dy = arg2->y - a->y;
    dx = arg2->x - arg1->a.x;

    ex = c->z * dx - c->x * dz;
    ez = c->x * dy - c->y * dx;
    ey = c->y * dz - c->z * dy;

    ret->x = b->x + ey;
    ret->z = b->z + ez;
    ret->y = b->y + ex;
    return ret;
}

extern void *func_00203358(void *arg0, void *arg1);

typedef struct { char b[0x24]; } B36;

void func_0027CBE0(void *arg0, void *arg1) {
    B36 sp;
    void *base = (char *)arg0 + 0x28;
    float f0 = *(float *)((char *)arg1 + 0);
    float f1 = *(float *)((char *)arg1 + 8);
    float f2 = *(float *)((char *)arg1 + 4);

    *(float *)((char *)arg0 + 0x28) = f0;
    *(float *)((char *)base + 0x10) = f2;
    *(float *)((char *)base + 0x20) = f1;
    *(int *)((char *)base + 0x04) = 0;
    *(int *)((char *)base + 0x08) = 0;
    *(int *)((char *)base + 0x0C) = 0;
    *(int *)((char *)base + 0x14) = 0;
    *(int *)((char *)base + 0x18) = 0;
    *(int *)((char *)base + 0x1C) = 0;
    func_00203358(&sp, base);
    *(B36 *)((char *)arg0 + 0x4C) = sp;
    *(int *)((char *)arg0 + 0x6C) = *(int *)((char *)&sp + 0x20);
}
