/* ---- func_0017DCF0 ---- */
extern s32 func_0017DF10(s32);
extern s32 func_0017DF18(s32);
typedef struct { char pad[0x24]; s32 id; } ElemI;
typedef struct { char pad[0x24]; f32 val; } ElemF;
typedef struct { char pad[0x2C]; } Elem30;
typedef struct { char pad[0xE8]; s32 id; char pad2[0x174-0xEC]; Elem30 *begin; Elem30 *end; } S17DCF0;
extern ElemI *func_001A12E0(void);
f32 func_0017DCF0(S17DCF0 *p) {
    Elem30 *e;
    s32 n;
    if (p->id < 0) {
        e = p->begin;
    } else {
        n = p->end - p->begin;
        if ((u32)(n - 1) < (u32)p->id) {
            e = p->begin;
        } else if (func_001A12E0()->id != p->id) {
            e = p->begin + p->id;
        } else {
            e = p->begin;
        }
    }
    return ((ElemF *)e)->val;
}

/* ---- func_0017DC78 ---- */
typedef struct { char pad[0xC]; s32 fC; s32 f10; } S17DC78;
s32 func_0017DC78(S17DC78 *p) {
    s32 n = 0;
    s32 off = 0;
    if (func_0017DF10(p->fC) == 0)
        return 0;
    do {
        if (func_0017DF18(p->f10 + off) == 0)
            return 0;
        n++;
        off += 0x190;
    } while (n < 4);
    return 1;
}

/* ---- func_0017E2E8 ---- */
typedef struct { s32 id, variant; char *str; } Entry17E2E8;
extern Entry17E2E8 *func_0017E500(s32 *, s32, s32);
extern s32 func_001D4040(s32 *, s32);
extern s32 func_003F9698(const char *, ...);
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
