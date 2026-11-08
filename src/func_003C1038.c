extern s8 *func_00152B80(u32,s32*);extern u32 D_0040E618[];
s8*func_003C0E30(u32 size){s32 count=20,i;s8*base=func_00152B80(size,&count),*p,*next,*first;if(count!=1){first=base+size;p=first;D_0040E618[((size+7)>>3)-1]=(u32)first;i=1;next=p+size;if(count-1!=1){do{*(s8**)p=next;i++;p=next;next=p+size;}while(count-1!=i);}*(s8**)p=0;}return base;}
extern s32 D_00488560[];
void*func_003C1038(s32*p){s32 tmp[8];s32*a,*b;p[2]=0;p[3]=0;p[4]=(s32)D_00488560;a=p+6;p[1]=0;b=p+10;p[0]=0;p[5]=0;p[6]=0;a[1]=0;a[2]=0;p[9]=0;p[10]=0;b[1]=0;b[2]=0;p[13]=0;return p;}
extern void*D_002AD408(u32);extern s32 func_003F93CC(s32,s32,s32);
void*func_003C1090(void){s32*p=func_003C1038(D_002AD408(56));s32*a=p+6,*b=p+10; s32 start=p[6],end=a[1],start2,end2;func_003F93CC(start,end,0);a[1]-=end-start;p[9]=0;start2=p[10];end2=b[1];func_003F93CC(start2,end2,0);b[1]-=end2-start2;p[13]=0;return p;}
extern s32 D_0042DCA8;
typedef void(*VisitFn)(void*,s32);
#define F(p,t,o) (*(t*)((s8*)(p)+(o)))
void func_003C1E48(s8*p,s32 arg,s32 index){s32 stamp; s32*entry;index*=4;entry=(s32*)((s8*)F(p,s32*,40)+index); stamp=F(p,s32,52);if(*entry!=stamp){s8*o,*vt;*entry=stamp;o=*(s8**)((u32)F(p,s8**,24)+index);vt=F(o,s8*,16);F(vt,VisitFn,92)(o+F(vt,s16,88),arg);D_0042DCA8++;}}
