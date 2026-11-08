/* identical to func_001574E8 (matched), with its names changed by decompdecomp */
void func_003BF078(s32 *arg0, s32 *arg1, s32 *arg2) {
    while (arg0 != arg1) {
        *arg0 = *arg2;
        arg0++;
    }
}

void func_00156C38(void *arg0, void *arg1);

void func_00156F28(void *arg0, void *arg1, void *arg2) {
    while (arg0 != arg1) {
        func_00156C38(arg0, arg2);
        arg0 = (char *)arg0 + 0xC;
    }
}

typedef struct {
    f32 x;
    f32 y;
} Vec2;

void func_001562D0(Vec2 *arg0, s32 arg1, Vec2 *arg2) {
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
}

void func_00156298(Vec2 *arg0, Vec2 *arg1, Vec2 *arg2) {
    while (arg0 != arg1) {
        arg0->x = arg2->x;
        arg0->y = arg2->y;
        arg0++;
    }
}
