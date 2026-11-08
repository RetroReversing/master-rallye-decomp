/* identical to func_003C0000 (matched), with its names changed by decompdecomp */
typedef struct {u8 data[24];} Item;
Item *func_00372B90(Item*p,Item*e,Item*q){while(p!=e){if(q)*q=*p;p++;q++;}return q;}
extern void*D_002AD408(u32);extern s32 D_00488440[];
void*func_003C0F00(void){s32*p=D_002AD408(24);p[4]=(s32)D_00488440;p[2]=0;p[3]=0;p[1]=0;p[0]=0;p[5]=0;return p;}
s32 func_003C0F40(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
s32 func_003C0FA8(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return -1;if(y<x)return 1;a++;c++;}if(c==d)return a!=b;return -1;}
