typedef struct{float x,y,z,w;} Vec;
typedef struct{char pad[48];Vec color;s32 state;} Anim;
typedef struct{char pad[76];void*u;} Owner;
void func_001445F8(Anim*a,Owner*b){s32 dirty=0;switch(a->state){case 0:a->color.w+=.02f;if(a->color.w>1.3f){a->state=1;dirty=1;a->color.w=1;}else if(a->color.w<1)dirty=1;break;case 1:a->color.w-=.01f;if(a->color.w<.2f){a->color.w=.2f;dirty=1;a->state=0;}else if(a->color.w>.2f)dirty=1;break;}if(dirty){char*u=b->u;if(u){Vec*p=(Vec*)(u+16),*q=&a->color;p->x=q->x;p->y=q->y;p->z=q->z;p->w=q->w;(*(s32*)(u+136))++;}}}
