typedef struct {
    void **unk18;
    s32 unk1C;
} S_arg0_407D8;
s32 func_002509C8(void *);
s32 func_002407D8(S_arg0_407D8 *arg0) {
    s32 count = (arg0->unk1C - (s32)arg0->unk18) >> 2;
    if (count <= 0) return 1;
    {
        s32 i = 0;
        void **base = arg0->unk18;
        do {
            if (func_002509C8(base[i++]) == 0) return 0;
        } while (i < count);
    }
    return 1;
}

typedef struct { void **unk0; s32 unk4; } S_arg0_40940;
typedef struct { s32 unk4; } S_elem_40940;
s32 func_00240940(S_arg0_40940 *arg0) {
    void **p = arg0->unk0;
    s32 count = ((s32)arg0->unk4 - (s32)p) >> 2;
    s32 i = 0;
    s32 var6 = 0;
    s32 var8 = 0;
    if (count <= 0) return 0;
    while (i < count) {
        s32 val = ((S_elem_40940 *)p[i])->unk4;
        if (val == -1) var8++;
        else if (val == 1) var6++;
        i++;
        if (var6 != 0 && var8 != 0) return 1;
    }
    return 0;
}

typedef struct { void **unk0; s32 unk4; } S_arg0_409B8;
typedef struct { s32 unk4; } S_elem_409B8;
s32 func_002409B8(S_arg0_409B8 *arg0) {
    void **p = arg0->unk0;
    s32 count = ((s32)arg0->unk4 - (s32)p) >> 2;
    s32 i = 0;
    if (count <= 0) return 0;
    while (i < count) {
        s32 val = ((S_elem_409B8 *)p[i])->unk4;
        if (val == -1) return -1;
        if (val == 1) return 1;
        i++;
    }
    return 0;
}

typedef struct { void **unk18; s32 unk1C; } S_arg0_40B38;
s32 func_00241020(void *, s32);
typedef struct { void *unk0; void *unk4; s32 unk8; } S_node_40B38;
s32 func_00240B38(S_arg0_40B38 *arg0) {
    s32 count = (arg0->unk1C - (s32)arg0->unk18) >> 2;
    s32 i = 0;
    if (count <= 0) return 1;
    while (i < count) {
        void *item = arg0->unk18[i];
        S_node_40B38 *n = *(S_node_40B38 **)item;
        S_node_40B38 *head = n;
        if (head != n->unk4) {
            do {
                if (func_00241020(arg0, n->unk8) != 0) {
                    n = n->unk0;
                    if (n == head) break;
                    continue;
                }
                return 0;
            } while (1);
        }
        i++;
    }
    return 1;
}
