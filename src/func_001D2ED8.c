// ===== func_001D3920: sentinel-list front returning node->data at +0, else 0 =====
s32 func_001D3920(void *arg0) {
    void *v;
    s32 ret;
    v = *(void**)((char*)arg0 + 4);
    ret = 0;
    if (v != arg0)
        ret = *(s32*)v;
    return ret;
}

// ===== func_001D2FE0 =====
extern int func_001CE2F8(void *);
extern int func_001D2588(s32 *, s32, s32, s32);
extern void func_001D2A40(s32 *, s32, s32);
extern char D_00475CF0[];

void func_001D2FE0(s32 *arg0) {
    s32 v;
    if (*arg0 != 0) {
        v = func_001D2588(arg0, 0, func_001CE2F8(arg0), (s32)&D_00475CF0);
        if (v > 0)
            func_001D2A40(arg0, 0, v);
    }
}

// ===== func_001D2F20 =====
extern s32 *func_001D2458(s32 *, s32);
extern s32 *func_001D2488(s32 *, s32 *);
extern void func_001535C8(void *, s32, void *);
extern s32 func_003FAFB8(s32, s32);
extern void D_002AD390(void *);

typedef struct { s32 unk0; s32 unk4; s32 unk8; } S_f20_arg2;
typedef struct { s32 unk0; } S_f20_local;

void func_001D2F20(s32 **arg0, s32 arg1, S_f20_arg2 *arg2) {
    S_f20_local sp;
    s32 v;
    s32 cur;
    s32 end;
    if (*arg0 == 0) return;
    v = func_003FAFB8((s32)*arg0, arg1);
    if (v == 0) return;
    do {
        func_001D2458(&sp, v);
        cur = arg2->unk4;
        end = arg2->unk8;
        if (cur == end) {
            func_001535C8(arg2, cur, &sp);
        } else {
            if (cur != 0)
                func_001D2488((s32*)cur, &sp);
            arg2->unk4 = cur + 4;
        }
        v = func_003FAFB8(0, arg1);
        D_002AD390(sp.unk0);
    } while (v != 0);
}

// ===== func_001D2ED8: replace all occurrences of arg1 with arg2 in *arg0 =====
void func_001D2ED8(s8 **arg0, s8 arg1, s8 arg2) {
    s8 *p;
    p = *arg0;
    if (p == NULL) return;
    while (*p != 0) {
        if (*p == arg1)
            *p = arg2;
        p++;
    }
}
