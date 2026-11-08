extern u32 D_0043C3B0[];

void func_003F0B30(s32 arg0, s32 arg1, s32 arg2) {
    D_0043C3B0[3] = arg0;
    D_0043C3B0[1] = arg1;
    D_0043C3B0[2] = arg2;
}

typedef struct S_405BC0_inner {
    s32 unk0;
    u8 pad4[0x34];
    struct S_405BC0_inner *next; /* 0x38 */
} S_405BC0_inner;

typedef struct S_405BC0_node {
    u8 pad0[8];
    S_405BC0_inner *unk8;        /* 0x8 */
    u8 padC[8];
    struct S_405BC0_node *unk14; /* 0x14 */
} S_405BC0_node;

typedef struct S_405BC0_arg1 {
    u8 pad0[0x28];
    S_405BC0_node *unk28; /* 0x28 */
} S_405BC0_arg1;

void *func_00405BC0(s32 arg0, S_405BC0_arg1 *arg1) {
    S_405BC0_node *node;
    S_405BC0_inner *cur;

    node = arg1->unk28;
    if (node == NULL) {
        return NULL;
    }
loop_node:
    cur = node->unk8;
    if (cur != NULL) {
        goto check_cur;
    }
    goto next_node;
check_cur:
    if (cur->unk0 == arg0) {
        return cur;
    }
    cur = cur->next;
    if (cur != NULL) {
        goto check_cur;
    }
next_node:
    node = node->unk14;
    if (node != NULL) {
        goto loop_node;
    }
    return NULL;
}

void *func_004058E0(s32);
void func_00405438(u32, void *, s32, s32, s32, s32);

typedef struct S_405C10_arg0 {
    u8 pad0[0x14];
    s32 unk14;  /* 0x14 */
    u8 pad18[4];
    s32 unk1C;  /* 0x1C */
    s32 unk20;  /* 0x20 */
} S_405C10_arg0;

typedef struct S_405C10_ret {
    u8 pad0[0x14];
    s32 unk14;  /* 0x14 */
    u8 pad18[4];
    s32 unk1C;  /* 0x1C */
    u32 unk20;  /* 0x20 */
    void *unk24;/* 0x24 */
    s32 unk28;  /* 0x28 */
    s32 unk2C;  /* 0x2C */
} S_405C10_ret;

typedef struct S_405BC0_found {
    u8 pad0[8];
    s32 unk8;   /* 0x8 */
    u8 padC[8];
    s32 unk14;  /* 0x14 */
} S_405BC0_found;

void func_00405C10(S_405C10_arg0 *arg0, s32 arg1) {
    S_405C10_ret *ret;
    S_405BC0_found *found;

    ret = func_004058E0(arg1);
    ret->unk1C = arg0->unk1C;
    ret->unk14 = arg0->unk14;
    ret->unk20 = 0x80000009;
    found = func_00405BC0(arg0->unk20, (S_405BC0_arg1 *)arg1);
    if (found != NULL) {
        ret->unk24 = found;
        ret->unk28 = found->unk8;
        ret->unk2C = found->unk14;
    } else {
        ret->unk24 = NULL;
        ret->unk28 = 0;
        ret->unk2C = 0;
    }
    func_00405438(0x80000008, ret, 0x40, 0, 0, 0);
}

void func_00403EC0(s32, void *, void *);

typedef struct S_405E00_obj6 {
    s32 unk0;   /* 0x0 */
    s32 unk4;   /* 0x4 */
    u8 pad8[4];
    void *unkC; /* 0xC */
    void *unk10;/* 0x10 */
} S_405E00_obj6;

typedef struct S_405E00_obj5 {
    u8 pad0[0xC];
    s32 unkC;   /* 0xC */
    u8 pad10[0xC];
    s32 unk1C;  /* 0x1C */
    s32 unk20;  /* 0x20 */
    s32 unk24;  /* 0x24 */
    s32 unk28;  /* 0x28 */
    s32 unk2C;  /* 0x2C */
    s32 unk30;  /* 0x30 */
    s32 unk34;  /* 0x34 */
    u8 pad38[4];
    void *unk3C;/* 0x3C */
    S_405E00_obj6 *unk40; /* 0x40 */
} S_405E00_obj5;

typedef struct S_405E00_arg0 {
    u8 pad0[0x10];
    s32 unk10;  /* 0x10 */
    s32 unk14;  /* 0x14 */
    u8 pad18[4];
    s32 unk1C;  /* 0x1C */
    s32 unk20;  /* 0x20 */
    s32 unk24;  /* 0x24 */
    s32 unk28;  /* 0x28 */
    s32 unk2C;  /* 0x2C */
    s32 unk30;  /* 0x30 */
    S_405E00_obj5 *unk34; /* 0x34 */
} S_405E00_arg0;

void func_00405E00(S_405E00_arg0 *arg0) {
    S_405E00_obj5 *obj5;
    S_405E00_obj6 *obj6;
    s32 tmp;

    obj5 = arg0->unk34;
    obj6 = obj5->unk40;
    if (obj6->unkC != NULL) {
        ((S_405E00_obj5 *)obj6->unk10)->unk3C = obj5;
    } else {
        obj6->unkC = obj5;
    }
    obj6->unk10 = obj5;
    obj5->unk20 = arg0->unk14;
    obj5->unk1C = arg0->unk1C;
    obj5->unk24 = arg0->unk20;
    obj5->unkC  = arg0->unk24;
    obj5->unk28 = arg0->unk28;
    obj5->unk2C = arg0->unk2C;
    obj5->unk30 = arg0->unk30;
    obj5->unk34 = arg0->unk10;
    tmp = obj6->unk0;
    if (tmp >= 0 && obj6->unk4 == 0) {
        func_00403EC0(tmp, obj5, obj6);
    }
}
