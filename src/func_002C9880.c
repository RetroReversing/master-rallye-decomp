/* identical to func_00201460 (matched), with its names changed by decompdecomp */
void *D_002AD390(void *);
void *D_002AD408(s32);
void *func_00201428(s32);
void *func_00201488(s32);
void func_002CAF78(void *);
extern s32 D_00426444;
extern void D_004823B0;

typedef struct Vtable {
    void *unk0;
    void *unk4;
    void *unk8;
    void (*fn)(void *, s32, void *);
} Vtable;

typedef struct Obj {
    Vtable *vt;
    struct Obj *unk4;
    struct Obj *unkC;
} Obj;

void func_00201540(Obj *arg0, s32 arg1) {
    if (arg0->unk4 != NULL) {
        Vtable *vt = arg0->unk4->vt;
        vt->fn((void *)((char *)arg0->unk4 + *(s16 *)((char *)vt + 8)), 3, arg0->unk4);
    }
    if (arg0->unkC != NULL) {
        Vtable *vt = arg0->unkC->vt;
        vt->fn((void *)((char *)arg0->unkC + *(s16 *)((char *)vt + 8)), 3, arg0->unkC);
    }
    if (arg1 & 1) {
        D_002AD390(arg0);
    }
}

typedef struct S2 {
    void *unk0;
    void *unk4;
    void *unk8;
    void *unkC;
} S2;

void *func_002014E8(S2 *arg0) {
    void *v1;
    void *v2;
    v1 = func_00201488((s32)D_002AD408(4));
    arg0->unk0 = v1;
    arg0->unk4 = v1;
    v2 = func_00201428((s32)D_002AD408(4));
    arg0->unk8 = v2;
    arg0->unkC = v2;
    return arg0;
}

void *func_002015D8(void) {
    if (D_00426444 == 0) {
        D_00426444 = (s32)func_002014E8((S2 *)D_002AD408(0x10));
    }
    return (void *)D_00426444;
}

void func_002C9880(void **arg0) {
    *arg0 = &D_004823B0;
    func_002CAF78(arg0);
}
