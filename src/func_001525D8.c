typedef struct { f32 x, y, z, w; } V4_1525;
typedef struct { V4_1525 v0, v1, v2, v3; } M4_1525;

void func_001525D8(M4_1525 *arg0, M4_1525 *arg1, f32 fparg0) {
    V4_1525 *temp_2 = &arg0->v1;
    V4_1525 *temp_3 = &arg1->v1;
    V4_1525 *temp_6 = &arg0->v2;
    V4_1525 *temp_7 = &arg1->v2;
    V4_1525 *temp_8 = &arg0->v3;
    V4_1525 *temp_9 = &arg1->v3;

    arg1->v0.x = arg0->v0.x * fparg0;
    arg1->v0.y = arg0->v0.y * fparg0;
    arg1->v0.z = arg0->v0.z * fparg0;
    arg1->v1.x = arg0->v1.x * fparg0;
    temp_3->y = temp_2->y * fparg0;
    temp_3->z = temp_2->z * fparg0;
    arg1->v2.x = arg0->v2.x * fparg0;
    temp_7->y = temp_6->y * fparg0;
    temp_7->z = temp_6->z * fparg0;
    arg1->v3.x = arg0->v3.x * fparg0;
    temp_9->y = temp_8->y * fparg0;
    temp_9->z = temp_8->z * fparg0;
}

typedef struct {
    s32 ptr;
    s32 len;
} Buf_152688;

typedef struct {
    Buf_152688 b0;
    s32 pad0;
    Buf_152688 b1;
    s32 pad1[2];
    s32 flag;
} S_152688;

extern void func_003F93CC(s32, s32, s32);

void func_00152688(S_152688 *p) {
    Buf_152688 *q;
    s32 s, e;
    q = &p->b1;
    e = q->len;
    s = q->ptr;
    func_003F93CC(s, e, 0);
    q->len = q->len - (e - s);
    e = p->b0.len;
    s = p->b0.ptr;
    func_003F93CC(s, e, 0);
    p->flag = 1;
    p->b0.len = p->b0.len - (e - s);
}
