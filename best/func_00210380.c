void func_0016D178(void *arg0, float *arg1) {
    *arg1 = *(float *)((unsigned char *)arg0 + 0x30) * 2.5f;
}

typedef struct {
    f32 a, b, c, d;
} Vec4_10340;

void func_00210340(Vec4_10340 *arg0, Vec4_10340 *arg1, Vec4_10340 *arg2) {
    if (arg0 != arg1) {
        f32 f0 = arg2->a;
        do {
            arg0->a = f0;
            arg0->b = arg2->b;
            arg0->c = arg2->c;
            arg0->d = arg2->d;
            arg0++;
            if (arg0 == arg1) break;
            f0 = arg2->a;
        } while (1);
    }
}

Vec4_10340 *func_00210380(Vec4_10340 *arg0, s32 arg1, Vec4_10340 *arg2) {
    Vec4_10340 *p = arg0;
    if (arg1 != 0) {
        do {
            if (p != 0) {
                arg1--;
                p->a = arg2->a;
                p->b = arg2->b;
                p->c = arg2->c;
                p->d = arg2->d;
            } else {
                arg1--;
            }
            p++;
        } while (arg1 != 0);
    }
    return p;
}

typedef struct VtAdj106B0 {
    s16 adjust;
    s16 pad;
    void (*fn)(void *, int);
} VtAdj106B0;

extern void D_002AD390(void *);

void func_002106B0(void **arg0, int arg1) {
    void *p = *arg0;
    if (p != NULL) {
        *arg0 = NULL;
        {
            int ref = *(int *)p - 1;
            *(int *)p = ref;
            if (ref == 0) {
                char *base = *(char **)((char *)p + 4);
                VtAdj106B0 *e = (VtAdj106B0 *)(base + 8);
                e->fn((char *)p + e->adjust, 3);
            }
        }
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}
