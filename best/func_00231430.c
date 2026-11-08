extern f32 sqrtf(f32);
extern f32 func_003F3E80(f32);

s32 func_00231430(void *arg0, void *arg1, f32 a3) {
    f32 *p0;
    f32 *p1;
    f32 *p17;
    f32 sp[12];
    f32 v1, v2, v3, v4, v5, v6, v7, v8;
    f32 a, b, c, len2, dot2, cterm, disc, sqrtD, t1, t2, tmp;
    f32 *p18, *p24;
    
    p0 = (f32 *)arg0;
    p1 = (f32 *)arg1;
    p17 = (f32 *)(arg0 + 0xC);
    
    v1 = p1[0] - p17[3];
    v2 = p1[1] - p17[1];
    v3 = p1[2] - p17[2];
    v4 = p0[3] - p1[0];
    v5 = p17[0] - p1[0];
    v6 = p1[0] - p17[0];
    v7 = p1[1] - p17[1];
    v8 = p1[2] - p17[2];
    
    sp[0] = v1; sp[1] = v2; sp[2] = v3;
    sp[3] = v4; sp[4] = v5; sp[5] = v6;
    sp[6] = v7; sp[7] = v8;
    
    a = p0[0]; b = p0[1]; c = p0[2];
    len2 = a*a + b*b + c*c;
    dot2 = 2.0f * ((p0[3] - p1[0])*a + (p17[1] - p1[1])*b + (p1[2] - p17[2])*c);
    cterm = ((p1[0] - p17[0])*(p1[0] - p17[0]) + (p1[1] - p17[1])*(p1[1] - p17[1]) + (p1[2] - p17[2])*(p1[2] - p17[2])) - a3*a3;
    
    disc = dot2*dot2 - 4.0f*len2*cterm;
    if (disc <= 0.0f) {
        return 0;
    }
    if (disc != disc) {
        disc = sqrtf(disc);
    }
    sqrtD = disc;
    t1 = (-dot2 + sqrtD) * 0.5f / len2;
    t2 = (-dot2 - sqrtD) * 0.5f / len2;
    if (sqrtD != sqrtD) {
        t2 = func_003F3E80(disc);
    }
    if (t1 < t2) {
        tmp = t1; t1 = t2; t2 = tmp;
    }
    
    p18 = (f32 *)(arg0 + 0x18);
    p24 = (f32 *)(arg0 + 0x24);
    
    p0[6] = p0[3] + a*t1;
    p18[0] = p17[1] + b*t1;
    p18[1] = p17[2] + c*t1;
    p18[2] = p0[3] + a*t1;
    
    p0[9] = p0[3] + a*t2;
    p24[0] = p17[1] + b*t2;
    p24[1] = p17[2] + c*t2;
    p24[2] = p0[3] + a*t2;
    return 1;
}
