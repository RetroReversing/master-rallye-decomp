extern void func_0029EC50(void *arg0, s32 arg1, s32 arg2);

void func_0029EC30(void *arg0, s32 arg1) {
    func_0029EC50(arg0, arg1, 0);
}

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
        Obj_EBC8 *obj;
        Vtbl_EBC8 *vt;
        s32 ret;
        s->unk30 = arg1;
        s->unk5C = 1;
        o = (Obj_EBC8 **)func_0017E620();
        obj = *o;
        vt = obj->vt;
        ret = vt->unk24((void*)((char*)o + vt->unk20), s->unk30);
        sp0 = 0;
        func_001D4810(&sp0, ret);
        s->unk68 = sp0;
    }
}

extern void func_001D2CD8(void *arg0, char *arg1);

void func_0029ECB8(void *arg0) {
    typedef struct { char pad[0x44]; char unk44[1]; char pad2[0x17]; s32 unk5C; } S;
    S *s = (S *)arg0;
    func_001D2CD8(s->unk44, 0);
    s->unk5C = 1;
}

void func_0029EAD0(void *arg0, void *arg1) {
    typedef struct { char pad[0x18]; f32 x, y, z; char pad2[0x38]; s32 unk5C; } S;
    typedef struct { f32 x, y, z; } V;
    S *s = (S *)arg0;
    V *v = (V *)arg1;
    s32 equal = 0;
    if (s->x == v->x) {
        if (s->y == v->y) {
            if (s->z == v->z) {
                equal = 1;
            }
        }
    }
    if (equal == 0) {
        s->x = v->x;
        s->y = v->y;
        s->z = v->z;
        s->unk5C = 1;
    }
}
