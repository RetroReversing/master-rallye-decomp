extern void **func_0017E620(void);
extern void func_001D4810(void *arg0, s32 arg1);

typedef struct { s16 unk20; s32 (*unk24)(void*, s32); } Vtbl_EBC8;
typedef struct { Vtbl_EBC8 *vt; } Obj_EBC8;

void func_0029EBC8(void *arg0, s32 arg1) {
    typedef struct { char pad[0x30]; s32 unk30; char pad2[0x28]; s32 unk5C; char pad3[8]; s32 unk68; } S;
    S *s = (S *)arg0;
    s32 sp0;
    if (s->unk30 != arg1) {
        Obj_EBC8 **o;
        void *retp;
        s32 ret;
        s->unk30 = arg1;
        s->unk5C = 1;
        o = (Obj_EBC8 **)func_0017E620();
        {
            Obj_EBC8 *obj = *o;
            Vtbl_EBC8 *vt = obj->vt;
            retp = (void*)((char*)o + vt->unk20);
            ret = vt->unk24(retp, s->unk30);
        }
        sp0 = 0;
        func_001D4810(&sp0, ret);
        s->unk68 = sp0;
    }
}

void func_0029EAD0(void *arg0, void *arg1) {
    typedef struct { char pad[0x18]; f32 x, y, z; char pad2[0x38]; s32 unk5C; } S;
    typedef struct { f32 x, y, z; } V;
    S *s = (S *)arg0;
    V *v = (V *)arg1;
    f32 *p = (f32 *)((char *)s + 0x18);
    s32 equal = 0;
    if (*p == v->x) {
        if (*(p + 1) == v->y) {
            if (*(p + 2) == v->z) {
                equal = 1;
            }
        }
    }
    if (equal == 0) {
        f32 *q = (f32 *)((char *)s + 0x18);
        *q = v->x;
        *(q + 1) = v->y;
        *(q + 2) = v->z;
        s->unk5C = 1;
    }
}
