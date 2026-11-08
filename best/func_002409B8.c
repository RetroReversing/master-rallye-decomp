typedef struct {
    f32 x, y, z;
} Vec3f;

void func_00240478(Vec3f *);

void func_00240440(Vec3f *arg1) {
    Vec3f sp;
    sp.x = arg1->x;
    sp.y = arg1->y;
    sp.z = arg1->z;
    func_00240478(&sp);
}

typedef struct {
    void *unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    void **unk18;
    s32 unk1C;
} S_func_002407D8_arg0;

s32 func_002509C8(void *);

s32 func_002407D8(S_func_002407D8_arg0 *arg0) {
    s32 i = 0;
    s32 count = (arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count <= 0) {
        return 1;
    }
    while (i < count) {
        if (func_002509C8(arg0->unk18[i]) == 0) {
            return 0;
        }
        i++;
    }
    return 1;
}

typedef struct {
    void **unk0;
    s32 unk4;
} S_func_00240940_arg0;

typedef struct {
    s32 unk4;
} S_func_00240940_elem;

s32 func_00240940(S_func_00240940_arg0 *arg0) {
    void **p = arg0->unk0;
    s32 end = arg0->unk4;
    s32 count = (end - (s32)p) >> 2;
    s32 i = 0;
    s32 var6 = 0;
    s32 var8 = 0;
    if (count <= 0) {
        return 0;
    }
    while (i < count) {
        s32 val = ((S_func_00240940_elem *)p[i])->unk4;
        if (val == -1) {
            var8++;
        } else if (val == 1) {
            var6++;
        }
        i++;
        if (var6 != 0 && var8 != 0) {
            return 1;
        }
    }
    return 0;
}

typedef struct {
    void **unk0;
    s32 unk4;
} S_func_002409B8_arg0;

typedef struct {
    s32 unk4;
} S_func_002409B8_elem;

s32 func_002409B8(S_func_002409B8_arg0 *arg0) {
    void **p = arg0->unk0;
    s32 end = arg0->unk4;
    s32 count = (end - (s32)p) >> 2;
    s32 i = 0;
    if (count <= 0) {
        return 0;
    }
    while (i < count) {
        s32 val = ((S_func_002409B8_elem *)p[i])->unk4;
        if (val == -1) {
            return -1;
        }
        if (val == 1) {
            return 1;
        }
        i++;
    }
    return 0;
}
