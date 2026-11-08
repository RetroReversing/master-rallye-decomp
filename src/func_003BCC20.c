typedef struct {s8*begin,*end,*cap;} ByteVector;
typedef struct {s8 prefix[24];volatile s32 x,y,z;s8 pad24[80];ByteVector v;s8 pad80[88];s32 state;} ClearObj;
static inline void erase10(ByteVector*v,s8*first,s8*last){s8*it;for(it=first;it<last;it+=8){}v->end-=last-first;}
void func_003BFD70(ClearObj*p){p->state=-1;erase10(&p->v,p->v.begin,p->v.end);p->z=0;p->x=0;p->y=0;}
s32 func_003BCBB8(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return 1;if(y<x)return 0;a++;c++;}return a==b&&c!=d;}
s32 func_003BCC20(s8*a,s8*b,s8*c,s8*d){while(a!=b&&c!=d){s8 x=*a,y=*c;if(x<y)return -1;if(y<x)return 1;a++;c++;}if(c==d)return a!=b;return -1;}
typedef struct {u8 data[24];}Item;
Item*func_003BCC80(Item*p,Item*e,Item*q){while(p!=e){if(q)*q=*p;p++;q++;}return q;}
