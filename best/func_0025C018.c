extern f32 func_0023BC60(void *);
extern f32 func_0025D958(void *, s32);
extern void func_0025C090(void *, f32 *, f32 *, void *, f32, f32, f32);
extern void func_0025AF00(void *, void *, void *, void *);

f32 func_0025D958(void *arg0, void *arg1) {
    f32 v = func_0023BC60(arg1);
    return *(f32*)((u8*)arg1 + 0x20) * v + v;
}

typedef struct T {
    u8 pad0[0x18];
    f32 *field18;
    u8 pad1C[0x84];
    void **fieldA0;
    void **fieldA4;
} T;

void func_0025D8D0(T *arg0) {
    s32 n = (s32)((u8*)arg0->fieldA4 - (u8*)arg0->fieldA0) >> 2;
    s32 i = 0;
    if (n > 0) {
        do {
            arg0->field18[i] = func_0025D958(arg0, arg0->fieldA0[i]);
            i++;
        } while (i < n);
    }
}

typedef struct Pt {
    f32 x,y,z;
} Pt;

void func_0025C018(Pt *p1, Pt *p2, Pt *p3, Pt *p4) {
    f32 s[12];
    s[0] = p2->x; s[1] = p2->y; s[2] = p2->z;
    s[4] = p3->x; s[5] = p3->y; s[6] = p3->z;
    s[8] = p4->x; s[9] = p4->y; s[10] = p4->z;
    func_0025C090(p1, s, s+4, p4, p2->x, p2->y, p2->z);
}

void func_0025AEC0(void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    if (arg2 != 0) {
        func_0025AF00(arg2, arg3, arg4, arg5);
        return;
    }
    func_0025AF00(arg1, arg3, arg4, arg5);
}
