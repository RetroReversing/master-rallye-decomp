#define I(p,o) (*(s32*)((char*)(p)+(o)))
#define U(p,o) (*(u32*)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))
extern s32 func_001D5F70(void),func_001D5EB0(s32,s32,s32),func_003FA9B8(const char*);
extern float func_003F3978(float,float);
extern void func_002060F8(void*),func_002062A8(void*,void*),func_002063A0(void*,void*);
extern s32 func_00205D60(void*,s32*);
typedef struct {float x,y,z,w;} Vec;
typedef struct {float x,y,z,w;} __attribute__((packed)) Packed;
static inline Vec *setv(Vec*p,float x,float y,float z,float w){p->x=x;p->y=y;p->z=z;p->w=w;return p;}
static inline void cp(Vec*p,const Vec*q){p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;}
static inline void identity(char*u,Vec*t){setv(t,1,0,0,0);cp((Vec*)(u+32),t);setv(t,0,1,0,0);cp((Vec*)(u+48),t);setv(t,0,0,1,0);cp((Vec*)(u+64),t);setv(t,0,0,0,1);cp((Vec*)(u+80),t);}
static inline void identityM(Vec*m,Vec*t){setv(t,1,0,0,0);cp(m,t);setv(t,0,1,0,0);cp(m+1,t);setv(t,0,0,1,0);cp(m+2,t);setv(t,0,0,0,1);cp(m+3,t);}
static inline void color(char*u,char*a){cp((Vec*)(u+16),(Vec*)(a+48));I(u,136)++;}
static inline void pos(char*u,Vec*t,Vec*b,float x,float y){t->x=x;t->y=y;t->z=b->z;{Vec*p=(Vec*)(u+80);p->x=t->x;p->y=t->y;p->z=t->z;p->w=1;}}
static inline void draw(char*u,const char*s){char*v=P(u,0);((void(*)(void*,const char*))P(v,20))(u+*(s16*)(v+16),s);}
void func_00143828(char*a,char*b){
 struct {float base[4];Vec t;char c1[16];Vec p1;char c2[16];Vec p2;s32 unknown[4];} local;
 char*u=P(b,76);float f,g,h,scale,spread,half,step,alpha; s32 i,n,k; s32 duration,next,exitDuration; float enterTime,leaveTime; float waitTime,cycles;
 if(!u)return;next=6;duration=25;exitDuration=30;enterTime=25;leaveTime=30;waitTime=240;cycles=10;
 local.base[0]=320;local.base[1]=410;local.base[2]=0;
 switch(U(a,64)){
 case 0:{float f0,g0,h0,scale0,spread0,half0,step0,alpha0;s32 i0,n0,k0;
 k0=I(a,72)+1;I(a,72)=k0;if(k0>=90){I(a,72)=0;I(a,64)++;}break;
}
 case 1:{float f1,g1,h1,scale1,spread1,half1,step1,alpha1;s32 i1,n1,k1;
 F(a,20)=(float)func_001D5EB0(func_001D5F70(),-1,2);
 F(a,24)=(float)func_001D5EB0(func_001D5F70(),-1,2);
 k1=func_001D5EB0(func_001D5F70(),2,4);I(a,72)=0;I(a,64)=k1;
 func_002060F8(u);identity(u,&local.t);
 if(I(a,64)==2){F(a,60)=0;F(u,32)=0;I(u,52)=0;I(u,72)=0;}else if(I(a,64)==3)F(a,60)=0;
 color(u,a);{Vec*p=(Vec*)(u+80);p->x=local.base[0];p->y=local.base[1];p->z=local.base[2];p->w=1;}break;
}
 case 2:{float f2,g2,h2,scale2,spread2,half2,step2,alpha2;s32 i2,n2,k2;
 if(I(a,72)<=duration){
 Vec*matrix2=(Vec*)(u+32);f2=(float)I(a,72)/enterTime;g2=func_003F3978(1-f2,1.9f);h2=g2*150.0f;g2=g2*100.0f*F(a,20);h2=h2*F(a,24);
 identityM(matrix2,&local.t);matrix2[0].x=f2;matrix2[1].y=f2;matrix2[2].z=f2;
 pos(u,&local.t,&(*(Vec*)local.base),((*(Vec*)local.base).x-F(a,28)*f2)+g2,((*(Vec*)local.base).y-F(a,32)*f2)+h2);
 F(a,60)=f2;color(u,a);I(a,72)++;}else{I(a,64)=next;I(a,72)=0;}
 local.unknown[0]=0;if(!func_00205D60(u,&local.unknown[0])){func_002062A8(u,a+36);local.t.x=0;local.t.y=0;local.t.z=0;func_002063A0(u,&local.t);draw(u,P(a,44));}break;
}
 case 3:{float f3,g3,h3,scale3,spread3,half3,step3,alpha3;s32 i3,n3,k3;
 if(I(a,72)<=duration){
 i3=0;h3=800.0f;n3=func_003FA9B8(P(a,44));f3=(float)I(a,72)/enterTime;g3=1-f3;spread3=func_003F3978(g3,1.5f)*h3;half3=spread3*.5f;step3=spread3/(float)(n3-1);
 func_002060F8(u);func_002062A8(u,a+36);g3*=250.0f;
 pos(u,&local.t,&(*(Vec*)local.base),((*(Vec*)local.base).x-F(a,28))+g3*F(a,20),((*(Vec*)local.base).y-F(a,32))-g3*__builtin_fabsf(F(a,24)));
 F(a,60)=f3;color(u,a);
 if(n3>0)do {float offset3=((float)((s32*)P(a,16))[i3]+step3*(float)i3)-half3;local.c1[0]=((char*)P(a,44))[i3];local.c1[1]=0;i3++;local.p1.y=0;local.p1.z=0;local.p1.x=offset3;func_002063A0(u,&local.p1);draw(u,local.c1);}while(i3<n3);
 I(a,72)++;}else{I(a,64)=next;I(a,72)=0;}break;
}
 case 6:{float f6,g6,h6,scale6,spread6,half6,step6,alpha6;s32 i6,n6,k6;
 if(F(a,60)<1){color(u,a);F(a,60)+=.01f;pos(u,&local.t,&(*(Vec*)local.base),(*(Vec*)local.base).x-F(a,28),(*(Vec*)local.base).y-F(a,32));}
 else {
 if(I(a,72)>240){F(a,60)=1;k6=func_001D5EB0(func_001D5F70(),7,9);I(a,72)=0;I(a,64)=k6;F(a,20)=(float)func_001D5EB0(func_001D5F70(),-1,2);F(a,24)=(float)func_001D5EB0(func_001D5F70(),-1,2);}
 f6=waitTime/cycles;alpha6=1;k6=I(a,72);n6=k6>0?k6/(s32)f6:0;g6=(float)k6-f6*(float)n6;if(n6&1)alpha6=alpha6-((f6-g6)/f6);else alpha6=(f6-g6)/f6;
 *(Packed*)&local.t=*(Packed*)(a+48);local.t.w=((float(*)(float,float,float))func_0015ACE0)(alpha6,0,1);cp((Vec*)(u+16),&local.t);I(u,136)++;I(a,72)++;
 }break;
}
 case 7:{float f7,g7,h7,scale7,spread7,half7,step7,alpha7;s32 i7,n7,k7;
 f7=1-(float)I(a,72)/leaveTime;F(a,60)=f7;
 if(f7<0){func_002060F8(u);identity(u,&local.t);{Vec*p=(Vec*)(u+80);p->x=local.base[0];p->y=local.base[1];p->w=1;p->z=local.base[2];}F(a,60)=0;I(a,64)=0;}
 else {Vec*matrix7=(Vec*)(u+32);g7=func_003F3978(f7,1.5f);if(g7>.01f){h7=1-((g7-.01f)/.99f);f7=5;}else {h7=g7/.01f;f7=6;}scale7=h7*f7+1;identityM(matrix7,&local.t);matrix7[2].z=scale7;matrix7[1].y=scale7;matrix7[0].x=scale7;spread7=(1-g7)*300.0f*__builtin_fabsf(F(a,24));pos(u,&local.t,&(*(Vec*)local.base),(*(Vec*)local.base).x-F(a,28)*scale7,((*(Vec*)local.base).y-F(a,32)*scale7)-spread7);color(u,a);}
 I(a,72)++;break;
}
 case 8:{float f8,g8,h8,scale8,spread8,half8,step8,alpha8;s32 i8,n8,k8;
 if(I(a,72)<=exitDuration){
 i8=0;g8=640.0f;n8=func_003FA9B8(P(a,44));f8=func_003F3978((float)I(a,72)/leaveTime,1.35f);spread8=f8*g8;half8=spread8*.5f;step8=spread8/(float)(n8-1);
 func_002060F8(u);func_002062A8(u,a+36);
 pos(u,&local.t,&(*(Vec*)local.base),(*(Vec*)local.base).x-F(a,28),((*(Vec*)local.base).y-F(a,32))+f8*250.0f*F(a,24));F(a,60)=1-f8;color(u,a);
 if(n8>0)do {float offset8=((float)((s32*)P(a,16))[i8]+step8*(float)i8)-half8;local.c2[0]=((char*)P(a,44))[i8];local.c2[1]=0;i8++;local.p2.y=0;local.p2.z=0;local.p2.x=offset8;func_002063A0(u,&local.p2);draw(u,local.c2);}while(i8<n8);
 }else{I(a,64)=0;I(a,72)=0;}I(a,72)++;break;}

 }
}
