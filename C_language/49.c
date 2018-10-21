#include <stdio.h>

int AND(int n, int m);
int OR(int n, int m);
int NAND(int n, int m);
int NOR(int n, int m);
int XOR(int n, int m);

int main() {

	int v,w,x,y,z;
	int F,a,b,c,d,e;
	int A,B,C;
	int answer=0;

	scanf("%d %d %d",&A,&B,&C);

	for (v=0; v<=1; v++)
	{
		for (w=0; w<=1; w++)
		{
			for (x=0; x<=1; x++)
			{
				for (y=0; y<=1; y++)
				{
					for (z=0; z<=1; z++)
					{
						 switch(A)
       						 {
               						case (1) :
                						 a = OR(v,w); break;
                					case (2) :
                       						 a = AND(v,w); break;
               					        case (3) :
                       						 a = NOR(v,w); break;
               					        case (4) :
                       						 a = NAND(v,w); break;
               					        case (5) :
                       						 a = XOR(v,w); break;
       						 }

							b = NAND(x,y);
						
						 switch(B)
       						 {
               						 case (1) :
                       						 c = OR(y,z); break;
               						 case (2) :
                       						 c = AND(y,z); break;
               						 case (3) :
                       						 c = NOR(y,z); break;
               						 case (4) :
                       						 c = NAND(y,z); break;
               						 case (5) :
                       						 c = XOR(y,z); break;
        					}

						d = NOR(a,b);

						switch(C)
       					        {
               						 case (1) :
                       						 e = OR(b,c); break;
               						 case (2) :
                       						 e = AND(b,c); break;
               						 case (3) :
                       						 e = NOR(b,c); break;
               						 case (4) :
                       						 e = NAND(b,c); break;
               						 case (5) :
                        				         e = XOR(b,c); break;
        					}

        					F = XOR(d,e);
						
						
						if (F == 1)
						{
							answer++;
						}

					}
				}
			}
		}
	}

	
	printf("%d\n",answer);
	
	return 0;

}




int AND(int n, int m)
{
	return n && m;
}

int OR(int n, int m)
{
	return n || m;
}

int NAND(int n, int m)
{
	return !(n && m);
}

int NOR(int n, int m)
{
	return !(n || m);
}

int XOR(int n, int m)
{
	if (n==m)
		return 0;
	else
		return 1;
}


