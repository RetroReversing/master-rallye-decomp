extern int D_002AD408(int);
extern void *func_00205BF8(int);
extern void func_0021E540(void *, void *);
extern int func_001D65A0(void *, void *, void *, void *, void *, void *, void *, void *);
extern void func_002062A8(void *, void *);
extern void func_001D65D0(int);
extern void func_001D6588(void *, int);
extern unsigned char D_004262B0[16];

int func_0028EFC8(void *a0, void *a1, void *a2, int a3, float f12, float f13) {
    float m0[4], m1[4], m2[4], m3[4], t[4];
    void *obj;
    void *pa3, *pv1, *pa2, *pv0;
    void *pt0, *pt1, *pt2, *pt3;
    void *ps1;
    float f3, f2;
    int ret;

    (void)a0;
    if (a1 == 0) return 0;

    obj = *(void **)((char *)a1 + 0x4C);
    if (obj == 0) {
        obj = func_00205BF8(D_002AD408(0x90));
        func_0021E540(a1, obj);
    }
    t[1] = 0.0f;

    pa3 = t;
    f3 = 1.0f;
    pv1 = m1;
    f2 = t[1];
    pa2 = m2;
    t[3] = 0.0f;
    pv0 = m3;
    t[0] = f2;
    pt0 = (char *)obj + 0x20;
    t[2] = 0.0f;
    pt1 = (char *)obj + 0x30;
    m0[0] = f3;
    pt2 = (char *)obj + 0x40;
    m0[1] = f2;
    pt3 = (char *)obj + 0x50;
    m0[2] = f2;
    ps1 = D_004262B0;
    m0[3] = f2;

    ((float*)pa3)[1] = f3;
    t[3] = f2;
    m1[0]=t[0]; ((float*)pv1)[1]=t[1]; ((float*)pv1)[2]=t[2]; ((float*)pv1)[3]=t[3];
    t[0]=f2; t[1]=f2;
    ((float*)pa3)[2]=f3;
    t[3]=f2;
    m2[0]=t[0]; ((float*)pa2)[1]=t[1]; ((float*)pa2)[2]=t[2]; ((float*)pa2)[3]=t[3];
    t[0]=f2; t[1]=f2; t[2]=f2;
    ((float*)pa3)[3]=f3;
    m3[0]=t[0]; ((float*)pv0)[1]=t[1]; ((float*)pv0)[2]=t[2]; ((float*)pv0)[3]=t[3];
    t[2]=f2;
    m3[0]=f12; t[0]=f12; t[1]=f13;
    ((float*)pv0)[1]=f13; ((float*)pv0)[3]=f3; ((float*)pv0)[2]=t[2];

    *(float*)((char*)pt0+0)=m0[0]; *(float*)((char*)pt0+4)=m0[1]; *(float*)((char*)pt0+8)=m0[2]; *(float*)((char*)pt0+12)=m0[3];
    *(float*)((char*)pt1+0)=m1[0]; *(float*)((char*)pt1+4)=((float*)pv1)[1]; *(float*)((char*)pt1+8)=((float*)pv1)[2]; *(float*)((char*)pt1+12)=((float*)pv1)[3];
    *(float*)((char*)pt2+0)=m2[0]; *(float*)((char*)pt2+4)=((float*)pa2)[1]; *(float*)((char*)pt2+8)=((float*)pa2)[2]; *(float*)((char*)pt2+12)=((float*)pa2)[3];
    *(float*)((char*)pt3+0)=m3[0]; *(float*)((char*)pt3+4)=((float*)pv0)[1]; *(float*)((char*)pt3+8)=((float*)pv0)[2]; *(float*)((char*)pt3+12)=((float*)pv0)[3];

    ret = func_001D65A0(ps1, obj, pa2, pa3, pt0, pt1, pt2, pt3);
    func_002062A8(obj, a2);
    func_001D65D0(a3);
    func_001D6588(ps1, ret);
    return 1;
}
