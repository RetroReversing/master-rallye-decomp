/* identical to func_001D6E40 (matched), with its names changed by decompdecomp */
extern s32 D_004267C0;
s32 D_002AD408(s32 arg0);
s32 func_0026C520(s32 arg0);

s32 func_0026C578(void) {
    if (D_004267C0 == 0) {
        D_004267C0 = func_0026C520(D_002AD408(0x10));
    }
    return D_004267C0;
}

typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 a; Vec3 b; f32 unk18; f32 unk1C; s32 unk20; } S;

S *func_001D6E88(S *arg0) {
    Vec3 *b;
    arg0->a.x = 0;
    arg0->a.y = 0;
    arg0->a.z = 0;
    b = &arg0->b;
    b->x = 0;
    b->y = 0;
    b->z = 0;
    arg0->unk18 = 0;
    arg0->unk20 = 0;
    return arg0;
}
