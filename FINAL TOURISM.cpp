#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
struct variable
{
    //how to reach
    string roadway;
    string railway;
    string airway;
    //places to visit
    string locations;
    //things to do
    string activities;
    // local food
    string food;
    string hotels;
}city_1,city_2,city_3,city_4,city_5,city_6,city_7;
class cities
{
    public:
    cities()
    {
        //mumbai
        city_1.railway="\n\n\t\t\tCSMT  Mumbai";
        city_1.airway="\n\n\t\t\t1.\tChhatrapati Shivaji International airport (Terminal T2) -Sahar, Andheri East \n\t\t\t2.	Chhatrapati Shivaji Domestic Airport (Terminal 1A, 1B, 1C) - Santacruz East/Vileparle Airport \n\t\t\t3.	Juhu Airport - Juhu area \n\t\t\t4.	Navi Mumbai Airport Near Panvel (under Construction) \n";
        city_1.locations="\n\n\t\t\t1. Gateway of India, Mumbai \n\t\t\t2. Sanjay Gandhi National Park, Mumbai \n\t\t\t3. Elephanta Caves, Mumbai \n\t\t\t4. Veermata Jijabai Bhosale Zoo, Mumbai \n\t\t\t5. Juhu Beach, Mumbai \n\t\t\t6. Marine Drive, Mumbai \n\t\t\t7. Bandra-Worli Sea Link, Mumbai \n\t\t\t8. Mumbai Film City, Mumbai \n\t\t\t9. Jehangir Art Gallery, Mumbai \n";
        city_1.activities="\n\n\t\t\t1. Sunsets at marine drive\n\t\t\t2. Fun at Adlabs imagica\n\t\t\t3. Take a tour at mumbai local\n";
        city_1.food="\n\n\t\t\t1. vada pav\n\t\t\t2. Misal pav\n\t\t\t3. pani puri\n"; 
        city_1.hotels="\n\n\t\t\t1. Taj hotel\n\t\t\t2. Hotel JWB marriot\n\t\t\t3.The lalit\n";

        //goa
        city_2.railway="\n\n\t\t\t1.Madgaon Railway Station\n\t\t\t2. Vasco Da Gama Railway Station \n\t\t\t3. Thivim Railway Station";
        city_2.airway="\n\n\t\t\t1.Goa International Airport , Dabolim , Goa  \n\t\t\t2.Mopa International Airport , Casarvane VP , Goa \n";
        city_2.locations="\n\n\t\t\t1.	Calangute Beach \n\t\t\t2.	Fort Aguada \n\t\t\t3.	Cruise in Goa \n\t\t\t4.	Dudhsagar Falls \n\t\t\t5.	Baga Beach \n";
        city_2.activities="\n\n\t\t\t1.dolphin sight seeing\n\t\t\t2. Parasailing\n\t\t\t3. Experience lavish Casino\n";
        city_2.food="\n\n\t\t\t1. fish and rice \n\t\t\t2. prawn \n\t\t\t3. crab \n\t\t\t4. surmai \n\t\t\t5. paplat \n "; 
        city_2.hotels="\n\n\t\t\t1. Santana beach resort\n\t\t\t2. Country Inn & Suites Candolim \n\t\t\t3. Sea shells suites and villas\n";

        //sikkim
        city_3.railway="\n\n\t\t\tThe construction of a 50 km rail link from Sevoke, West Bengal to Rangpo, Sikkim started in 2009, but has been halted. \n\t\t\t In the meanwhile the nearest stations are Siliguri (146km) and New Jalpaiguri (NJP) (187km).";
        city_3.airway="\n\n\t\t\tAirways: Pakyoung Airport is the only airport in Sikkim, 31 km south of Gangtok. \n\t\t\t There is also a helicopter service available between Bagdogra and Gangtok, which takes 35 minutes one way.";
        city_3.locations="\n\n\t\t\t1.	Nathula pass.\n\t\t\t2.	MG Road\n\t\t\t3.	The Rumtek Monastery  \n\t\t\t4.	Tsomgo lake \n\t\t\t5.	Flower Exhibition Centre \n";
        city_3.activities="\n\n\t\t\t1.	Yak ride  \n\t\t\t2.	Gondola ride \n\t\t\t3.	Hand gliding \n\t\t\t4.	Zero point adventures: yumthang valley \n";
        city_3.food="\n\n\t\t\t1.	Chhurpi which is made from yak's milk often served as a welcome drink.\n\t\t\t2.	Bamboo Shoot Curry.\n\t\t\t3.	 Dhindo.\n\t\t\t4.	Sinki."; 
        city_3.hotels="\n\n\t\t\t1. The Elgin Norkhill: 0.5 km from centre \n\t\t\t2. Mayfair spa resort and casino : 4.3 km from centre";
        //kolkata
        city_4.railway="\n\n\t\t\t1.	Howrah and Sealdah Railway Stations \n\t\t\t2.	Kolkata Metro ";
        city_4.airway="\n\n\t\t\tNetaji Subhas Chandra Bose International Airport";
        city_4.locations="\n\n\t\t\t1.Victoria Memorial\n\t\t\t2. Fort William Kolkata\n\t\t\t3. Belur Math\n\t\t\t4. Howrah Bridge\n\t\t\t5. Birla Planetarium\n\t\t\t6. Alipore Zoo\n\t\t\t7. Botanical garden\n";
        city_4.activities="\n\n\t\t\t1. Enjoy A Boat Ride\n\t\t\t2. Sundarbans: Admire Wildlife In Their Natural Habitat\n\t\t\t3. Enjoy the Tram Ride and Explore The City Like Bengalis Do\n";
        city_4.food="\n\n\t\t\t1. Macher jhol\n\t\t\t2. Mishti . \n\t\t\t3. Kosha Mangsho.\n";
        city_4.hotels="\n\n\t\t\t1. The oberoi grand\n\t\t\t2. ITC royal bengal . \n\t\t\t3. JW Marriott.\n";
        //delhi
        city_5.railway="\n\n\t\t\t1.	New Delhi railway station \n\t\t\t2.	Metero\n";
        city_5.airway="\n\n\t\t\t1.	Indira gandhi international airport \n\t\t\t2.	 Palam airport";
        city_5.locations="\n\n\t\t\t1. Qutub minar - aurobindo marg , mehrauli\n\t\t\t2.	Red fort - netaji subhash marg , lal qila , chandni chowk\n\t\t\t3.		Lotus temple - bahapur , shambhu dayal bagh , kalkaji\n\t\t\t4.		India date - located at eastern edge of rajpath\n\t\t\t5.		Humayun tomb - mathura road , nizamuddin east\n ";
        city_5.activities="\n\n\t\t\t1.	 Paintball in delhi at shoot zone\n\t\t\t2.	 Go karting in gurgao\n\t\t\t3. 	Helicopter ride \n\t\t\t4.	 Wanderlast adventure\n\t\t\t5.	 Flyboy air safari\n";
        city_5.food="\n\n\t\t\t1. 	Biryani\n\t\t\t2.	 Chole bhature\n3. nihari"; 
        city_5.hotels="\n\n\t\t\t1.		The leela palace new delhi - located 1km from new delhi city centre and business district";
        //pune
        city_6.railway="\n\n\t\t\tPune Junction railway station";
        city_6.airway="\n\n\t\t\t1.		Pune international airport \n\t\t\t2.		Pune airport \n\t\t\t3.		Hadapsar airport\n";
        city_6.locations="\n\n\t\t\t1. 		Shaniwar Wada Palace\n\t\t\t2.	 	Dagdusheth Halwai Temple\n\t\t\t3.		Lal Mahal\n\t\t\t4.		Raja Dinkar Kelkar Museum\n\t\t\t5.		Sinhagad Fort\n\t\t\t6.		Saras Baug\n\t\t\t7.		Khadakwasla Dam\n\t\t\t8.		Katraj Snake Park\n\t\t\t9.		Shivneri fort\n";
        city_6.activities="\n\n\t\t\t1.		Camping near pawna lake \n\t\t\t2.		Trek to sinhghad fort \n\t\t\t3.		Walk in saras garden\nt\t\t4.		Paragliding in Kamshet \n";
        city_6.food="\n\n\t\t\t1.	jhunka bhakar\n\t\t\t2.	malvani food"; 

        //meghalaya
        city_7.railway="\n\n\t\t\tThe Guwahati railway station is the closest to Shillong. You’ll need to take a taxi from the station to reach Shillong, which is 100 kms away. Luckily, the Guwahati railway station is well connected to many major cities in India. ";
        city_7.airway="\n\n\t\t\tIf you’re looking to approach Meghalaya from the sky, you’ll need to fly to the Umroi Airport in Barapani – which is 25 to 30 kilometers away from Shillong. This airport has limited connection to most cities. The closest major airport is the Guwahati airport, which is 125 kilometres away. Outside the Guwahati airport, taxis are waiting to whisk you to Shillong. ";
        city_7.locations="\n\n\t\t\t1.	Cherrapunji\n2.	Balpakram National Park \n3.	Shillong \n4.	Elephant Falls \n5.	Living Root Bridge \n6.	Nohkalikai Waterfalls \n";
        city_7.activities="\n\n\t\t\t1.	Caving\n2.	Hikes and Treks\n3.	Paddling\n4.	Enjoy and attend biggest traditional festivals\n5.	Camping\n6.	Canyoning\n7.	Ziplining\n8.	Fresh water scuba diving\n9.	Waterfall rappelling \n";
        city_7.food="\n\n\t\t\tThe food dishes in this region mainly consist of the ingredients like rice, meat and fish. If you are looking for the authentic food dish then you may try “jadoh” which is the dish that is prepared with ingredients like rice and pork";       
    }
    
