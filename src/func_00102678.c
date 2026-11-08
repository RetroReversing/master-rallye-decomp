extern void func_001E2460(void*,void*),func_001E2510(void*,const char*,void*),func_001E28F8(void*,const char*,void*),func_001E2998(void*,const char*,void*);
extern char D_00444D60[],D_00444D70[],D_00444D80[],D_00444D90[],D_00444DA0[];
typedef struct {float x,y,z,w;} Color;
typedef struct {u32 h[3];f32 time,offset;Color start,end;u32 active;} A;
static inline void color(Color*d,Color*s){d->x=s->x;d->y=s->y;d->z=s->z;d->w=s->w;}
static inline void set(A*a,float x,float y,float z,float w,float X,float Y,float Z,float W){a->start.x=x;a->start.y=y;a->start.z=z;a->start.w=w;a->end.x=X;a->end.y=Y;a->end.z=Z;a->end.w=W;}
void func_00102678(A*a,void*unused,void*c){
Color start,end;u32 reg[4];
func_001E2460(reg,c);
func_001E2510(reg,D_00444D60,&a->time);
func_001E2510(reg,D_00444D70,&a->offset);
func_001E2998(reg,D_00444D80,&start);
func_001E2998(reg,D_00444D90,&end);
func_001E28F8(reg,D_00444DA0,&a->active);
set(a,start.x,start.y,start.z,start.w,end.x,end.y,end.z,end.w);
}
