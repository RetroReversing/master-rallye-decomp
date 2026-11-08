extern void func_0025AF00(void *, void *, void *, void *);
extern void func_0025C090(void *, f32 *, f32 *, void *, f32, f32, f32);
extern f32 func_0023BC60(void *);
extern s32 func_0023BDE0(f32, f32);
extern f32 D_004264A8[];

typedef struct Pt {
    f32 x,y,z;
} Pt;

void func_0025AEC0(void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    if (arg2 != 0) {
        func_0025AF00(arg2, arg3, arg4, arg5);
        return;
    }
    func_0025AF00(arg1, arg3, arg4, arg5);
}

void func_0025C018(Pt *p1, Pt *p2, Pt *p3, Pt *p4) {
    f32 s[12];
    s[0] = p2->x; s[1] = p2->y; s[2] = p2->z;
    s[4] = p3->x; s[5] = p3->y; s[6] = p3->z;
    s[8] = p4->x; s[9] = p4->y; s[10] = p4->z;
    func_0025C090(p1, s, s+4, p4, p2->x, p2->y, p2->z);
}

typedef struct S {
    u8 pad[0xD8];
    s32 fieldD8;
} S;

s32 func_0025A308(S *arg1, f32 fparg0) {
    s32 temp16 = arg1->fieldD8;
    if (temp16 != 1) return 1;
    if (func_0023BDE0(func_0023BC60(arg1), fparg0) == temp16) return 0;
    return 1;
}

typedef struct B {
    s32 f0,f4,f8,fC;
    s32 f10;
    f32 f14,f18,f1C;
    s32 f20;
} B;

typedef struct A {
    s32 f0,f4,f8,fC;
} A;

B *func_00259228(B *arg0, A *arg1) {
    s32 *p = (s32*)((u8*)arg0 + 0x14);
    arg0->f0 = arg1->f0; arg0->f4 = arg1->f4; arg0->f8 = arg1->f8; arg0->fC = arg1->fC;
    arg0->f10 = 0;
    *(s32*)((u8*)arg0 + 0x14) = 0;
    p[1] = 0; p[2] = 0;
    *(f32*)((u8*)arg0 + 0x14) = D_004264A8[0];
    ((f32*)((u8*)arg0 + 0x14))[1] = D_004264A8[1];
    ((f32*)((u8*)arg0 + 0x14))[2] = D_004264A8[2];
    ((f32*)((u8*)arg0 + 0x14))[3] = D_004264A8[3];
    p[4] = *(s32*)&D_004264A8[4];
    return arg0;
}

typedef struct C {
    s32 f0,f4,f8,fC;
    s32 f10;
    f32 f14,f18,f1C;
    s32 f20;
} C;

void *func_002591C8(C *arg0, s32 arg1) {
    s32 *p = (s32*)((u8*)arg0 + 0x14);
    arg0->fC = arg1;
    *(s32*)((u8*)arg0 + 0x14) = 0;
    arg0->f8 = -1;
    arg0->f0 = 0;
    arg0->f4 = -1;
    arg0->f10 = 0;
    p[1] = 0; p[2] = 0;
    arg0->f14 = D_004264A8[0];
    p[1] = *(s32*)&D_004264A8[1];
    p[2] = *(s32*)&D_004264A8[2];
    p[3] = *(s32*)&D_004264A8[3];
    p[4] = *(s32*)&D_004264A8[4];
    return arg0;
}
