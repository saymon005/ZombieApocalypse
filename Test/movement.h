#define screenHeight 522
#define screenWidth 840
#define upperbackgroundspeed 8
#define Zombie1Number 6
#define Zombie2Number 3
#define Zombie3Number 2
#define BulletNumber 100

void zom1run()
{
	for(int i=0;i<Zombie1Number;i++)
	{
		if(Zr1[i].zrShow=true)
		{
			iShowImage(Zr1[i].zrX,Zr1[i].zrY,65,90,z1run[Zr1[i].zrIndex]);
		}
	}
}

void zom2run()
{
	for(int i=0;i<Zombie2Number;i++)
	{
		if(Zr2[i].zrShow=true)
		{
			iShowImage(Zr2[i].zrX,Zr2[i].zrY,82,116,z2run[Zr2[i].zrIndex]);
		}
	}
}

void zom3run()
{
	for(int i=0;i<Zombie3Number;i++)
	{
		if(Zr3[i].zrShow=true)
		{
			iShowImage(Zr3[i].zrX,Zr3[i].zrY,70,96,z3run[Zr3[i].zrIndex]);
		}
	}
}


void charmovement()
{
	standcount++;
	shootcount++;
	 if(shooting == true)
	{
		iShowImage(RunX,RunY,80,110,shootimage[3]);
		if(shootcount>=20)
		{
			shooting=false;
			shootcount=0;
		}
	 }
	else if(standing==false)
	{
			if(front==true)
			{
				iShowImage(RunX,RunY,80,110,runimage[RunIndex]);
				//RunIndex++;
				if(RunIndex>=6)
					RunIndex=0;
			}
			else
			{
				iShowImage(RunX,RunY,80,110,runbimage[RunIndex]);
				//RunIndex++;
				if(RunIndex>=6)
					RunIndex=0;
			}
			if(standcount>=20)
			{
				standcount=0;
				RunIndex=0;
				standing=true;
			}
	}
	
	else
	{
		iShowImage(RunX,RunY,80,110,standimage);
		if(RunX>=1)
			RunX-=3;
	}

	
}

void backgroundmovement()
{
	for(int i=0;i<13;i++)
	{
		iShowImage(upperbackground[i].x,upperbackground[i].y,72,522,upperbackgroundimage[i]);
	}
}