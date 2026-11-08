extern f32 func_0027DF58(void);
extern void func_002618C8(s32, s32);
extern s32 func_001CE2F8(void *);
extern s32 func_001D24B8(void *, s32, s32, void *);
extern char D_00479B98[];

typedef struct U {
    u8 pad[0x14];
    void *field14;
    s32 field18;
} U;

typedef struct V {
    u32 field0;
    s32 field4;
    f32 field8;
} V;

V *func_00260D30(V *arg0, U *arg1, f32 f12) {
    f32 v = func_0027DF58() * f12;
    s32 *p = (s32*)arg1->field14;
    s32 cnt = (arg1->field18 - (s32)p) >> 3;
    s32 iv = (s32)v;
    if ((u32)iv < (u32)cnt) {
        s32 *q = p + iv * 2;
        arg0->field0 = q[0];
        arg0->field8 = *(f32*)(q + 1);
    } else {
        arg0->field0 = 0;
        arg0->field8 = 1.0f;
    }
    arg0->field4 = 0;
    return arg0;
}

void func_00261830(void *arg0, f32 *arg1, f32 *arg2, f32 *arg3, f32 *arg4, f32 *arg5) {
    f32 v1 = *arg4;
    f32 v2 = *arg3;
    f32 v3 = *arg1;
    f32 v4 = *arg2;
    f32 d1 = v3 - v1;
    f32 d2 = v4 - v2;
    f32 dv1 = d1 / *arg5;
    f32 dv2 = d2 / *arg5;
    s32 a = (s32)dv1;
    s32 b = (s32)dv2;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    func_002618C8(a, b);
    *(f32*)((u8*)arg0 + 4) = v1;
    *(f32*)((u8*)arg0 + 8) = v2;
}

void func_00260708(void *arg0, void *arg1, f32 *arg2, f32 *arg3) {
    *arg2 = (*(f32*)((u8*)arg0 + 4) - *(f32*)arg1) / *(f32*)((u8*)arg0 + 0xC);
    *arg3 = (*(f32*)((u8*)arg1 + 8) - *(f32*)((u8*)arg0 + 8)) / *(f32*)((u8*)arg0 + 0xC);
}

typedef struct Node {
    struct Node *first;
    struct Node *next;
    u8 pad[8];
} Node;

Node *func_002602B0(void *arg0, Node *arg1) {
    void *loc = (u8*)arg1 + 0x14;
    if (func_001D24B8(loc, 0, func_001CE2F8(loc), D_00479B98) == -1) {
        Node *p = arg1->first;
        if (p != NULL) {
            do {
                Node *r = func_002602B0(arg0, p);
                if (r != NULL) return r;
                p = p->next;
            } while (p != NULL);
        }
        return NULL;
    }
    return arg1;
}
