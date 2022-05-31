#include<iostream>
#include<cstring>

using namespace std;

class instrument
{
	protected:
		char name[20];
	public:
	    instrument();
		instrument(char iname[])
		{
			strcpy(name,iname);
		}
		virtual void play()
		{
		}
		void lyrix()
		{
			cout << name << " is playing" << endl;
			play();
			cout << "Tarare ra Tarare raa...." << endl;
			play();
			cout << "Tarare ra Tarare raa...." << endl;
			play();
			cout << "Nane na na na na naaa...." << endl;
			cout << endl;
			cout << endl;
		}		
			
};

class piano : public instrument
{
	public:
		piano()
		{
		}
		piano(char iname[]) : instrument(iname)
		{
			
		}
		void play()
		{
			cout << "I am s piano piano pianoo.. " << endl;
		}
		
};

class drumset : public instrument
{
	public:
		drumset()
		{
		}
		drumset(char iname[]) :  instrument(iname)
		{
			
		}
		void play()
		{
			cout << "I am a drumset drumset ...." << endl;
		}
		
		
		
};

class guitar : public instrument
{
	public:
		guitar()
		{
		}
		guitar(char iname[]) : instrument(iname)
		{
			
		}
		void play()
		{
			cout << "I am guitar guitar guitar...." << endl;
		}
		
};


int main()
{
	instrument *inst[4];
	
	inst[0] = new piano("Piano the instrument");
	inst[1] = new drumset("Drumset the instrument");
	inst[2] = new guitar("Guitar the instrument");
	inst[3] = new instrument("Enter insrument name");
	
	for(int i=0;i<4;i++)
	inst[i]->lyrix();
	
	
	
}
