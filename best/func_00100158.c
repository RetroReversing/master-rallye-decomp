extern void func_001D4040(void*,const char*);
extern void func_001E3D10(int,void*,int),func_0021E620(void*,int,int);
extern float D_0040DA80,D_0040DA84;extern char D_00444840[];
typedef struct {float x,y,z;} V;
typedef struct {float x,y,z,w;} V4;
typedef struct {char a[16];V4 color;char b[48];V4 pos;} Node;
typedef struct {char a[76];Node *node;} Target;
typedef struct {char a[12];int active;float step;char b[8];float dx,dy;int moving,first;} Obj;
static inline void shift(V *out,V4 *in,float x,float y){out->x=in->x;out->y=in->y;out->z=in->z;out->x+=x;out->y+=y;}
static inline V *subtract(V*out,V4*in,float x,float y){out->x=in->x;out->y=in->y;out->z=in->z;out->x-=x;out->y-=y;return out;}
static inline void set(V4*p,V*v){p->x=v->x;p->y=v->y;p->z=v->z;p->w=1.0f;}
static inline void alpha(V4*c,float v){c->w+=v;}
void func_00100158(Obj *o,Target*t){union{int key[4];V a;}u;V b;int root;float v;if(o->active){v=t->node->color.w+o->step;if(v>1.0f){do{root=func_001E4280();func_001D4040(u.key,D_00444840);func_001E3D10(root,u.key,0);func_0021E620(t,1,0);t->node->color.w=1.0f;}while(0);return;}if(v<0.0f){do{root=func_001E4280();func_001D4040(u.key,D_00444840);func_001E3D10(root,u.key,0);func_0021E620(t,1,0);t->node->color.w=0.0f;}while(0);return;}if(o->moving){if(o->first){o->first=0;shift(&b,&t->node->pos,D_0040DA80,D_0040DA84);set(&t->node->pos,&b);}set(&t->node->pos,subtract(&u.a,&t->node->pos,o->dx,o->dy));}alpha(&t->node->color,o->step);root=func_001E4280();func_001D4040(u.key,D_00444840);func_001E3D10(root,u.key,1);}}
