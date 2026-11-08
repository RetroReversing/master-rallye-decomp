typedef struct V10{float x,y,z,w;}V10;typedef struct M10{V10 r[4];}M10;
typedef struct VT10{u32 a,b,c,d;s16 delta,pad;void(*blend)(void*,void*,void*,void*,float);}VT10;
typedef struct Blend10{VT10*vt;}Blend10;
typedef struct State10{u32 x;Blend10*blend;char pad[24];M10 matrix;char pad2[16];u64 flags;}State10;
typedef struct Actor10{char pad[80];State10*state;}Actor10;
extern void func_00278338(void*,M10*,M10*,float);
static inline void copyv10(V10*d,V10*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
static inline void copym10(M10*d,M10*s){copyv10(&d->r[0],&s->r[0]);copyv10(&d->r[1],&s->r[1]);copyv10(&d->r[2],&s->r[2]);copyv10(&d->r[3],&s->r[3]);}
static inline int close10(float value,const float *ep){float epsilon=*ep;int n=0;if(-epsilon<=value&&value<=epsilon)n=1;return n;}
void func_00362768(char*p,Actor10*a,M10*out,float t){int near;float delta;
if((a->state->flags>>34)%2){float epsilon;delta=t-1.f;epsilon=0.0000011920929f;near=close10(delta,&epsilon);
if(!near){State10*s=a->state;Blend10*b=s->blend;if(b)b->vt->blend((char*)b+b->vt->delta,a,p+112,out,t);else func_00278338(p+112,&s->matrix,out,t);return;}}
copym10(out,&a->state->matrix);}
