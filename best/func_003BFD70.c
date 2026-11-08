typedef struct{s8 *volatile begin,*volatile end,*volatile cap;}ByteVector;
typedef struct{s8 pre[24];volatile s32 x,y,z;s8 pad24[80];ByteVector v;s8 pad80[88];volatile s32 state;}ClearObj;
void func_003BFD70(ClearObj*p){ByteVector*v; s8 *end,*begin,*it,*saved;s32 n;p->state=-1;v=&p->v;end=v->end;begin=p->v.begin;saved=end;n=saved-begin;for(it=begin;it<end;it+=8){}v->end=saved-n;p->z=0;p->x=0;p->y=0;}typedef struct{u8 data[24];}Item;
Item*func_003BCC80(Item*p,Item*e,Item*q){while(p!=e){if(q)*q=*p;p++;q++;}return q;}
s32 func_003BCC20(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return -1;if(y<x)return 1;a++;c++;}if(c==d)return a!=b;return -1;}
s32 func_003BCBB8(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
