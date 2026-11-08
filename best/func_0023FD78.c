extern s32 func_002518D8(void *, void *, f32, f32, f32, f32, f32, f32, f32);
extern f32 D_00479B54;

typedef struct {
    f32 x,y,z;
} Vec3;

typedef struct {
    void **unk_00;
    s32 unk_04;
} UnkArg2;

void *func_0023FD78(Vec3 *p0, Vec3 *p1, UnkArg2 *p2) {
    f32 f20;
    void *ret = NULL;
    s32 i = 0;
    s32 cnt = ((s32)p2->unk_04 - (s32)p2->unk_00) >> 2;
    if (cnt <= 0) return NULL;
    f20 = D_00479B54;
    while (i < cnt) {
        void *cur = ((void**)p2->unk_00)[i];
        f32 *n = (f32 *)((u8*)cur + 8);
        f32 n0 = n[0], n1 = n[1], n2 = n[2], n3 = n[3];
        f32 d = -(n3 + n0*p0->x + n1*p0->y + n2*p0->z);
        d = d / (n0*p1->x + n1*p1->y + n2*p1->z);
        if (func_002518D8(cur, &f20, p0->x + p1->x*d, p0->x + p1->x*d, p0->y + p1->y*d, p0->z + p1->z*d, p1->x*d, p1->y*d, p1->z*d) != 0) {
            i = i + 1;
            continue;
        }
        n0 = n[0]; n1 = n[1]; n2 = n[2]; n3 = n[3];
        d = -(n3 + n0*p0->x + n1*p0->y + n2*p0->z);
        d = d / (n0*p1->x + n1*p1->y + n2*p1->z);
        if (d <= 0.0f) {
            f32 a = d;
            if (a < 0.0f) a = -a;
            if (a < f20) {
                f20 = a;
                ret = cur;
            }
        }
        i = i + 1;
    }
    return ret;
}
