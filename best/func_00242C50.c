typedef struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
} Vec3;

extern f32 D_00426508[4];
extern void func_002433F8(void *a, void *b);
extern int func_00237558(void *a, void *b);

int func_001D3920(void *arg0) {
    int **p = (int **)arg0;
    int *v = p[1];
    int r = 0;
    if (v != (int *)arg0) {
        r = *v;
    }
    return r;
}

void func_00242C50(void *a0, void *a1, Vec3 *a2) {
    Vec3 tmp;
    tmp.x = a2->x;
    tmp.y = a2->y;
    tmp.z = a2->z;
    func_00242C88(a0, a1, &tmp);
}

int func_00242C88(void *a0, void *a1, void *a2) {
    if (a1 != 0) {
        void **obj = (void **)a1;
        void *vtable = obj[0];
        return ((int (*)(void *, void *, void *))((int *)vtable)[7])(
            (char *)obj + ((s16 *)vtable)[12],
            a2,
            a1);
    }
    {
        void **p = (void **)a0;
        if (p[6] != 0) {
            if (p[7] != 0) {
                return func_00237558(a2, a1);
            }
        }
    }
    return 0;
}

void func_00243338(void *a0, Vec3 *a1, Vec3 *a2, f32 *a3, int *a4) {
    Vec3 sp0;
    f32 spC;
    int sp10;
    Vec3 sp20;

    sp0.x = D_00426508[0];
    sp0.y = D_00426508[1];
    sp10 = -1;
    sp20.x = a1->x;
    sp20.y = a1->y;
    sp0.z = D_00426508[2];
    sp20.z = a1->z;
    spC = 0.0f;
    func_002433F8(&sp20, &sp0);
    a2->z = sp0.z;
    a2->x = sp0.x;
    a2->y = sp0.y;
    *a3 = spC;
    *a4 = sp10;
    sp20.x = sp0.x;
    sp20.y = sp0.y;
    sp20.z = sp0.z;
}
