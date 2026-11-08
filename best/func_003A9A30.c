extern s32 func_003B0158(void *);
extern s32 func_003B0190(void *);

s32 func_003A9BD8(void *arg0) {
    s32 end;
    s32 start;
    s32 diff;

    end = func_003B0190(arg0);
    start = func_003B0158(arg0);
    diff = end - start;
    return (diff * (s32)0xAAAAAAAB) >> 2;
}

extern void func_003A4A10(void *);
extern void func_003B0268(void *, s32, void *);

void func_003A9CE8(void *arg0, s32 arg1) {
    char sp[0x10];
    func_003A4A10(sp);
    func_003B0268(arg0, arg1, sp);
}

extern void func_003AFFB0(void *, s32, void *);

void func_003A9A30(void *arg0, s32 arg1) {
    s32 tmp = 0;
    func_003AFFB0(arg0, arg1, &tmp);
}

extern void func_003A5BC8(void *, f32, f32, f32);

typedef struct Vec3 {
    f32 x, y, z;
} Vec3;

void *func_003A97C0(void *arg0, Vec3 *arg1, Vec3 *arg2) {
    f32 x = arg1->x - arg2->x;
    f32 y = arg1->y - arg2->y;
    f32 z = arg1->z - arg2->z;
    func_003A5BC8(arg0, x, y, z);
    return arg0;
}
