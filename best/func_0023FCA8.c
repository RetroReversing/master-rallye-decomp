typedef struct { void **unk18; s32 unk1C; } S_a;
s32 func_002509C8(void *);
s32 func_002407D8(S_a *arg0) {
    s32 count; s32 i; void **base;
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count <= 0) return 1;
    i = 0; base = arg0->unk18;
    for (;;) {
        if (func_002509C8(base[i]) == 0) return 0;
        i++;
        if (i < count) { base = arg0->unk18; continue; }
        break;
    }
    return 1;
}

typedef struct { void **unkC; s32 unk10; void **unk18; s32 unk1C; } S_b;
void func_0024C620(void *);
void func_00250440(void *);
void func_00241160(S_b *arg0) {
    s32 count; s32 i; void **base;
    count = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
    if (count > 0) {
        i = 0; base = arg0->unkC;
        do {
            func_0024C620(base[i++]);
        } while (i < count);
    }
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count > 0) {
        i = 0; base = arg0->unk18;
        do {
            func_00250440(base[i++]);
        } while (i < count);
    }
}

typedef struct { f32 x,y,z; } Vec3;
void func_0023F7D8(void);
void func_0023FD78(void *, Vec3 *, Vec3 *);
void func_0023FD28(void *arg0, Vec3 *arg1, Vec3 *arg2) {
    Vec3 v;
    func_0023F7D8();
    v.x = arg1->x; v.y = arg1->y; v.z = arg1->z;
    func_0023FD78(arg0, &v, arg2);
}

void func_0023FCA8(void *arg0, Vec3 *arg1, Vec3 *arg2) {
    Vec3 v1, v2;
    func_0023F7D8();
    v1.x = arg1->x; v1.y = arg1->y; v1.z = arg1->z;
    v2.x = arg2->x; v2.y = arg2->y; v2.z = arg2->z;
    func_0023FD28(arg0, &v1, &v2);
}
