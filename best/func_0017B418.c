typedef struct P {float x,y,z;} P;
typedef struct Rec {char pad[24];P pos,dir;int id,valid;} Rec;
typedef struct E48 {float value;char pad[44];} E48;
typedef struct EV48 {E48*b,*e,*c;} EV48;
extern Rec*D_0040E8D0;
extern int func_0021F4B0(void),func_0021E9C0(int,void*);
extern void func_0017B1C8(void*,int,P*,P*,float,float);
extern char*func_001A12E0(void);
void func_0017B418(char*p,int index,float a,float b){
P first,other,pos,dir;char*obj=*(char**)(p+24);P*base;EV48*v;int i,n,id;E48*value;
if(!*(int*)(obj+40)){int r=func_0021E9C0(func_0021F4B0(),obj+36);*(int*)(obj+40)=r;if(!r)return;}
i=0;n=*(int*)(p+172);base=(P*)(*(char**)(*(char**)(*(char**)(p+24)+12)+4)+224);if(n>0){v=(EV48*)(p+372);
do{
Rec*r;P*d;first.x=0;first.y=0;first.z=0;other.x=0;other.y=0;other.z=0;func_0017B1C8(p,i,&other,&first,a,b);
r=D_0040E8D0+(index+i);pos.x=0;pos.y=0;pos.z=0;dir.x=0;dir.y=0;dir.z=0;
if(r->valid){pos.x=r->pos.x;pos.y=r->pos.y;pos.z=r->pos.z;dir.x=r->dir.x;dir.y=r->dir.y;dir.z=r->dir.z;id=r->id;}
else{id=-1;pos.y=first.y;pos.x=first.x;pos.z=first.z;dir.x=base->x;dir.y=base->y;dir.z=base->z;}
d=*(P**)(p+180)+i;d->x=dir.x;d->y=dir.y;d->z=dir.z;
d=*(P**)(p+176)+i;d->x=pos.x;d->y=pos.y;d->z=pos.z;
(*(int**)(p+184))[i]=id;
{int chosen=*(int*)(p+232);if(chosen<0)value=v->b;else if((u32)((v->e-v->b)-1)<(u32)chosen)value=v->b;else if(*(int*)(p+232)==*(int*)(func_001A12E0()+36))value=v->b;else value=v->b+*(int*)(p+232);}
*(float*)(p+356)=value->value;
}while(++i<n);}}
