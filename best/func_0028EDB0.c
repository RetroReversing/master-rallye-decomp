extern void *D_002AD408(int);
extern void *func_00205BF8(void *);
extern void func_00205CE0(void *, int);
extern void func_002062A8(void *, void *, void *, void *, void *, void *, void *, void *);
extern void func_0021E540(void *, void *);

int func_0028EDB0(void *arg0, void *arg1, float f12, float f13)
{
    float m0[4];
    float m1[4];
    float m2[4];
    float m3[4];
    float t[4];
    void *obj;
    void *a2, *v1, *a3, *v0, *t0, *t1, *t2, *t3;
    float one, f0, f1, f2;

    if (arg0 != 0) {
        obj = *(void **)((char *)arg0 + 0x4C);
        if (obj != 0) {
            t[1] = 0.0f;
            goto L;
        }
        obj = func_00205BF8(D_002AD408(0x90));
        func_0021E540(arg0, obj);
        t[1] = 0.0f;
    L:
        a2 = t;
        one = 1.0f;
        v1 = m1;
        f2 = t[1];
        a3 = m2;
        t[3] = 0.0f;
        v0 = m3;
        t[0] = f2;
        t0 = (char *)obj + 0x20;
        t[2] = 0.0f;
        t1 = (char *)obj + 0x30;
        m0[0] = one;
        t2 = (char *)obj + 0x40;
        m0[1] = f2;
        t3 = (char *)obj + 0x50;
        m0[2] = f2;
        m0[3] = f2;
        ((float *)a2)[1] = one;
        t[3] = f2;
        f0 = t[0];
        f1 = t[1];
        t[2] = f2;
        m1[0] = f0;
        ((float *)v1)[1] = f1;
        f0 = t[2];
        ((float *)v1)[2] = f0;
        f1 = t[3];
        ((float *)v1)[3] = f1;
        t[0] = f2;
        t[1] = f2;
        ((float *)a2)[2] = one;
        t[3] = f2;
        f0 = t[0];
        f1 = t[1];
        m2[0] = f0;
        ((float *)a3)[1] = f1;
        f0 = t[2];
        ((float *)a3)[2] = f0;
        f1 = t[3];
        ((float *)a3)[3] = f1;
        t[0] = f2;
        t[1] = f2;
        t[2] = f2;
        ((float *)a2)[3] = one;
        f0 = t[0];
        f1 = t[1];
        m3[0] = f0;
        ((float *)v0)[1] = f1;
        f0 = t[2];
        ((float *)v0)[2] = f0;
        f1 = t[3];
        ((float *)v0)[3] = f1;
        t[2] = f2;
        m3[0] = f12;
        t[0] = f12;
        t[1] = f13;
        ((float *)v0)[1] = f13;
        ((float *)v0)[3] = one;
        ((float *)v0)[2] = t[2];
        *(float *)((char *)t0 + 0) = m0[0];
        *(float *)((char *)t0 + 4) = m0[1];
        *(float *)((char *)t0 + 8) = m0[2];
        *(float *)((char *)t0 + 12) = m0[3];
        *(float *)((char *)t1 + 0) = m1[0];
        *(float *)((char *)t1 + 4) = ((float *)v1)[1];
        *(float *)((char *)t1 + 8) = ((float *)v1)[2];
        *(float *)((char *)t1 + 12) = ((float *)v1)[3];
        *(float *)((char *)t2 + 0) = m2[0];
        *(float *)((char *)t2 + 4) = ((float *)a3)[1];
        *(float *)((char *)t2 + 8) = ((float *)a3)[2];
        *(float *)((char *)t2 + 12) = ((float *)a3)[3];
        *(float *)((char *)t3 + 0) = m3[0];
        *(float *)((char *)t3 + 4) = ((float *)v0)[1];
        *(float *)((char *)t3 + 8) = ((float *)v0)[2];
        *(float *)((char *)t3 + 12) = ((float *)v0)[3];
        func_002062A8(obj, arg1, a2, a3, t0, t1, t2, t3);
        func_00205CE0(obj, 0);
        return 1;
    }
    return 0;
}
