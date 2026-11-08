#define spE0 frame.e0
#define spE4 frame.e4
#define spE8 frame.e8
#define spEC frame.ec
#define spF0 frame.f0
#define spF4 frame.f4
#define sp0 frame.slots[0]
#define sp4 frame.slots[1]
#define sp8 frame.slots[2]
#define sp10 frame.slots[4]
#define sp14 frame.slots[5]
#define sp18 frame.slots[6]
#define sp1C frame.slots[7]
#define sp20 frame.slots[8]
#define sp24 frame.slots[9]
#define sp28 frame.slots[10]
#define sp2C frame.slots[11]
#define sp30 frame.slots[12]
#define sp34 frame.slots[13]
#define sp38 frame.slots[14]
#define sp40 frame.slots[16]
#define sp44 frame.slots[17]
#define sp48 frame.slots[18]
#define sp50 frame.slots[20]
#define sp54 frame.slots[21]
#define sp58 frame.slots[22]
#define sp60 frame.slots[24]
#define sp64 frame.slots[25]
#define sp68 frame.slots[26]
#define sp70 frame.slots[28]
#define sp74 frame.slots[29]
#define sp78 frame.slots[30]
#define sp80 frame.slots[32]
#define sp84 frame.slots[33]
#define sp88 frame.slots[34]
#define sp90 frame.slots[36]
#define sp94 frame.slots[37]
#define sp98 frame.slots[38]
#define spA0 frame.slots[40]
#define spA4 frame.slots[41]
#define spA8 frame.slots[42]
#define spB0 frame.slots[44]
#define spB4 frame.slots[45]
#define spB8 frame.slots[46]
#define spC0 frame.slots[48]
#define spC4 frame.slots[49]
#define spC8 frame.slots[50]
#define spD0 frame.slots[52]
#define spD4 frame.slots[53]
#define spD8 frame.slots[54]
typedef struct Game{char pad[36];int unk24;}Game;
typedef struct Scale{int pad;float unk4;}Scale;typedef struct Shape{char pad[8];Scale*unk8;}Shape;
typedef struct VT{char pad[88];short unk58;short pad5a;int(*unk5C)(void*,int,float*,void*,float);short unk60;short pad62;Shape*(*unk64)(void*,int);}VT;
typedef struct Sys{char pad[8];VT**unk8;}Sys;
typedef struct Phys{int pad;void*unk4;char pad8[52];int unk3C;char pad40[24];float unk58;}Phys;
typedef struct Obj{char pad[12];Phys*unkC;char pad10[16];int unk20;int unk24;int unk28;}Obj;
#define F(p,o) (*(float*)((char*)(p)+(o)))
typedef struct Vec {float x,y,z;} Vec;typedef struct V {Vec *begin,*end,*cap;} V;typedef struct Tri{int tag,id;Vec a,b,c;}Tri;typedef struct TV{Tri*begin,*end,*cap;}TV;
extern V D_0040E8E0,D_0040E8F0;extern TV D_0040E900;extern Vec D_00426528;extern float D_004264A0,D_0044FE88;
void func_00151670(void*,void*);Game*func_001A12E0(void);void func_001C5A70(V*,Vec*,Vec*);void func_001CF448(Vec*);void func_001E9D80(int,int,Vec*,TV*);Sys*func_002015D8(void);int func_0021E9C0(int,void*);int func_0021F4B0(void);int func_002C3C48(void);
static inline void clearv(V*a){Vec *b=a->begin,*e=a->end,*i;int n=(char*)e-(char*)b;for(i=b;i<e;++i){}a->end=(Vec*)((char*)e-n);}
static inline void cleart(TV*a){Tri *b=a->begin,*e=a->end,*i;int n=(char*)e-(char*)b;for(i=b;i<e;++i){}a->end=(Tri*)((char*)e-n);}
void func_0017A150(Obj *arg0) {
    struct __attribute__((packed)) {volatile float slots[56];volatile int e0;float* volatile e4;void* volatile e8;void* volatile ec;void* volatile f0;float* volatile f4;} frame;
    Tri *temp_17_2;
    Tri *temp_3_2;
    Tri *var_3_3;
    Vec *temp_3_5;
    Vec *var_3;
    Vec *var_3_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    f32 temp_f0_5;
    f32 temp_f0_6;
    f32 temp_f0_7;
    f32 temp_f0_8;
    f32 temp_f0_9;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    f32 temp_f1_4;
    f32 temp_f1_5;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f2_3;
    f32 temp_f2_4;
    f32 temp_f2_5;
    f32 temp_f2_6;
    f32 temp_f2_7;
    f32 temp_f3;
    f32 temp_f3_10;
    f32 temp_f3_2;
    f32 temp_f3_3;
    f32 temp_f3_4;
    f32 temp_f3_5;
    f32 temp_f3_6;
    f32 temp_f3_7;
    f32 temp_f3_8;
    f32 temp_f3_9;
    f32 temp_f4;
    f32 temp_f4_2;
    f32 temp_f4_3;
    f32 temp_f4_4;
    f32 temp_f4_5;
    f32 temp_f4_6;
    f32 temp_f4_7;
    f32 temp_f5;
    f32 temp_f5_2;
    f32 temp_f5_3;
    f32 temp_f5_4;
    f32 temp_f5_5;
    f32 temp_f5_6;
    f32 temp_f5_7;
    f32 temp_f5_8;
    f32 temp_f6;
    f32 temp_f6_2;
    f32 temp_f6_3;
    f32 temp_f6_4;
    f32 temp_f7;
    f32 temp_f7_2;
    f32 temp_f7_3;
    f32 temp_f7_4;
    f32 temp_f7_5;
    f32 temp_f8;
    f32 temp_f8_2;
    f32 temp_f9;
    f32 var_f20;
    s16 temp_4_2;
    s32 temp_16;
    s32 temp_16_2;
    s32 temp_17;
    s32 temp_21;
    s32 temp_21_2;
    s32 temp_4;
    s32 var_18;
    s32 var_18_2;
    s32 var_30;
    s32 var_3_4;
    VT **temp_6;
    VT **temp_8;
    void *temp_16_3;
    void *temp_17_3;
    Phys *temp_19;
    void *temp_20;
    Shape *temp_2;
    VT *temp_3;
    VT *temp_3_3;
    void *temp_3_4;

    temp_19 = arg0->unkC;
    temp_20 = temp_19->unk4;
    spE8 = (char*)temp_19 + 0x40;
    spEC = (char*)temp_19 + 0x4C;
    clearv(&D_0040E8E0);
    clearv(&D_0040E8F0);
    temp_19->unk3C = 0;
    func_00151670(spE8, &D_0040E8E0);
    func_00151670(spEC, &D_0040E8F0);
    if (arg0->unk28 == 0) {
        arg0->unk28 = func_0021E9C0(func_0021F4B0(), (char*)arg0 + 0x24);
    }
    temp_17 = arg0->unk28;
    if (temp_17 != 0) {
        if (arg0->unk20 == 0) {
            arg0->unk20 = func_0021E9C0(func_0021F4B0(), (char*)arg0 + 0x1C);
        }
        temp_16 = arg0->unk20;
        spE0 = temp_16;
        if (temp_16 != 0) {
            temp_6 = func_002015D8()->unk8;
            temp_3 = *temp_6;
            temp_2 = temp_3->unk64((char*)temp_6 + temp_3->unk60, spE0);
            if (temp_2 != NULL) {
                spF0 = temp_20 + 0xA0;
                spF4 = &sp10;
                cleart(&D_0040E900);
                var_30 = -1;
                var_18 = 0;
                temp_f0 = temp_2->unk8->unk4;
                temp_f4 = D_00426528.z * temp_f0;
                temp_f3 = D_00426528.y * temp_f0;
                temp_f5 = D_00426528.x * temp_f0;
                sp18 = temp_f4;
                sp14 = temp_f3;
                sp10 = temp_f5;
                sp4 = F(spF0,0x4) - temp_f3;
                sp8 = F(spF0,0x8) - temp_f4;
                sp0 = F(temp_20,0xA0) - temp_f5;
                temp_4 = func_002C3C48();
                sp10 = sp0;
                sp14 = sp4;
                sp18 = sp8;
                func_001E9D80(temp_4, temp_17, (Vec *) spF4, &D_0040E900);
                temp_21 = (D_0040E900.end - D_0040E900.begin);
                var_f20 = D_0044FE88;
                if (temp_21 > 0) {
                    spE4 = &sp20;
                    do {
                        temp_17_2 = &D_0040E900.begin[var_18];
                        temp_16_2 = temp_17_2->id;
                        if (temp_16_2 == func_001A12E0()->unk24) {
                            temp_f8 = temp_17_2->a.x;
                            sp10 = temp_f8;
                            temp_f2 = temp_17_2->a.y;
                            sp14 = temp_f2;
                            temp_f5_2 = temp_17_2->a.z;
                            sp18 = temp_f5_2;
                            temp_f7 = temp_17_2->c.x;
                            sp40 = temp_f7;
                            temp_f7_2 = temp_f8 - temp_f7;
                            temp_f3_2 = temp_17_2->c.y;
                            sp44 = temp_f3_2;
                            temp_f3_3 = temp_f2 - temp_f3_2;
                            temp_f4_2 = temp_17_2->c.z;
                            sp48 = temp_f4_2;
                            temp_f4_3 = temp_f5_2 - temp_f4_2;
                            temp_f0_2 = temp_17_2->b.x;
                            sp50 = temp_f0_2;
                            temp_f8_2 = temp_f8 - temp_f0_2;
                            temp_f1 = temp_17_2->b.y;
                            temp_f2_2 = temp_f2 - temp_f1;
                            sp54 = temp_f1;
                            temp_f0_3 = temp_17_2->b.z;
                            sp74 = temp_f3_3;
                            temp_f5_3 = temp_f5_2 - temp_f0_3;
                            sp58 = temp_f0_3;
                            sp78 = temp_f4_3;
                            sp84 = temp_f2_2;
                            sp88 = temp_f5_3;
                            sp20 = 0.0f;
                            sp98 = (temp_f7_2 * temp_f2_2) - (temp_f3_3 * temp_f8_2);
                            sp24 = 0.0f;
                            sp28 = 0.0f;
                            sp70 = temp_f7_2;
                            sp80 = temp_f8_2;
                            sp94 = (temp_f4_3 * temp_f8_2) - (temp_f7_2 * temp_f5_3);
                            sp90 = (temp_f3_3 * temp_f5_3) - (temp_f4_3 * temp_f2_2);
                            func_001CF448((Vec *) &sp90);
                            sp20 = sp90;
                            sp60 = sp90;
                            sp24 = sp94;
                            sp28 = sp98;
                            sp64 = sp94;
                            sp68 = sp98;
                            sp2C = -((sp90 * sp40) + (sp94 * sp44) + (sp98 * sp48));
                            (*(int*)((char*)spE4+16)) = -1;
                            temp_f1_2 = (sp20 * sp0) + (sp24 * sp4) + (sp28 * sp8) + sp2C;
                            var_3_4 = 0;
                            if (D_004264A0 <= temp_f1_2) {
                                var_3_4 = 1;
                            } else if (temp_f1_2 <= -D_004264A0) {
                                var_3_4 = -1;
                            }
                            if (var_3_4 == -1) {
                                temp_f0_4 = -((sp20 * sp0) + (sp24 * sp4) + (sp28 * sp8) + sp2C);
                                if (temp_f0_4 < var_f20) {
                                    var_f20 = temp_f0_4;
                                    var_30 = var_18;
                                }
                            }
                        }
                        var_18 += 1;
                    } while (var_18 < temp_21);
                }
                temp_19->unk3C = 0;
                if (var_30 >= 0) {
                    temp_3_2 = &D_0040E900.begin[var_30];
                    temp_f4_4 = temp_3_2->a.x;
                    sp30 = temp_f4_4;
                    temp_f2_3 = temp_3_2->a.y;
                    sp34 = temp_f2_3;
                    temp_f3_4 = temp_3_2->a.z;
                    sp38 = temp_f3_4;
                    temp_f7_3 = temp_3_2->c.x;
                    sp40 = temp_f7_3;
                    temp_f7_4 = temp_f4_4 - temp_f7_3;
                    temp_f5_4 = temp_3_2->c.y;
                    sp44 = temp_f5_4;
                    temp_f5_5 = temp_f2_3 - temp_f5_4;
                    temp_f6 = temp_3_2->c.z;
                    sp48 = temp_f6;
                    temp_f6_2 = temp_f3_4 - temp_f6;
                    temp_f0_5 = temp_3_2->b.x;
                    sp50 = temp_f0_5;
                    temp_f4_5 = temp_f4_4 - temp_f0_5;
                    temp_f1_3 = temp_3_2->b.y;
                    temp_f2_4 = temp_f2_3 - temp_f1_3;
                    sp54 = temp_f1_3;
                    temp_f0_6 = temp_3_2->b.z;
                    spB4 = temp_f5_5;
                    temp_f3_5 = temp_f3_4 - temp_f0_6;
                    sp58 = temp_f0_6;
                    spC0 = temp_f4_5;
                    spC4 = temp_f2_4;
                    spC8 = temp_f3_5;
                    sp10 = 0.0f;
                    spD8 = (temp_f7_4 * temp_f2_4) - (temp_f5_5 * temp_f4_5);
                    sp14 = 0.0f;
                    sp18 = 0.0f;
                    spB0 = temp_f7_4;
                    spB8 = temp_f6_2;
                    spD4 = (temp_f6_2 * temp_f4_5) - (temp_f7_4 * temp_f3_5);
                    spD0 = (temp_f5_5 * temp_f3_5) - (temp_f6_2 * temp_f2_4);
                    func_001CF448((Vec *) &spD0);
                    spA0 = spD0;
                    spA4 = spD4;
                    spA8 = spD8;
                    sp10 = spD0;
                    sp14 = spD4;
                    sp18 = spD8;
                    sp1C = -((spD0 * sp40) + (spD4 * sp44) + (spD8 * sp48));
                    (*(int*)((char*)spF4+16)) = -1;
                    temp_8 = func_002015D8()->unk8;
                    temp_3_3 = *temp_8;
                    temp_4_2 = temp_3_3->unk58;
                    sp30 = sp10;
                    sp34 = sp14;
                    sp38 = sp18;
                    if (temp_3_3->unk5C((char*)temp_8 + temp_4_2, spE0, &sp30, &D_0040E8E0, sp1C) != 0) {
                        temp_3_4 = (char*)temp_19 + 0x58;
                        temp_19->unk3C = 1;
                        var_18_2 = 0;
                        temp_19->unk58 = sp10;
                        F(temp_3_4,0x4) = sp14;
                        F(temp_3_4,0x8) = sp18;
                        func_00151670(spE8, &D_0040E8E0);
                        temp_21_2 = (D_0040E8E0.end - D_0040E8E0.begin);
                        if (temp_21_2 > 0) {
                            temp_17_3 = temp_20 + 0x128;
                            temp_16_3 = temp_20 + 0x11C;
                            do {
                                temp_3_5 = &D_0040E8E0.begin[var_18_2];
                                temp_f3_6 = temp_3_5->x;
                                sp40 = temp_f3_6;
                                temp_f5_6 = temp_3_5->y;
                                sp44 = temp_f5_6;
                                temp_f4_6 = temp_3_5->z;
                                sp48 = temp_f4_6;
                                temp_f3_7 = temp_f3_6 - F(temp_20,0xA0);
                                temp_f5_7 = temp_f5_6 - F(spF0,0x4);
                                temp_f4_7 = temp_f4_6 - F(spF0,0x8);
                                sp70 = temp_f3_7;
                                sp74 = temp_f5_7;
                                sp78 = temp_f4_7;
                                temp_f2_5 = F(temp_17_3,0x4);
                                temp_f1_4 = F(temp_17_3,0x8);
                                temp_f0_7 = F(temp_20,0x128);
                                temp_f3_8 = (temp_f1_4 * temp_f3_7) - (temp_f0_7 * temp_f4_7);
                                temp_f6_3 = (temp_f0_7 * temp_f5_7) - (temp_f2_5 * temp_f3_7);
                                temp_f2_6 = (temp_f2_5 * temp_f4_7) - (temp_f1_4 * temp_f5_7);
                                sp64 = temp_f3_8;
                                sp68 = temp_f6_3;
                                sp60 = temp_f2_6;
                                temp_f9 = F(temp_20,0x11C) + temp_f2_6;
                                temp_f7_5 = F(temp_16_3,0x4) + temp_f3_8;
                                temp_f6_4 = F(temp_16_3,0x8) + temp_f6_3;
                                sp50 = temp_f9;
                                sp54 = temp_f7_5;
                                temp_f5_8 = (temp_f9 * sp10) + (temp_f7_5 * sp14) + (temp_f6_4 * sp18);
                                sp58 = temp_f6_4;
                                if (temp_f5_8 < 0.0f) {
                                    temp_f0_8 = 2.0f * sp10;
                                    temp_f3_9 = 2.0f * sp18;
                                    temp_f2_7 = 2.0f * sp14;
                                    sp80 = temp_f0_8;
                                    sp88 = temp_f3_9;
                                    sp84 = temp_f2_7;
                                    temp_f3_10 = temp_f9 - (temp_f0_8 * temp_f5_8);
                                    temp_f0_9 = temp_f6_4 - (temp_f3_9 * temp_f5_8);
                                    temp_f1_5 = temp_f7_5 - (temp_f2_7 * temp_f5_8);
                                    sp60 = temp_f3_10;
                                    sp78 = temp_f0_9;
                                    sp74 = temp_f1_5;
                                    sp64 = temp_f1_5;
                                    sp68 = temp_f0_9;
                                    sp70 = temp_f3_10;
                                    if (D_0040E8F0.end != D_0040E8F0.cap) {
                                        if (D_0040E8F0.end != NULL) {
                                            D_0040E8F0.end->x = temp_f3_10;
                                            goto block_39;
                                        }
                                        goto block_40;
                                    }
                                    func_001C5A70(&D_0040E8F0, D_0040E8F0.end, (Vec *) &sp70);
                                } else {
                                    sp74 = temp_f7_5;
                                    sp78 = temp_f6_4;
                                    sp60 = temp_f9;
                                    sp64 = temp_f7_5;
                                    sp68 = temp_f6_4;
                                    sp70 = temp_f9;
                                    if (D_0040E8F0.end != D_0040E8F0.cap) {
                                        if (D_0040E8F0.end != NULL) {
                                            D_0040E8F0.end->x = temp_f9;
block_39:
                                            D_0040E8F0.end->y = sp74;
                                            D_0040E8F0.end->z = sp78;
                                        }
block_40:
                                        D_0040E8F0.end += 1;
                                    } else {
                                        func_001C5A70(&D_0040E8F0, D_0040E8F0.end, (Vec *) &sp70);
                                    }
                                }
                                var_18_2 += 1;
                            } while (var_18_2 < temp_21_2);
                        }
                        func_00151670(spEC, &D_0040E8F0);
                    }
                }
            }
        }
    }
}
