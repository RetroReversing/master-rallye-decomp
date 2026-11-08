typedef struct SemaParam {
    s32 attr;
    s32 init;
    s32 max;
    s32 option;
} SemaParam;

typedef struct Unk16 {
    s32 unk0;
    s32 unk4;
} Unk16;

extern s32 CreateSema_2(SemaParam *param);
extern void DeleteSema_2(s32 sema);
extern void SignalSema_2(s32 sema);
extern void WaitSema_2(s32 sema);
extern s32 func_00405E90(void *a0, s32 a1, s32 a2, void *a3, s32 a4, void *a5, s32 a6, s32 a7, void *a8);
extern Unk16 *func_00406698(void);
extern void func_00406B18(s32 arg0);
extern void func_00406B48(void);

extern s32 D_00441128[];
extern s32 D_004411A8;
extern s32 D_004411B4;
extern s32 D_0049FF80[];
extern s32 D_004A0BC0[];
extern char D_004A1040[];
extern void D_004A1240;

s64 func_00409430(s64 arg1, s32 arg2) {
    s64 a1;
    s32 a2;
    s32 *base_hi;
    Unk16 *r;
    s32 *base;
    s32 sema;
    s64 result;
    s32 flags;
    SemaParam sp;
    s32 *resp;
    void *p1240;
    s32 i;
    s32 v;

    a1 = arg1;
    a2 = arg2;
    base_hi = D_0049FF80;
    base = D_0049FF80;
    r = func_00406698();
    func_00406B18(0x16);
    if (D_004411A8 == 0) {
        func_00406B48();
        return -1;
    }
    if (r == 0) {
        func_00406B48();
        return -9;
    }
    flags = r->unk4;
    if (flags == 0) {
        func_00406B48();
        return -9;
    }

    ((s64 *)base)[2] = a1;
    base[3] = r->unk0;
    base[6] = a2;
    base[7] = ((s32)((char *)r - D_004A1040)) >> 4;

    sp.attr = 1;
    sp.init = 1;
    sp.max = 0;
    sp.option = 0;
    sema = CreateSema_2(&sp);

    base[2] = 8;
    base[1] = (s32)(u32)&result;
    base_hi[0] = sema;

    if (flags & 0x8000) {
        WaitSema_2(D_004411B4);
        if (D_00441128[0] == -1) {
            resp = (s32 *)0x4A0000;
            D_00441128[0] = base_hi[0];
            base_hi[0] = -base_hi[0];
        } else {
            resp = D_004A0BC0;
            i = 1;
            while (i < 0x20) {
                if (D_00441128[i] == -1) {
                    D_00441128[i] = base_hi[0];
                    base_hi[0] = -base_hi[0];
                    break;
                }
                i++;
            }
        }
        SignalSema_2(D_004411B4);
        resp = D_004A0BC0;
    } else {
        p1240 = &D_004A1240;
        resp = D_004A0BC0;
    }
    p1240 = &D_004A1240;

    if (func_00405E90(p1240, 0x16, 0, base, 0x20, resp, 4, 0, 0) < 0) {
        DeleteSema_2(sema);
        func_00406B48();
        return -11;
    }
    v = *(volatile s32 *)((u32)resp | 0x20000000);
    func_00406B48();
    if (v == 0) {
        DeleteSema_2(sema);
        return -11;
    }
    if (flags & 0x8000) {
        DeleteSema_2(sema);
        return 0;
    }
    WaitSema_2(sema);
    DeleteSema_2(sema);
    return result;
}
