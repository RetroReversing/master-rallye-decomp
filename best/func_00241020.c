typedef struct { void **unk18; s32 unk1C; } S_a;
s32 func_002509C8(void *);
s32 func_002407D8(S_a *arg0) {
    s32 count;
    s32 i;
    void **base;
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count <= 0) return 1;
    i = 0;
    base = arg0->unk18;
    for (;;) {
        if (func_002509C8(base[i]) == 0) return 0;
        i++;
        if (i < count) { base = arg0->unk18; continue; }
        break;
    }
    return 1;
}

typedef struct { void **unkC; s32 unk10; } S_b;
s32 func_00241020(S_b *arg0, s32 arg1) {
    void **p;
    s32 count;
    s32 i;
    p = arg0->unkC;
    count = ((s32)arg0->unk10 - (s32)p) >> 2;
    if (count <= 0) return 0;
    i = 0;
    while (i < count) {
        if ((s32)p[i] == arg1) return 1;
        i++;
    }
    return 0;
}

typedef struct { void **unk18; s32 unk1C; } S_c;
s32 func_00241060(S_c *arg0, s32 arg1) {
    void **p;
    s32 count;
    s32 i;
    p = arg0->unk18;
    count = ((s32)arg0->unk1C - (s32)p) >> 2;
    if (count <= 0) return 0;
    i = 0;
    while (i < count) {
        if ((s32)p[i] == arg1) return 1;
        i++;
    }
    return 0;
}

typedef struct {
    void **unk0; s32 unk4;
    void **unkC; s32 unk10;
    void **unk18; s32 unk1C;
    s32 unk24, unk28;
} S_d;
void func_002410A0(S_d *arg0, s32 arg1) {
    void ***p1;
    void **p2;
    void ***p3;
    s32 count;
    s32 i;
    p1 = (void ***)arg0->unk0;
    count = ((s32)arg0->unk4 - (s32)arg0->unk0) >> 2;
    i = 0;
    while (i < count) {
        **p1++ = (void *)arg1;
        i++;
    }
    p2 = arg0->unkC;
    count = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
    i = 0;
    while (i < count) {
        ((void **)p2[i])[17] = (void *)arg1; /* offset 0x44 = 17*4 */
        i++;
    }
    p3 = (void ***)arg0->unk18;
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    i = 0;
    while (i < count) {
        ((void **)p3[i])[11] = (void *)arg1; /* offset 0x2C = 11*4 */
        i++;
    }
}
