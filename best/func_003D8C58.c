typedef struct A {
    int flags;
    int unk4;
    int unk8;
    int unkC;
} A;

typedef struct B {
    char pad[4];
    A *unk4;
    int unk8;
} B;

extern void func_003D7DE0(A *);
extern void func_003D7E18(A *);

int func_003D8C58(int arg0, B *arg1) {
    A *s0 = arg1->unk4;
    if (s0 != (A *)arg0) {
        return -1;
    }
    int v1 = arg1->unk8;
    int v0;
    if (v1 >= 0) {
        v0 = s0->flags;
        if (v0 & 0x100) {
            func_003D7DE0(s0);
            v0 = s0->unkC;
        } else {
            v0 = s0->unkC;
        }
    } else {
        v0 = s0->flags;
        if (!(v0 & 0x100)) {
            func_003D7E18(s0);
        }
        v0 = s0->unk8;
    }
    s0->unk4 = v0 + v1;
    return 0;
}
