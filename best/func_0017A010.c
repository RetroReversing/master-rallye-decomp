typedef struct {float x,y,z;} V;
typedef struct {V row[3];} M;
typedef struct {char a[148];V origin,pos;char b[16];M mat;} Body;
typedef struct {int a;Body*b;} Link;
typedef struct {char a[12];Link*l;} Parent;
typedef struct {char a[24];Parent*p;char b[28];V point;} Obj;
static inline V*sub(V*r,const V*a,const V*b){float x=a->x-b->x,z=a->z-b->z,y=a->y-b->y;r->x=x;r->z=z;r->y=y;return r;}
static inline V*mul(V*r,M*m,V*v){float x=m->row[0].x*v->x+m->row[0].y*v->y+m->row[0].z*v->z,y=m->row[1].x*v->x+m->row[1].y*v->y+m->row[1].z*v->z,z=m->row[2].x*v->x+m->row[2].y*v->y+m->row[2].z*v->z;r->x=x;r->y=y;r->z=z;return r;}
static inline V*add(V*r,V*a,V*b){float x=a->x+b->x,z=a->z+b->z,y=a->y+b->y;r->x=x;r->z=z;r->y=y;return r;}
V*func_0017A010(V*out,Obj*o){V a,b;Body*p=o->p->l->b;sub(&b,&o->point,&p->origin);mul(&a,&p->mat,&b);return add(out,&p->pos,&a);}
