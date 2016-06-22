//Ecological Bin Packing (#102)
//Sadeq

#include<stdio.h>

int main()
{
	long bcg,bgc,cbg,cgb,gbc,gcb;
	long b1,b2,b3,g1,g2,g3,c1,c2,c3;
	while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&b1,&g1,&c1,&b2,&g2,&c2,&b3,&g3,&c3)==9)
	{
		bcg=b2+b3+c1+c3+g1+g2;
		bgc=b2+b3+g1+g3+c1+c2;
		cbg=c2+c3+b1+b3+g1+g2;
		cgb=c2+c3+g1+g3+b1+b2;
		gbc=g2+g3+b1+b3+c1+c2;
		gcb=g2+g3+c1+c3+b1+b2;
		if((bcg<=bgc) && (bcg<=cbg) && (bcg<=cgb) && (bcg<=gbc) && (bcg<=gcb)) printf("BCG %ld\n",bcg);
		else if((bgc<=cbg) && (bgc<=cgb) && (bgc<=gbc) && (bgc<=gcb)) printf("BGC %ld\n",bgc);
		else if((cbg<=cgb) && (cbg<=gbc) && (cbg<=gcb)) printf("CBG %ld\n",cbg);
		else if((cgb<=gbc) && (cgb<=gcb)) printf("CGB %ld\n",cgb);
		else if(gbc<=gcb) printf("GBC %ld\n",gbc);
		else printf("GCB %ld\n",gcb);
	}
	return 0;
}