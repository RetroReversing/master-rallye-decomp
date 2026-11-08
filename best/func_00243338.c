typedef struct Vec3 { f32 x; f32 y; f32 z; } Vec3;
extern f32 D_00426508[3];
extern void func_002433F8(Vec3 *a, void *b);

void func_00243338(void *a0, Vec3 *a1, Vec3 *a2, f32 *a3, int *a4) {
    f32 sp[0x1C/4];
    Vec3 sp20;

    ((f32*)sp)[0] = D_00426508[0];
    ((f32*)sp)[1] = D_00426508[1];
    ((f32*)sp)[2] = D_00426508[2];
    ((f32*)sp)[3] = 0.0f;
    ((int*)sp)[4] = -1;
    sp20.x = a1->x;
    sp20.y = a1->y;
    sp20.z = a1->z;
    func_002433F8(&sp20, sp);
    a2->z = ((f32*)sp)[2];
    a2->x = ((f32*)sp)[0];
    a2->y = ((f32*)sp)[1];
    *a3 = ((f32*)sp)[3];
    *a4 = ((int*)sp)[4];
    sp20.x = ((f32*)sp)[0];
    sp20.y = ((f32*)sp)[1];
    sp20.z = ((f32*)sp)[2];
}
