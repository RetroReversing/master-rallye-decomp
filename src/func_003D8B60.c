extern void func_003D7E50(void *);

typedef struct S2 {
    void *unk0;
    void *unk4;
    int unk8;
} S2;

typedef struct S1 {
    unsigned int flags;
    int unk4;
    int unk8;
    int unkC;
    char pad[0x30 - 0x10];
    void *unk30;
} S1;

void func_003D8B60(S2 *arg0, S1 *arg1) {
    arg0->unk4 = arg1;
    if (arg1->flags & 0x800) {
        func_003D7E50(arg1);
    }
    if (arg1->flags & 0x100) {
        arg0->unk8 = arg1->unk4 - arg1->unk8;
    } else {
        arg0->unk8 = arg1->unk4 - arg1->unkC;
    }
    arg0->unk0 = arg1->unk30;
    arg1->unk30 = arg0;
}
