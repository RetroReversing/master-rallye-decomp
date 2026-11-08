extern s32 func_001E4280(void);
extern s32 func_001E3650(s32, void *);
extern s32 func_001D4010(void *);
extern s32 func_00151930(void *);
extern void func_00151A28(void *, s32, u32, s32, s32);
extern s32 func_003FA9B8(s32);
extern void **func_00201350(void *);
extern void func_001CB748(f32 *, f32 *, f32 *, f32 *);
extern void func_002B2028(void *);

extern u32 D_0040E618[];

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
} Pool658;

extern Pool658 D_0040E658;

typedef struct {
    u8 pad0[0x20];
    f32 v20x, v20y, v20z;
    f32 v30x, v30y, v30z;
    u8 pad38[0x14];
    f32 v50x, v50y, v50z;
} S50;

typedef struct {
    u8 pad0[0x90];
    f32 v90x, v90y, v90z;
    u8 pad9C[0x14];
    f32 vB0x, vB0y, vB0z;
} Obj;

void func_00290158(void *arg0, void *arg1) {
    s32 sp0;
    s32 pad04, pad08, pad0C;
    f32 sp10, sp14, sp18, pad1C;
    f32 sp20, sp24, sp28, pad2C;
    f32 sp30, sp34, sp38, pad3C;
    f32 sp40, sp44, sp48, pad4C;
    s32 pad50[14];
    f32 f20save;
    s32 h;
    s32 v;
    Pool658 *pool;
    void *psp;
    S50 *s;
    Obj *obj;
    s32 *blk;
    s32 rc;
    s32 spv;

    if (func_001E3650(func_001E4280(), (u8 *)arg0 + 0xC) > 0) {
        return;
    }

    h = func_001D4010((u8 *)arg1 + 0x5C);

    pool = &D_0040E658;
    psp = &sp0;
    if (pool->unkC != 0) {
        v = func_00151930(pool);
    } else {
        pool->unk8++;
        v = (s32)((u8 *)pool + 0x10);
    }
    *(s32 *)psp = v;

    f20save = 1.0f;
    func_00151A28(psp, 0, 0xFFFFFFFFu, h, func_003FA9B8(h));

    s = *(S50 **)((u8 *)arg1 + 0x50);
    sp30 = s->v20x * 6.0f;
    sp38 = s->v20z * 6.0f;
    sp34 = s->v20y * 6.0f;

    sp28 = sp38 - s->v30z;
    sp20 = sp30 - s->v30x;
    sp24 = sp34 - s->v30y;

    sp10 = sp20;
    sp14 = sp24;
    sp18 = sp28;

    sp20 = s->v50x - sp20;
    sp24 = s->v50y - sp24;
    sp28 = s->v50z - sp28;

    obj = *(Obj **)func_00201350(&s->v30x);

    sp40 = 0.0f;
    sp44 = f20save;
    sp48 = 0.0f;
    func_001CB748(&sp20, &s->v50x, &sp40, &obj->v90x);

    obj->vB0x = -obj->vB0x;
    obj->vB0y = -obj->vB0y;
    obj->vB0z = -obj->vB0z;
    obj->v90x = -obj->v90x;
    obj->v90y = -obj->v90y;
    obj->v90z = -obj->v90z;

    spv = *(s32 *)&sp0;
    blk = (s32 *)(spv - 0x10);
    rc = blk[2] - 1;
    blk[2] = rc;
    if (rc == 0) {
        if (blk[1] + 0x10 != 0) {
            func_002B2028(blk);
        } else {
            blk[0] = D_0040E618[-1];
            D_0040E618[-1] = (u32)blk;
        }
    }
}
