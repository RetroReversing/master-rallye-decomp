extern void *D_002AD408(s32);
extern void func_001EBAC8(void*,s32,s32,s32,s32);
extern void func_001E5B20();
extern s32 D_004922B8;
void func_001E5C58(void*,s32*,s32);
void func_001E5A10(void*p,s32*q){s32*t=D_002AD408(12);((void**)p)[1]=t;t[0]=0;t[1]=0;t[2]=0;func_001EBAC8(t,0,q[0],q[1],0);}
void func_001E5990(s32*p,void*q){if(p[2]!=10)func_001E5C58(p,p,10);else {char*r=(char*)p[1];if(r){char*v=*(char**)(r+4);((void(*)(void*,s32))*(void**)(v+12))(r+*(s16*)(v+8),3);}}p[1]=(s32)q;p[4]++;}
void *func_001E5AA8(s32*p,s32*q){if(q!=p){u32 t=q[2];p[2]=t;p[3]=q[3];p[4]=q[4];p[5]=q[5];p[6]=q[6];p[0]=q[0];switch(t){case 0:case 1:case 2:case 3:case 4:case 5:case 6:case 7:case 8:case 9:case 10:case 11:p[1]=q[1];break;}}return p;}
void func_001E5C58(void*a,s32*b,s32 c){s32*p=a;func_001E5B20(a,b,c);{s32 x=b[0];p[2]=c;p[0]=x;}p[5]=1;p[1]=0;p[4]=0;p[6]=D_004922B8;}
