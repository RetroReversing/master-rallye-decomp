typedef struct {
    f32 x;
    f32 y;
} Vec2;

Vec2 *func_001562D0(Vec2 *arg0, s32 arg1, Vec2 *arg2) {
    Vec2 *p;

    p = arg0;
    if (arg1 != 0) {
        do {
            arg1--;
            if (p != NULL) {
                p->x = arg2->x;
                p->y = arg2->y;
            }
            p++;
        } while (arg1 != 0);
    }
    return p;
}

typedef struct {
    s32 a;
    s32 b;
    f32 c;
    f32 d;
    f32 e;
    u64 f;
    u64 g;
} __attribute__((packed, aligned(4))) S36;

S36 *func_001558D8(S36 *arg0, S36 *arg1, S36 *arg2) {
    S36 *src = arg0;
    S36 *dst = arg2;

    if (src != arg1) {
        do {
            if (dst != NULL) {
                *dst = *src;
            }
            src++;
            dst++;
        } while (src != arg1);
    }
    return dst;
}

u64 *func_00155470(u64 *arg0, s32 arg1, u64 *arg2) {
    while (arg1 != 0) {
        *arg0 = *arg2;
        arg1--;
        arg0++;
    }
    return arg0;
}

void func_00155438(u64 *arg0, u64 *arg1, u64 *arg2) {
    while (arg0 != arg1) {
        *arg0 = *arg2;
        arg0++;
    }
}
