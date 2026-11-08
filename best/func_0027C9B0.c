typedef struct {
    unsigned char pad0[0x20];
    float unk20;
    unsigned char pad24[0xE0];
    float unk104;
    float unk108;
    float unk10C;
    unsigned char pad110[0xC];
    float unk11C;
    float unk120;
    float unk124;
} S_0027C9B0_a0;

typedef struct {
    float x;
    float y;
    float z;
} Vec3f;

void func_0027C9B0(S_0027C9B0_a0 *arg0, Vec3f *arg1) {
    Vec3f tmp;
    float *p11C = &arg0->unk11C;
    float *p104 = &arg0->unk104;
    float scale;
    float fx, fy, fz;

    arg0->unk11C = arg1->x;
    p11C[1] = arg1->y;
    p11C[2] = arg1->z;
    scale = arg0->unk20;
    fx = arg0->unk11C;
    fz = p11C[2] * scale;
    fx = fx * scale;
    fy = p11C[1] * scale;
    tmp.z = fz;
    p104[0] = fx;
    tmp.x = fx;
    tmp.y = fy;
    p104[1] = fy;
    p104[2] = tmp.z;
}
