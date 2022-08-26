#define screenHeight 522
#define screenWidth 840
#define upperbackgroundspeed 8
#define Zombie1Number 6
#define Zombie2Number 3
#define Zombie3Number 2
#define BulletNumber 100


void setZombie()
{
	for(int i=0;i<Zombie1Number;i++)
	{
		Zr1[i].zrX = screenWidth + rand() % 600;
		Zr1[i].zrY = 47;
		Zr1[i].zrIndex=0;
		Zr1[i].zrShow = true;
	}

	for(int i=0;i<Zombie2Number;i++)
	{
		Zr2[i].zrX = screenWidth*2 + rand() % 1000;
		Zr2[i].zrY = 47;
		Zr2[i].zrIndex=0;
		Zr2[i].zrShow = true;
	}
}
void setZombie2()
{
	for(int i=0;i<=Zombie3Number;i++)
	{
		Zr3[i].zrX = screenWidth;
		Zr3[i].zrY = 47;
		Zr3[i].zrIndex=0;
		Zr3[i].zrShow = true;
	}



}

void zombie()
{
	Zr1[Zombie1Number].zrIndex=0;
	for(int i=1;i<=Zombie1Number;i++)
	{

		Zr1[i].zrX -=10;
		if(Zr1[i].zrX <=0)
			Zr1[i].zrX = screenWidth + rand()%700;
		Zr1[i].zrIndex++;
		if(Zr1[i].zrIndex>=7)
			Zr1[i].zrIndex = 0;
	}

	for(int i=1;i<=Zombie2Number;i++)
	{

		Zr2[i].zrX -=5;
		if(Zr2[i].zrX <=0)
			Zr2[i].zrX = screenWidth + rand()%700;
		Zr2[i].zrIndex++;
		if(Zr2[i].zrIndex>=7)
			Zr2[i].zrIndex = 0;
	}
}

void SetAll()
{
	int sum = 0;
	for(int i=0;i<13;i++)
	{
		upperbackground[i].y=0;
		upperbackground[i].x=sum;
		sum+=70;
	}
}


void change()
{
	for(int i=0;i<13;i++)
	{
		upperbackground[i].x-=upperbackgroundspeed;
		if( upperbackground[i].x <= -70)
			upperbackground[i].x = screenWidth;
	}
}

void ra()
{
	RunIndex++;
	ShootIndex+=2;
}