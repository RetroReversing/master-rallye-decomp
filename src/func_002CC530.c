typedef struct{float x,y;int z,w;}Value;
extern float func_002CC510(float);
int func_002CC948(void*unused,Value*a,Value*b){int different=0;if(func_002CC510(a->x-b->x)>0.33f||func_002CC510(a->y-b->y)>0.33f||a->z!=b->z||a->w!=b->w)different=1;return different;}
extern int D_00482A30;extern int func_002CAF78(void*);
void func_002CC5B0(void**p){*p=&D_00482A30;func_002CAF78(p);}
extern void func_002CAF60(void*);extern void*func_001D6E40(void);
void*func_002CC530(int*p,int a){int*q;int first,last;func_002CAF60(p);p[1]=a;p[3]=0;p[0]=(int)&D_00482A30;{int*t=p+3;t[1]=0;t[2]=0;t[3]=0;}q=*(int**)((char*)func_001D6E40()+4);last=q[1];first=q[0];p[7]=-1;p[2]=(last-first)>>2;return p;}
float func_002CC510(float x){if(!(x>=0.0f))x=-x;return x;}
