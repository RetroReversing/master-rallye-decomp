/* identical to func_00177FA8 (matched), with its names changed by decompdecomp */
#define P(p,o) (*(char**)((char*)(p)+(o)))
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define I(p,o) (*(int*)((char*)(p)+(o)))
extern void func_0017AE50(void*,float,float),func_001751D8(void*),func_00267F60(void*),func_00269200(int,void*);
void func_00177FC8(void*p){func_0017AE50(p,0.f,0.f);}
void func_00178028(char*p){int off=0,n=3;func_00267F60(P(P(p,12),4));do{--n;func_001751D8(P(p,16)+off);off+=400;}while(n>=0);}
float func_00178090(char*p){char*q=P(p,20);float x=F(q,40)/F(q,68);if(x<0.f)return 0.f;if(x>1.f)x=1.f;return x;}
void func_00179D88(void*unused,char*p){int off=0,n=3,h=I(p,44);func_00269200(h,P(P(p,12),4));do{--n;func_00269200(h,P(p,16)+off);off+=400;}while(n>=0);func_00269200(h,P(p,20));}
