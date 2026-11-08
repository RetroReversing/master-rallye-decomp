void func_0029B5E8(void *a, void *b, void *c, f32 d);
void func_0029B988(void *a, void *b, f32 d);

typedef struct {
    char pad[0x4C];
    void *unk4C;
    void *unk50;
} unk1;

typedef struct {
    char pad[0x60];
    f32 unk60;
    f32 pad2[0x1D];
    f32 unk54;
    f32 unk58;
    f32 unk5C;
} unk0;

void func_0029B4E8(unk0 *arg0, unk1 *arg1, f32 f12) {
    void *v0;
    void *a2;
    f32 f0;
    f32 f2;
    s32 v1;
    void *v1p;

    f2 = 0.000001f;
    a2 = arg0 + 0x60;
    if (arg1->unk4C) {
        v0 = (void *)((char *)arg1->unk4C + 0x20);
    } else {
        v0 = (void *)((char *)arg1->unk50 + 0x20);
    }
    v1 = 0;
    v1p = (void *)((char *)v0 + 0x30);
    f0 = *(f32 *)v1p;
    if (fabsf(arg0->unk60 - f0) <= f2) {
        if (fabsf(*(f32 *)(a2 + 4) - *(f32 *)((char *)v1p + 4)) <= f2) {
            if (fabsf(*(f32 *)(a2 + 8) - *(f32 *)((char *)v1p + 8)) <= f2) {
                v1 = 1;
            }
        }
    }
    if (v1 == 0) {
        arg0->unk54 = f0;
        *(f32 *)(arg0 + 0x58) = *(f32 *)((char *)v1p + 4);
        *(f32 *)(arg0 + 0x5C) = *(f32 *)((char *)v1p + 8);
    }
    func_0029B5E8(arg0, v0, a2, f12);
    func_0029B988(arg0, v0, f12);
}
