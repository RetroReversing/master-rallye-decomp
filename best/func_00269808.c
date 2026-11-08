extern void func_0026C550(void);
extern void func_00152720(void *);
extern void func_0026CF20(s32 *, s32, s32, s32, s32);
extern s32 D_004267A8;
extern s32 func_00262838(void);
extern void func_00262548(s32, void *);

typedef struct Pt {
    f32 x, y;
} Pt;

typedef struct List3 {
    Pt *start;
    Pt *end;
} List3;

s32 func_0026BC78(List3 *arg0, Pt *arg1) {
    s32 count;
    s32 i;
    s32 j;
    Pt *p;
    Pt *q;
    f32 dx2, dy2, dx3, dy3, dx1, dy1;
    
    count = (s32)((arg0->end - arg0->start) * 0xB6DB6DB7) >> 2;
    if (count == 0) return 1;
    i = count - 1;
    p = arg0->start;
    for (j = 1; j < count; j++) {
        q = p + i;
        dx2 = p->x - arg1->x;
        dy2 = p->y - arg1->y;
        dx3 = q->x - arg1->x;
        dy3 = q->y - arg1->y;
        dx1 = q->x - p->x;
        dy1 = q->y - p->y;
        if ((dx2 * dy1) < (dx3 * dy2)) {
            return 0;
        }
        i--;
        p = p + 1;
    }
    return 1;
}

typedef struct A {
    s32 field0;
    u8 pad4[0x10];
    void *field14;
    s32 field18;
    u8 pad1C[0xF0];
    s32 field10C;
} A;

typedef struct B {
    u8 pad0[0x18];
    s16 field18;
    s32 field1C;
} B;

typedef struct C {
    s32 field0;
    u8 pad4[0xC];
    A **field10;
    u8 pad14[0x60];
    void *field74;
} C;

void func_00269808(C *arg0) {
    s32 var16 = 0;
    s32 var19 = 0;
    if (arg0->field0 <= 0) return;
    do {
        A *a = arg0->field10[var16];
        if (a->field0 == 0) {
            B *b = (B *)a->field14;
            void (*fn)(void *, void *, s32, A *) = (void(*)(void*,void*,s32,A*))b->field1C;
            fn((u8*)a + b->field18, (u8*)arg0->field74 + var19 * 4, var19 * 4, a);
        }
        var16++;
        var19 += a->field10C;
    } while (var16 < arg0->field0);
}

void func_00269748(void *arg0, s32 arg1) {
    s32 var17 = 0;
    s32 var16 = 0;
    s32 cnt;
    s32 **p;
    s32 *ent;
    s32 *vtab;
    
    *(s32*)((u8*)arg0 + 8) = 0;
    if (arg1 > 0) {
        p = (s32 **)((u8*)arg0 + 0x10);
        cnt = arg1;
        do {
            var17 += p[cnt - 1][4];
            cnt--;
        } while (cnt != 0);
        var16 = arg1;
    }
    p = (s32 **)((u8*)arg0 + 0x10);
    ent = p[var16];
    vtab = (s32*)ent[5];
    ((void(*)(s32*, void*, void*))(vtab[6]))((s32*)((u8*)ent + *(s16*)(vtab + 6)), (u8*)arg0 + 0x20 + (var17 << 2), ent);
    ent = p[var16];
    vtab = (s32*)ent[5];
    ((void(*)(s32*, void*, void*))(vtab[9]))((s32*)((u8*)ent + *(s16*)(vtab + 8)), (u8*)arg0 + 0x20 + (var17 << 2), ent);
}

void *func_00262BD8(void *arg0, s32 *arg1) {
    *(s32*)((u8*)arg0 + 4) = 0;
    *(s32*)((u8*)arg0 + 0x18) = 0;
    *(s32*)((u8*)arg0 + 0x14) = 0;
    *(s32*)((u8*)arg0 + 0x10) = 0;
    *(s32*)((u8*)arg0 + 0x34) = 0;
    *(s32*)((u8*)arg0 + 0x30) = 0;
    *(s32*)((u8*)arg0 + 0xC) = 0;
    *(s32*)((u8*)arg0 + 8) = 1;
    *(f32*)((u8*)arg0 + 0x20) = 1.0f;
    *(f32*)((u8*)arg0 + 0x28) = 8000.0f;
    *(f32*)((u8*)arg0 + 0x2C) = 9000.0f;
    *(f32*)((u8*)arg0 + 0x38) = 0.0f;
    *(s32*)((u8*)arg0 + 0x1C) = 1;
    *(f32*)((u8*)arg0 + 0x24) = 1.0f;
    *(f32*)((u8*)arg0 + 0x40) = 0.0f;
    *(f32*)((u8*)arg0 + 0x3C) = 0.0f;
    *(s32*)((u8*)arg0 + 4) = *arg1;
    func_00262548(func_00262838(), arg0);
    D_004267A8++;
    *(s32*)((u8*)arg0 + 0) = 0xADADADAD;
    return arg0;
}
