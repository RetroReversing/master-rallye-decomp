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

typedef struct { void **unk18; s32 unk1C; } S_c;
s32 func_00241020(void *, s32);
typedef struct { void *unk0, *unk4; s32 unk8; } S_n;
s32 func_00240B38(S_c *arg0) {
    s32 count;
    s32 i;
    void **base;
    void *item;
    S_n *n, *h;
    count = ((s32)arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count <= 0) return 1;
    i = 0;
    base = arg0->unk18;
    while (i < count) {
        item = base[i];
        n = *(S_n **)item;
        h = n;
        if (h != n->unk4) {
            do {
                if (func_00241020(arg0, n->unk8) != 0) {
                    n = n->unk0;
                    if (n == h) break;
                    continue;
                }
                return 0;
            } while (1);
        }
        i++;
        base = arg0->unk18;
    }
    return 1;
}

typedef struct { void **unkC; s32 unk10; } S_d;
s32 func_00241060(void *, s32);
typedef struct { void *unk18, *unk1C; } S_de;
s32 func_00240BF0(S_d *arg0) {
    s32 count;
    s32 i;
    void **base;
    S_de *t;
    count = ((s32)arg0->unk10 - (s32)arg0->unkC) >> 2;
    if (count <= 0) return 1;
    i = 0;
    base = arg0->unkC;
    while (i < count) {
        t = *(S_de **)base[i];
        if (func_00241060(arg0, (s32)t->unk18) == 0) return 0;
        if (func_00241060(arg0, (s32)t->unk1C) == 0) return 0;
        i++;
        base = arg0->unkC;
    }
    return 1;
}

typedef struct { void **unk0; s32 unk4; } S_e;
s32 func_00240FD8(S_e *arg0, s32 arg1) {
    void **p;
    s32 count;
    s32 i;
    p = arg0->unk0;
    count = ((s32)arg0->unk4 - (s32)p) >> 2;
    if (count <= 0) return 0;
    i = 0;
    while (i < count) {
        if ((s32)p[i] == arg1) {
            return 1;
        }
        i++;
    }
    return 0;
}
