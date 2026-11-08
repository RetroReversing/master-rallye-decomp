typedef struct {u32 pad[4];s16 adjust;u16 pad1;s32(*fn)(void*,s32);}VT;
typedef struct{VT*vt;}Sub;typedef struct{u8 pad[0x9c];Sub*sub;}Obj;extern s32 func_002CA418(Obj*,s8);
s32 func_002CA668(Obj*o,s8 c){s16 q; s32 result=0; s32 a,b,z,v,r,m;Sub*p;
v=*((s8*)o+(c&127)+4);q=0;if(v<0){v=func_002CA418(o,c);if(v<0)goto done;}
q=v/6;r=v%6;z=0;a=0;
switch(r){case 0:m=2;break;case 1:m=3;break;case 2:m=1;break;case 3:m=0;break;case 4:m=6;break;case 5:m=7;break;default:m=-1;break;}
if(m>=0){p=o->sub;z=p->vt->fn((u8*)p+p->vt->adjust,m);}
b=1;if(q==0)a=1;else if(q==1){p=o->sub;a=p->vt->fn((u8*)p+p->vt->adjust,4);}else if(q==2){p=o->sub;a=p->vt->fn((u8*)p+p->vt->adjust,5);}else if(q==3){a=0;p=o->sub;if(p->vt->fn((u8*)p+p->vt->adjust,5)){p=o->sub;if(p->vt->fn((u8*)p+p->vt->adjust,4))a=b;}}
result=0;if(z)result=a!=0;done:return result;}