    void city_mumbai()
    {
    	int flag_1;
    	int sub_choice_2=0;
    	
    	
    	do{
    		sub_choice_2=sub_choose();
			switch(sub_choice_2) //varible of user choice
			{
				case 1:  //Transportation
					int sub_choice;
					cout<<"\nMUMBAI";
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n\t\t\t\t\t1.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 	   			cout<<city_1.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_1.railway<<endl;
					}
					else
					{
						cout<<city_1.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    				cout<<"\nMUMBAI";
    				cout<<city_1.locations<<endl;
    				break;
    			case 3: //Activities
    			cout<<"\nMUMBAI";
    				cout<<city_1.activities<<endl;
    				break;
    			case 4: //Food
    			cout<<"\nMUMBAI";
    				cout<<city_1.food<<endl;
    				break;
    			case 5: //Hostel
    			cout<<"\nMUMBAI";
    				cout<<city_1.hotels<<endl;
    				break;
   			}
   		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_1;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		system("CLS");	
		}while(flag_1==1);
	}
	void city_goa()
	{
		int sub_choice_2=0;
		int flag_2;
		do{
			
    		sub_choice_2=sub_choose();
    		switch(sub_choice_2) //varible of user choice
			{
				case 1:  //Transportation
				cout<<"\nGOA";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n\t\t\t\t\t1.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 	   		cout<<city_2.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_2.railway<<endl;
					}
					else
					{
						cout<<city_2.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    			cout<<"\nGOA";
    				cout<<city_2.locations<<endl;
    				break;
    			case 3: //Activities
    			cout<<"\nGOA";
    				cout<<city_2.activities<<endl;
    				break;
    			case 4: //Food
    			cout<<"\nGOA";
    				cout<<city_2.food<<endl;
    				break;
    			case 5: //Hostel
    			cout<<"\nGOA";
    				cout<<city_2.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_2;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";	
		system("CLS");
		}while(flag_2==1);
	}
	void city_sikkim()
	{
		int sub_choice_3=0;
		int flag_3;
		do{
			
    		sub_choice_3=sub_choose();
    		switch(sub_choice_3) //varible of user choice
			{
				case 1:  //Transportation
				cout<<"\nSIKKIM";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n\t\t\t\t\t1.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 			   cout<<city_3.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_3.railway<<endl;
					}
					else
					{
						cout<<city_3.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    			cout<<"\nSIKKIM";
    				cout<<city_3.locations<<endl;
    				break;
    			case 3: //Activities
    			cout<<"\nSIKKIM";
    				cout<<city_3.activities<<endl;
    				break;
    			case 4: //Food
    				cout<<"\nSIKKIM";
    				cout<<city_3.food<<endl;
    				break;
    			case 5: //Hostel
    				cout<<"\nSIKKIM";
    				cout<<city_3.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_3;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";	
		system("CLS");
		}while(flag_3==1);
	}
	void city_kolkata()
	{
		int sub_choice_4=0;
		int flag_4;
		do{
			
    		sub_choice_4=sub_choose();
    		switch(sub_choice_4) //varible of user choice
			{
				case 1:  //Transportation
					cout<<"\nKOLKATA";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n\t\t\t\t\t1.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 			   cout<<city_4.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_4.railway<<endl;
					}
					else
					{
						cout<<city_4.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    				cout<<"\nKOLKATA";
    				cout<<city_4.locations<<endl;
    				break;
    			case 3: //Activities
    				cout<<"\nKOLKATA";
    				cout<<city_4.activities<<endl;
    				break;
    			case 4: //Food
    				cout<<"\nKOLKATA";
    				cout<<city_4.food<<endl;
    				break;
    			case 5: //Hostel
    				cout<<"\nKOLKATA";
    				cout<<city_4.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_4;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";	
		system("CLS");
		}while(flag_4==1);
    }
	void city_delhi()
	{
		int sub_choice_5=0;
		int flag_5;
		do{
			
    		sub_choice_5=sub_choose();
    		switch(sub_choice_5) //varible of user choice
			{
				case 1:  //Transportation
					cout<<"\nDELHI";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n1\t\t\t\t\t.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 			   cout<<city_5.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_5.railway<<endl;
					}
					else
					{
						cout<<city_5.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    				cout<<"\nDELHI";
    				cout<<city_5.locations<<endl;
    				break;
    			case 3: //Activities
    				cout<<"\nDELHI";
    				cout<<city_5.activities<<endl;
    				break;
    			case 4: //Food
    				cout<<"\nDELHI";
    				cout<<city_5.food<<endl;
    				break;
    			case 5: //Hostel
    				cout<<"\nDELHI";
    				cout<<city_5.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_5;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		system("CLS");	
		}while(flag_5==1);
	}
	void city_pune()
	{
		int sub_choice_6=0;
		int flag_6;
        do{
        	
    		sub_choice_6=sub_choose();
    		switch(sub_choice_6) //varible of user choice
			{
				case 1:  //Transportation
					cout<<"\nPUNE";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n\t\t\t\t\t1.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 			   cout<<city_6.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_6.railway<<endl;
					}
					else
					{
						cout<<city_6.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    				cout<<"\nPUNE";
    				cout<<city_6.locations<<endl;
    				break;
    			case 3: //Activities
    				cout<<"\nPUNE";
    				cout<<city_6.activities<<endl;
    				break;
    			case 4: //Food
    				cout<<"\nPUNE";
    				cout<<city_6.food<<endl;
    				break;
    			case 5: //Hostel
    				cout<<"\nPUNE";
    				cout<<city_6.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_6;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";	
		system("CLS");
		}while(flag_6==1);
	}
	void city_meghalaya()
	{
		int sub_choice_7=0;
		int flag_7;
		do{
			
    		sub_choice_7=sub_choose();
    		switch(sub_choice_7) //varible of user choice
			{
				case 1:  //Transportation
				cout<<"\nMEGHALAYA";
					int sub_choice;
					cout<<"\n\n\t\t\tThe ways of transportation are as follows please choose ur way:- \n1\t\t\t\t\t.Airway\n\t\t\t\t\t2.Railway\n\t\t\t\t\t"<<endl;
					cout<<"\n\n\t\t\tYour choice(1/2):- ";
					cin>>sub_choice;
					if(sub_choice==1)
					{ 
    	 			   cout<<city_7.airway<<endl;
    				}
    				else if(sub_choice==2)
    				{
    					cout<<city_7.railway<<endl;
					}
					else
					{
						cout<<city_7.roadway<<endl;
					}
					break;
    			case 2:  //loacation
    				cout<<"\nMEGHALAYA";
    				cout<<city_7.locations<<endl;
    				break;
    			case 3: //Activities
    				cout<<"\nMEGHALAYA";
    				cout<<city_7.activities<<endl;
    				break;
    			case 4: //Food
    				cout<<"\nMEGHALAYA";
    				cout<<city_7.food<<endl;
    				break;
    			case 5: //Hostel
    				cout<<"\nMEGHALAYA";
    				cout<<city_7.hotels<<endl;
    				break;
    		}	
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another option\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag_7;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";	
		system("CLS");
		}while(flag_7==1);
	}
	int sub_choose(){
		int sub_choice_2=0;
		cout<<"\n\n\t\t\tWhat would u like to see from above list of the city:-\n\t\t\t---------------------------------------------------------- \n\n\t\t\t1.Transportation\n\t\t\t2.Location\n\t\t\t3.Activities\n\t\t\t4.food\n\t\t\t5.Hotel\n\n\n\t\t\tPlese enter SR. no :- \t\t";
		cin>>sub_choice_2;
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		system("CLS");
		return sub_choice_2;
	
	}
};
int main(){
	cities c;
	int flag;
	int main_choice_1=0;
	cout<<"\n\t\t\t\t\t\t\t.....< Welcome to TOUR MANAGEMENT >......";
	
	
	do{
		cout<<"\n\t\t\t\t\t\t_________________________________________________________";
		cout<<"\n\n\n\n\t\t\t\t\t\tOUR CITIES :-\n\n\n\t\t\t\t\t\t\t 1. MUMBAI\n\t\t\t\t\t\t\t 2. GOA \n\t\t\t\t\t\t\t 3. SIKKIM \n\t\t\t\t\t\t\t 4. KOLKATA \n\t\t\t\t\t\t\t 5. DELHI \n\t\t\t\t\t\t\t 6. PUNE\n\t\t\t\t\t\t\t 7. MEGHALAYA\n ";
		cout<<"\t\t\t\t\t\t_________________________________________________________";
		cout<<"\n\n\n\n\t\t\tPlese enter SR. no :- \t\t";
		cin>>main_choice_1;
		system("CLS");
		switch(main_choice_1)
		{
			case 1:
				c.city_mumbai();
				cout<<"\nMUMBAI";
				break;
			case  2:
				c.city_goa();
				cout<<"\nGOA";
				break;
			case 3:
				c.city_sikkim();
				cout<<"\nSIKKIM";
				break;
			case 4:
				c.city_kolkata();
				cout<<"\nKOLKATA";
				break;
			case 5:
				c.city_delhi();
				cout<<"\nDELHI";
			case 6:
				c.city_pune();
				cout<<"\nPUNE";
				break;
			case 7:
				c.city_meghalaya();
				cout<<"\nMEGHALAYA";
				break;
		}
		cout<<"\n\n\t\t\t----------------------------------------------------------\n";
		cout<<"\n\n\n\n\t\t\tDo you want to check another CITY\n\t\t\t1 : YES\n\t\t\t0 : NO \n\t\t\t :- ";
		cin>>flag;
		system("CLS");
		
	}while(flag==1);
	
	if(flag==0){
		cout<<"\n\n\n\t\t\t\t\t<THANK YOU>";
	}
}
