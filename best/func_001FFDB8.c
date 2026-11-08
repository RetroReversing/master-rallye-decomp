extern void *func_001E2460(void *p, int arg);
extern int func_001E28F8(void *p, char *name, int *out);
extern int func_001D4010(int *p);
extern void func_001D4810(void *dst, int val);
extern int func_001E2A48(void *p, char *name, float *out);
extern float func_003F3E80(float x);

extern char D_004783B8[];
extern char D_004783C8[];
extern char D_004783D8[];

int func_001FFDB8(void *arg0, int arg1, void *arg2)
{
    float sp0, sp4, sp8, _p0;
    float sp10, sp14, sp18, _p1;
    int sp20, _p20[3];
    float sp30, sp34, sp38, _p3;
    float sp40, sp44, sp48, _p4;
    float sp50, sp54, sp58, _p5;
    float sp60, sp64, sp68, _p6;
    float sp70, sp74, sp78, _p7;
    float sp80, sp84, sp88, _p8;
    float sp90, sp94, sp98, sp9C;
    char spA0[0x10];
    float f20;
    void *s2 = arg2;
    void *s0 = spA0;
    int *s1p;

    (void)arg0;
    func_001E2460(s0, arg1);
    s1p = &sp20;
    sp20 = 0;
    if (func_001E28F8(s0, D_004783B8, s1p) == 0)
        return 0;
    func_001D4810(s2, func_001D4010(s1p));

    if (func_001E2A48(s0, D_004783C8, &sp0) == 0)
        return 0;
    if (func_001E2A48(s0, D_004783D8, &sp10) == 0)
        return 0;

    {
        float *s1 = (float *)s2 + 16;
        float *s0f = &sp40;
        sp30 = sp10; sp34 = sp14; sp38 = sp18;
        f20 = 1.0f;
        sp88 = 0.0f; sp80 = 0.0f; sp84 = f20;

        s1[0]=sp0; s1[1]=sp4; s1[2]=sp8; s1[3]=f20;
        sp70=s1[0]; sp74=s1[1]; sp78=s1[2];
        sp50=sp80; sp54=sp84; sp58=sp88;
        sp60=sp30; sp64=sp34; sp68=sp38;

        s0f[0] = sp54*sp68 - sp64*sp58;
        s0f[1] = sp60*sp58 - sp50*sp68;
        s0f[2] = sp50*sp64 - sp54*sp60;
        {
            float len2 = s0f[0]*s0f[0] + s0f[1]*s0f[1] + s0f[2]*s0f[2];
            if (len2 <= 1.1920929e-7f) {
                s0f[0]=sp58; s0f[2]=sp58; s0f[1]=sp58;
            } else {
                float inv = f20 / func_003F3E80(len2);
                s0f[0]*=inv; s0f[1]*=inv; s0f[2]*=inv;
            }
        }

        sp50 = sp64*sp48 - sp68*sp44;
        sp54 = sp68*sp40 - sp60*sp48;
        sp58 = sp60*sp44 - sp64*sp40;
        {
            float len2 = sp50*sp50 + sp54*sp54 + sp58*sp58;
            if (len2 <= 1.1920929e-7f) {
                sp50=0.0f; sp54=0.0f; sp58=0.0f;
            } else {
                float inv = f20 / func_003F3E80(len2);
                sp50*=inv; sp54*=inv; sp58*=inv;
            }
        }

        sp94=0.0f; sp9C=0.0f; sp90=f20; sp98=0.0f;
        {
            float *r0=(float*)s2+4, *r1=(float*)s2+8, *r2=(float*)s2+12, *r3=s1;
            float z=sp94, o=sp90;
            r0[0]=o; r0[1]=z; r0[2]=sp98; r0[3]=sp9C;
            sp90=z; sp94=o; sp9C=z;
            r1[0]=sp90; r1[1]=sp94; r1[2]=sp98; r1[3]=sp9C;
            sp90=z; sp94=z; sp98=o; sp9C=z;
            r2[0]=sp90; r2[1]=sp94; r2[2]=sp98; r2[3]=sp9C;
            sp90=z; sp94=z; sp98=z; sp9C=o;
            r3[0]=sp90; r3[1]=sp94; r3[2]=sp98; r3[3]=sp9C;
            r0[0]=sp40; r0[1]=sp44; r0[2]=sp48; r0[3]=z;
            r1[0]=sp50; r1[1]=sp54; r1[2]=sp58; r1[3]=z;
            r2[0]=sp60; r2[1]=sp64; r2[2]=sp68; r2[3]=z;
            r3[0]=sp70; r3[1]=sp74; r3[2]=sp78; r3[3]=o;
        }
    }
    return 1;
}
