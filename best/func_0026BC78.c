extern void func_0026C550(void);
extern void func_00152720(void *);

typedef struct S1 {
    u8 pad[4];
    s32 field4;
} S1;

void *func_0026C520(S1 *arg0) {
    arg0->field4 = 0;
    func_0026C550();
    return arg0;
}

extern void func_0026CF20(s32 *, s32, s32, s32, s32);

void func_0026D118(s32 *arg0, s32 *arg1, s32 arg2) {
    s32 *p = arg1;
    s32 *base = arg0;
    if (((s32)(p - base) >> 2) < 2) return;
    {
        s32 left = p - base;
        s32 tmp = *base;
        s32 val;
        do {
            p = p - 1;
            val = *p;
            left -= 4;
            *p = tmp;
            func_0026CF20(base, 0, left >> 2, val, arg2);
            p = p - 1;
            arg1 = arg1 - 1;
        } while (((s32)(arg1 - base) >> 2) >= 2);
    }
}

typedef struct S2 {
    u8 pad0[0xC];
    s32 *fieldC;
    s32 *field10;
} S2;

s32 func_0026BFF0(S2 *arg0, s32 arg1) {
    s32 *a = arg0->fieldC;
    s32 *b = arg0->field10;
    s32 cnt = (b - a) >> 2;
    if (cnt > 0) {
        s32 i = 0;
        while (i < cnt) {
            if (a[i] == arg1) return 0;
            i++;
        }
    }
    {
        s32 *p = arg0->fieldC;
        s32 *q = arg0->field10;
        if (p != q) {
            if (*p != 0) {
                *p = arg1;
            }
            arg0->fieldC = p + 1;
        } else {
            func_00152720(arg0);
        }
    }
    return 1;
}

typedef struct Pt {
    f32 x, y;
} Pt;

typedef struct List3 {
    Pt *start;
    Pt *end;
} List3;

s32 func_0026BC78(List3 *arg0, Pt *arg1) {
    s32 count = (s32)((arg0->end - arg0->start) * 0xB6DB6DB7) >> 2;
    if (count == 0) return 1;
    s32 i = count - 1;
    Pt *p = arg0->start;
    s32 j;
    for (j = 1; j < count; j++) {
        Pt *q = p + i;
        f32 dx2 = p->x - arg1->x;
        f32 dy2 = p->y - arg1->y;
        f32 dx3 = q->x - arg1->x;
        f32 dy3 = q->y - arg1->y;
        f32 dx1 = q->x - p->x;
        f32 dy1 = q->y - p->y;
        if ((dx2 * dy1) < (dx3 * dy2)) {
            return 0;
        }
        i--;
        p = p + 1;
    }
    return 1;
}
