typedef struct {
    void *begin;
    void *end;
    void *cap;
} Vec;

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u32 unk0C;
    u8 pad[0x8];
    /* 0x14 */ Vec vec;
} S_Res;

typedef struct {
    /* 0x00 */ f32 unk00;
    /* 0x04 */ void *unk04;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ u32 unk0C;
} S_Arg1;

extern void D_002AD390(Vec *);
extern s32 func_001D2488(void *, void *, void *);
extern void func_001D2CD8(void *, const char **);
extern void func_001D4040(void *, const char *);
extern s32 func_001E00E8(S_Arg1 *);
extern s32 func_001E16B8(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1778(S_Arg1 *, S_Arg1 *, f32);
extern s32 func_001E1868(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1940(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1A00(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1AC0(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1C10(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1CD0(S_Arg1 *, S_Arg1 *, void *);
extern s32 func_001E1E88(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E1F88(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E2090(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E21B0(S_Arg1 *, S_Arg1 *, s32);
extern s32 func_001E4D70(S_Arg1 *, void *);
extern s32 func_001E4D90(S_Arg1 *);
extern s32 func_001E4DC8(S_Arg1 *);
extern s32 func_001E5CC0(S_Arg1 *);
extern s32 func_001E5D00(S_Arg1 *);
extern s32 func_001E5D38(S_Arg1 *);
extern s32 func_001E5D70(S_Arg1 *);
extern s32 func_001E5DA8(S_Arg1 *);
extern void func_001EAE78(Vec *, void *, void *);

extern const char D_004769C0[];
extern const char D_00476A40[];
extern const char D_00476A78[];
extern const char D_00476A88[];
extern const char D_00476DF0[];

s32 func_001E6638(S_Arg1 *arg1) {
    u8 stack[0x140];
    S_Arg1 *sp = (S_Arg1 *)stack; // first arg to callees passed as stack pointer area
    s32 spD0, spD4, spE0, spE4, spF0;
    const char *p;
    S_Res *res;
    s32 ret;

    if ((arg1->unk08 ^ 0xC) == 0) {
        return 0;
    }

    res = 0;
    func_001E00E8(sp);

    switch (arg1->unk08) {
    case 0: {
        s32 v = 0;
        if (arg1->unk08 == 0) {
            v = *(s32 *)arg1->unk04;
        }
        res = (S_Res *)func_001E16B8(sp, arg1, v);
        break;
    }
    case 1: {
        f32 fv = 0.0f;
        if (arg1->unk08 == 1) {
            fv = *(f32 *)arg1->unk04;
        }
        res = (S_Res *)func_001E1778(sp, arg1, fv);
        break;
    }
    case 2: {
        s32 v = 0;
        if (arg1->unk08 == 2) {
            v = *(s32 *)arg1->unk04;
        }
        res = (S_Res *)func_001E1868(sp, arg1, v);
        break;
    }
    case 8:
        res = (S_Res *)func_001E1940(sp, arg1, func_001E5CC0(arg1));
        break;
    case 11:
        res = (S_Res *)func_001E1A00(sp, arg1, func_001E5DA8(arg1));
        break;
    case 3:
        res = (S_Res *)func_001E1AC0(sp, arg1, func_001E4D90(arg1));
        break;
    case 4:
        res = (S_Res *)func_001E1C10(sp, arg1, func_001E4DC8(arg1));
        break;
    case 9: {
        void *pv = NULL;
        if (arg1->unk08 == 9) {
            pv = arg1->unk04;
        }
        res = (S_Res *)func_001E1CD0(sp, arg1, pv);
        break;
    }
    case 5:
        res = (S_Res *)func_001E21B0(sp, arg1, func_001E5D70(arg1));
        break;
    case 6:
        res = (S_Res *)func_001E2090(sp, arg1, func_001E5D38(arg1));
        break;
    case 7:
        res = (S_Res *)func_001E1F88(sp, arg1, func_001E5D00(arg1));
        break;
    case 10: {
        s32 tmp;
        func_001D4040(&spD0, D_00476DF0);
        tmp = func_001E4D70(arg1, &spD0);
        res = (S_Res *)func_001E1E88(sp, arg1, tmp);
        break;
    }
    default:
        break;
    }

    if (res != NULL) {
        Vec *v = &res->vec;
        func_001D4040(&spD0, D_00476A78);
        if ((arg1->unk0C >> 2) & 1) {
            p = D_00476A40;
        } else {
            p = D_004769C0;
        }
        spE4 = 0;
        spE0 = spD0;
        func_001D2CD8(&spE4, (const char **)&p);
        if (v->end != v->cap) {
            if (v->end != NULL) {
                *(s32 *)v->end = spE0;
                func_001D2488((void *)((s8 *)v->end + 4), &spE4, v->end);
            }
            v->end = (void *)((s8 *)v->end + 8);
        } else {
            func_001EAE78(v, v->end, &spE0);
        }
        D_002AD390(&spE4);
        func_001D4040(&spF0, D_00476A88);
        if ((arg1->unk0C >> 1) & 1) {
            p = D_00476A40;
        } else {
            p = D_004769C0;
        }
        spD4 = 0;
        spD0 = spF0;
        func_001D2CD8(&spD4, (const char **)&p);
        if (v->end != v->cap) {
            if (v->end != NULL) {
                *(s32 *)v->end = spD0;
                func_001D2488((void *)((s8 *)v->end + 4), &spD4, v->end);
            }
            v->end = (void *)((s8 *)v->end + 8);
        } else {
            func_001EAE78(v, v->end, &spD0);
        }
        D_002AD390(&spD4);
    }

    return (s32)res;
}
