typedef struct { f32 x, y, z; } Vec3;
typedef struct { Vec3 a; Vec3 b; f32 unk18; f32 unk1C; s32 unk20; } S;

S *func_001D6EB8(S *arg0, s32 arg1, Vec3 *arg2, Vec3 *arg3, f32 fparg0, f32 fparg1) {
    Vec3 *b = &arg0->b;
    arg0->a.x = arg2->x;
    arg0->a.y = arg2->y;
    arg0->a.z = arg2->z;
    b->x = arg3->x;
    b->y = arg3->y;
    b->z = arg3->z;
    arg0->unk18 = fparg0;
    arg0->unk1C = fparg1;
    arg0->unk20 = arg1;
    return arg0;
}
