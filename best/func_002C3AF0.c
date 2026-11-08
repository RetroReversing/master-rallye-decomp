void func_002C6528(void *a, u32 b, u32 c, void *d);
void *func_002DDA20(void);
void func_002D4CD8(u32 a, u32 b, f32 c, f32 d);
void *func_00303038(void *a, void *b);

typedef struct {
    u8 pad[0x50];
    void *unk50;
} A;

typedef struct {
    u8 pad[0xC];
    u32 unkC;
} B;

typedef struct {
    void *unk0;
    u32 unk4;
    u8 pad8[0x10];
    u32 unk18;
    u8 pad1C[4];
    void *unk20;
} C;

typedef struct {
    void *unk0;
    u32 unk4;
} D;

typedef struct {
    f32 unk0;
    f32 unk8;
} E;

void func_002C3AF0(A *arg0, A *arg1, E *arg2, u32 arg3) {
    B *t0;
    C *t1;
    D *t2;
    void *v2;
    u32 t5;
    void *t4;
    u32 t7;
    u32 t8;
    u32 t9;
    u32 sp[2];
    
    t0 = arg1->unk50;
    if (!t0 || !t0->unkC) return;
    t1 = *(C **)func_002DDA20();
    t5 = t0->unkC;
    v2 = NULL;
    if (t5) {
        t4 = (u8 *)t1 + 0x14;
        if (t5 >= ((*(u32 *)(t4 + 4) - t1->unk18) >> 3)) {
            u32 t6 = (t5 + 0x20) & ~0x1F;
            t7 = *(u32 *)(t4 + 4);
            t8 = t1->unk18;
            if (t6 < ((t7 - t8) >> 3)) {
                t9 = t8 + t6 * 8;
                if (t9 < t7) {
                    u32 v1 = t9 + 8;
                    do { v1 += 8; } while (v1 < t7);
                }
                *(u32 *)(t4 + 4) = t7 - (t7 - t9);
            } else {
                sp[0] = 0; sp[1] = 0;
                func_002C6528(t4, t7, t6 - ((t7 - t8) >> 3), sp);
            }
        }
        t2 = (D *)(t1->unk18 + t5 * 8);
        if (t2->unk4 != (u32)t1->unk20) {
            t2->unk0 = func_00303038(t1, (u8 *)t0 + 0xC);
            t2->unk4 = t1->unk20;
        }
        v2 = t2->unk0;
    }
    if (v2) {
        func_002D4CD8(*(u32 *)((u8 *)v2 + 0x2C), arg3, arg2->unk0, arg2->unk8);
    }
}
