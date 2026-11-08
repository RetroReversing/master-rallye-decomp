typedef struct A {
    int flags;
    int unk4;
    int unk8;
    int unkC;
} A;

typedef struct B {
    char pad[4];
    A *unk4;
    int unk8;
} B;

s32 func_003D8C20(B *arg0) {
    A *tmp = arg0->unk4;
    if (tmp == 0) {
        return -1;
    }
    s32 v3;
    if (tmp->flags & 0x100) {
        v3 = tmp->unk8;
    } else {
        v3 = tmp->unkC;
    }
    return arg0->unk8 - (tmp->unk4 - v3);
}
