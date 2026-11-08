/* ---- func_0017DF20 ---- */
extern u32 D_004734B8;
typedef struct { void *vt; s32 f4; } Obj17DF20;
void *func_0017DF20(Obj17DF20 *p, s32 x) {
    p->f4 = x;
    p->vt = &D_004734B8;
    return p;
}

/* ---- func_0017DCF0 ---- */
extern s32 func_0017DF10(s32);
extern s32 func_0017DF18(void *);
typedef struct { char pad[0x24]; s32 id; } ElemI;
typedef struct { char pad[0x24]; f32 val; } ElemF;
typedef struct { char pad[0xE8]; s32 id; char pad2[0x174-0xEC]; u8 *base; u8 *end; } S17DCF0;
extern ElemI *func_001A12E0(void);
f32 func_0017DCF0(S17DCF0 *p) {
    u8 *b;
    void *e;
    s32 id = p->id;
    b = p->base;
    e = b;
    if (id >= 0) {
        if ((u32)((s32)(p->end - b) / 0x30 - 1) >= (u32)id) {
            if (func_001A12E0()->id != id)
                e = b + id * 0x30;
            else
                e = b;
        }
    }
    return ((ElemF *)e)->val;
}

/* ---- func_0017DC78 ---- */
typedef struct { char pad[0x190]; } Elem190;
typedef struct { char pad[0xC]; s32 fC; Elem190 *f10; } S17DC78;
s32 func_0017DC78(S17DC78 *p) {
    Elem190 *e;
    s32 n = 0;
    if (func_0017DF10(p->fC) == 0)
        return 0;
    e = p->f10;
    do {
        if (func_0017DF18(e) == 0)
            return 0;
        n++;
        e++;
    } while (n < 4);
    return 1;
}

/* ---- func_0017E2E8 ---- */
typedef struct { s32 id, variant; char *str; } Entry17E2E8;
extern Entry17E2E8 *func_0017E500(s32 *, s32, s32);
extern void func_001D4040(s32 *, s32);
extern void func_003F9698(const char *, ...);
extern char D_0046F6D0[], D_0046F6E0[];
void func_0017E2E8(s32 *a, s32 id, s32 *out) {
    Entry17E2E8 *e = func_0017E500(a, id, 0);
    if (e != NULL) {
        func_001D4040(out, (s32)e->str);
    } else {
        func_001D4040(out, (s32)D_0046F6D0);
        func_003F9698(D_0046F6E0, id);
    }
}
