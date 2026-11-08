#define I(p,o) (*(s32*)((char*)(p)+(o)))
#define P(p,o) (*(void**)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define L(p,o) (*(u64*)((char*)(p)+(o)))
extern char D_0048DCC0[],D_0048DCC8[];
extern void func_0021E620(void*,int,int),func_0021E4F0(void*),func_001D4810(void*,s32),func_002060F8(void*,s32),func_002062A8(void*,void*);
extern void *func_0017E620(void),*func_00206588(void*);
extern s32 func_001E3598(s32,void*),func_003D7CB0(s32),func_003FA9B8(s32);
extern void func_002068C0(void*,s32,s32*,s32*),func_001D2458(void*,s32),func_001D2A40(void*,s32,s32),D_002AD390(s32);
extern void *D_002AD5A8(s32);
static inline void vec(float*p,float x,float y,float z,float w){p[0]=x;p[1]=y;p[2]=z;p[3]=w;}
static inline void copy(float*p,float*q){p[0]=q[0];p[1]=q[1];p[2]=q[2];p[3]=q[3];}
void func_001434D8(char*a,char*b){
 union {float v[4];s32 key;} t;
 s32 x,y,w,h; s32 full=0,i,n;void*ui;float*color;void*r,*vt;char*key;
 func_0021E620(b,0,0);
 r=P(b,80);L(r,112)=(L(r,112)&0xFFFFFFFBFFFFFFFFULL)|0x400000000ULL;
 if(func_001E3598(func_001E4280(),D_0048DCC0)){
 vec(t.v,1,1,1,0);I(a,40)=0;full=1;color=(float*)(a+48);copy(color,t.v);I(a,64)=6;
 }else if(func_001E3598(func_001E4280(),D_0048DCC8)){
 vec(t.v,1,0,0,0);I(a,40)=1;color=(float*)(a+48);copy(color,t.v);I(a,64)=0;
 }else{func_0021E4F0(b);return;}
 r=func_0017E620();vt=P(r,0);
 I(a,44)=func_003D7CB0(((s32(*)(void*,s32,s32))P(vt,44))((char*)r+*(s16*)((char*)vt+40),207,I(a,40)));
 ui=P(b,76);if(!ui)return;
 key=a+36;r=func_0017E620();vt=P(r,0);
 func_001D4810(key,((s32(*)(void*,s32))P(vt,36))((char*)r+*(s16*)((char*)vt+32),103));
 L(ui,120)=(L(ui,120)&~4ULL)|4;func_002060F8(ui,4);func_002062A8(ui,key);
 vt=P(ui,0);((void(*)(void*,s32))P(vt,20))((char*)ui+*(s16*)((char*)vt+16),I(a,44));
 if(!full)return;x=0;y=0;i=0;
 func_002068C0(func_00206588(ui),I(a,44),&x,&y);
 F(a,28)=(float)x*.5f;F(a,32)=(float)y*.5f;
 copy((float*)((char*)ui+16),color);I(ui,136)++;
 n=func_003FA9B8(I(a,44));P(a,16)=D_002AD5A8(n*4);
 for(;i<n;i++){func_001D2458(&t,I(a,44));func_001D2A40(&t,i,n);w=0;h=0;func_002068C0(func_00206588(ui),t.key,&w,&h);((s32*)P(a,16))[i]=w;D_002AD390(t.key);}
}
