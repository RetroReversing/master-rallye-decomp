/* identical to func_00176C98 (matched), with its names changed by decompdecomp */
extern int D_0042629C;extern int D_002AD408(int);extern int func_001D40C0(int);extern void D_002AD390(void*);
int func_001D4340(void){if(!D_0042629C)D_0042629C=func_001D40C0(D_002AD408(12));return D_0042629C;}
void func_00175AD0(void*p,int flags){if(flags&1)D_002AD390(p);}
#define F(p,o) (*(float*)((char*)(p)+(o)))
#define I(p,o) (*(int*)((char*)(p)+(o)))
#define P(p,o) (*(char**)((char*)(p)+(o)))
void func_00177E50(char*p,int value){int off=0,n=3;I(P(P(p,12),4),0)=value;do{--n;I(off+P(p,16),0)=value;off+=400;}while(n>=0);I(P(p,20),0)=value;if(value){off=0;n=3;do{--n;if(value)I(off+P(p,16),296)=0;off+=400;}while(n>=0);I(P(p,20),128)=1;F(P(p,20),36)=0;{char*q=P(p,20);F(q,40)=F(q,36)/F(q,24);}}}
extern int func_00179518(void*),func_00175100(void*),func_00175118(void*),func_001750D8(void*),func_00175140(void*),func_0016FF88(void*,int,int,int);
void func_00177EE8(char*p){int n=3,off=0;char*q;func_00179518(P(p,24));do{--n;func_00175100(P(p,16)+off);func_00175118(P(p,16)+off);q=off+P(p,16);F(q,256)=F(q,336)*F(q,284);F(q,260)=F(q,340)*F(q,288);func_001750D8(P(p,16)+off);func_00175140(P(p,16)+off);off+=400;}while(n>=0);q=P(p,24);func_0016FF88(P(p,20),I(q,16),I(q,20),I(q,36));}
