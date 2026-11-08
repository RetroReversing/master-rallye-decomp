typedef struct {
    u16 d;
    u16 pad;
    s32 type;
} E8;

extern u8 D_004262D0[];

E8 *func_0037C0B8(E8 *first, E8 *last, E8 *result) {
    u8 *base = D_004262D0;
    while (first != last) {
        if (result != NULL) {
            result->d = first->d;
            result->type = first->type;
            if (first->type >= 0) {
                u8 *tbl = *(u8 **)base;
                u8 *objs = *(u8 **)(base + 0x24);
                u8 *obj = objs + (*(s32 *)(tbl + first->type * 4) << 3);
                *(s32 *)(obj + 4) += 1;
            }
        }
        first++;
        result++;
    }
    return result;
}

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    u16 d;
} E16;

E16 *func_0037C040(E16 *first, E16 *last, E16 *result) {
    while (first != last) {
        if (result != NULL) {
            result->a = first->a;
            result->b = first->b;
            result->c = first->c;
            result->d = first->d;
        }
        first++;
        result++;
    }
    return result;
}

extern s32 D_0042FB70;
extern u8 D_0049B830[];
extern char D_00486C90[];

void func_001D4040(void *, void *);
s32 func_001E4280(void);
s32 func_001E38C8(s32, void *);
void func_001E3EC0(s32, void *, s32);
void func_001E33C8(s32, void *, s32);
void func_001E3650(s32, void *);

void func_0037C758(void) {
    if (D_0042FB70 == 0) {
        func_001D4040(D_0049B830, D_00486C90);
        D_0042FB70 = 1;
    }
    if (func_001E38C8(func_001E4280(), D_0049B830) == 0) {
        func_001E3EC0(func_001E4280(), D_0049B830, 0x3E7);
        func_001E33C8(func_001E4280(), D_0049B830, 0);
    }
    func_001E3650(func_001E4280(), D_0049B830);
}

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
    void *fC;
    s32 f10;
} C808;

extern u8 D_00486CC0[];
void *D_002AD408(s32);

C808 *func_0037C808(void) {
    C808 *o = D_002AD408(0x14);
    o->f0 = -1;
    o->fC = D_00486CC0;
    o->f4 = 0;
    o->f8 = 0;
    o->f10 = 0;
    return o;
}
