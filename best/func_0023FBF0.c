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

typedef struct { void **unk0; s32 unk4; void **unkC; s32 unk10; void **unk18; s32 unk1C; } S_d;
s32 func_002413A0(S_d *arg0) {
    void ***p1; void **p2; void ***p3;
    s32 count, i;
    p1 = (void ***)arg0->unk0;
    count = ((s32)arg0->unk4 - (s32)arg0->unk0) >> 2;
    i = 0;
    while (i < count) {
        if (**p1 == 0) return 0;
        p1++; i++;
    }
    p2 = arg0->unkC;
    count = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
    i = 0;
    while (i < count) {
        if (((void **)p2[i])[17] == 0) return 0;
        i++;
    }
    p3 = (void ***)arg0->unk18;
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    i = 0;
    while (i < count) {
        if (((void **)p3[i])[11] == 0) return 0;
        i++;
    }
    return 1;
}

typedef struct { f32 x,y,z; } Vec3;
extern f32 D_004264A0;
typedef struct { void **unk0; s32 unk4; } S_f;
typedef struct { f32 unk8, unk4, unkC; } S_fe;
s32 func_0023FBF0(Vec3 *arg0, S_f *arg1) {
    void **p;
    s32 count;
    s32 i;
    s32 ret;
    p = arg1->unk0;
    count = ((s32)arg1->unk4 - (s32)p) >> 2;
    if (count <= 0) return 1;
    i = 0;
    while (i < count) {
        S_fe *e = (S_fe *)(*(void **)p[i] + 8);
        f32 d = e->unk8 * arg0->x + e->unk4 * arg0->y + e->unkC * arg0->z;
        if (D_004264A0 <= d) { ret = 1; }
        else if (d <= -D_004264A0) { ret = -1; }
        else { ret = 0; }
        if (ret == 1) return 0;
        i++;
    }
    return 1;
}

void func_0023F7D8(void);
void func_0023FBB0(void *, Vec3 *);
void func_0023FB58(void *arg0, Vec3 *arg1) {
    Vec3 sp;
    func_0023F7D8();
    sp.x = arg1->x; sp.y = arg1->y; sp.z = arg1->z;
    func_0023FBB0(arg0, &sp);
}
