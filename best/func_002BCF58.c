extern void func_0040AF58(void);
extern void func_002BC8F0(void *, void *);
extern void func_0040AFA0(void *);
extern void WakeupThread_2(s32);

struct S_inner {
    char pad[0x58];
    s32 f58;
    s32 f5c;
};
struct S_mid {
    char pad[0x8];
    struct S_inner *f08;
};
struct S_outer {
    char pad[0x1C];
    s32 f1c;
    s32 f20;
    char pad1[4];
    void *f28;
};

void func_002BCF58(void *arg0) {
    struct S_outer *s1;
    struct S_mid *pm;
    struct S_inner *t;
    void *p;
    s1 = arg0;
    for (;;) {
        p = s1->f28;
        if (p == 0) return;
        if (s1->f1c != 0) return;
        func_0040AF58();
        func_002BC8F0(p, &s1->f28);
        func_0040AFA0(p);
        pm = (struct S_mid *)p;
        t = pm->f08;
        if (t != NULL) {
            s1->f20++;
            t->f58 = 1;
            if (t->f5c != 0) {
                WakeupThread_2(t->f5c);
            }
        }
    }
}

extern void func_002BD8E0(void);
extern void func_002BCDA8(s32);
extern void func_002BCE48(void *);
extern void func_003F931C(s32, s32, s32);
extern void func_003F9698(s32, s32);
extern s32 D_0042D440;
extern char D_004806F8[];

struct S_002BD428 {
    char pad0[0x20];
    s32 f20;
    char pad1[4];
    void *f28;
    char pad2[0x10];
    s32 f3c;
    s32 f40;
    char pad3[4];
    s32 f4c;
    s32 f50;
    s32 f54;
    s32 f58;
};

s32 func_002BD428(void *arg1, void *arg2, s32 arg3) {
    s32 var_17;
    s32 temp_5;
    s32 temp_4;
    s32 temp_4_2;
    struct S_002BD428 *p;
    var_17 = 0;
    p = arg2;
    if (arg3 != 0) {
        func_002BD8E0();
    }
    if (p->f58 != 0) {
        temp_5 = p->f50;
        if (temp_5 != 0) {
            temp_4 = p->f4c;
            if (temp_4 != temp_5) {
                if (temp_4 == 0) {
                    func_003F9698((s32)&D_004806F8, temp_5);
                } else {
                    func_003F931C(temp_4, temp_5, p->f54);
                }
                func_002BCDA8(p->f50);
            }
        }
        temp_4_2 = p->f40;
        if ((temp_4_2 != 0) && (p->f3c != temp_4_2)) {
            func_002BCDA8(temp_4_2);
        }
        var_17 = 1;
        func_002BCE48(p);
        D_0042D440 = 0;
    }
    return var_17;
}
