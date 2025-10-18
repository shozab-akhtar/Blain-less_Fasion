#include <iostream>
#include <unistd.h>
using namespace std;
float P_Khaki, P_Black, P_Cream, P_Gray, P_NavyBlue;
float S_White, S_Purple, S_Red, S_Black, S_Pink, S_Maroon, S_Blue, S_Aqua, S_Gray, S_Navyblue=false;

int main_manu, P_Choice, Change_inv;

void Enter_Shirts(){
	cout<<"Enter 1 or 0 dependeing on which item you have avaiable.\n";
	cout<<"\n";
	sleep(4);
	cout<<"White Shirt?\n";
	cin>>S_White;
	cout<<"Purple Shirt?\n";
	cin>>S_Purple;
	cout<<"Red Shirt?\n";
	cin>>S_Red;
	cout<<"Black Shirt?\n";
	cin>>S_Black;
	cout<<"Pink Shirt?\n";
	cin>>S_Pink;
	cout<<"Maroon Shirt?\n";
	cin>>S_Maroon;
	cout<<"Blue Shirt?\n";
	cin>>S_Blue;
	cout<<"Aqua Shirt?\n";
	cin>>S_Aqua;
	cout<<"Gray Shirt?\n";
	cin>>S_Gray;
	cout<<"Navy Blue Shirt?\n";
	cin>>S_Navyblue;
}

void Enter_Pants(){
	cout<<"Enter 1 or 0 dependeing on which item you have avaiable.\n";
	cout<<"\n";
	sleep(4);
	cout<<"Khaki Pant?\n";
	cin>>P_Khaki;
	cout<<"Black Pant?\n";
	cin>>P_Black;
	cout<<"Cream Pant?\n";
	cin>>P_Cream;
	cout<<"Gray Pant?\n";
	cin>>P_Gray;
	cout<<"Navy Blue Pant?\n";
	cin>>P_NavyBlue;
}

void Khaki_Pant(){
	if(S_White==false&& S_Purple==false &&S_Red==false &&S_Black==false &&S_Maroon==false &&S_Blue==false &&S_Gray==false&&S_Navyblue==false){
		cout<<"You dont have any available combination with 'Khaki Pant'.\a\n";
		sleep(3);
	}
	if(S_White==true){
		cout<<"You Can Wear White Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Purple==true){
		cout<<"You Can Wear Purple Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Red==true){
		cout<<"You Can Wear Red Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Black==true){
		cout<<"You Can Wear Black Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Maroon==true){
		cout<<"You Can Wear Maroon Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Blue==true){
		cout<<"You Can Wear Blue Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Gray==true){
		cout<<"You Can Wear Gray Shirt With a Khaki Pant.\n";
		sleep(2);
	}
	if(S_Navyblue==true){
		cout<<"You Can Wear Navy Blue Shirt With a Khaki Pantt.\n";
		sleep(2);
	}
}

void Black_Pant(){
	if(S_White==0 &&S_Purple==0 &&S_Red==0 &&S_Maroon==0 && S_Blue==0 &&S_Gray==0){
		cout<<"You dont have any available combination with 'Black Pant'.\a\n";
		sleep(3);
	}
	if(S_White==1){
	cout<<"You Can Wear White Shirt With a Black pant.\n";
	sleep(2);
	}
	if(S_Purple==1){
	cout<<"You Can Wear Purple Shirt With a Black pant.\n";
	sleep(2);
	}
	if(S_Red==1){
	cout<<"You Can Wear Red Shirt With a Black pant.\n";
	sleep(2);
	}
	if(S_Maroon==1){
	cout<<"You Can Wear Maroon Shirt With a Black pant.\n";
	sleep(2);
	}
	if(S_Blue==1){
	cout<<"You Can Wear Blue Shirt With a Black pant.\n";
	sleep(2);
	}
	if(S_Gray==1){
	cout<<"You Can Wear Gray Shirt With a Black pant.\n";
	sleep(2);
	}
}

void Cream_Pant(){
	if(S_Pink==0 &&S_Maroon==0 &&S_Navyblue==0){
		cout<<"You dont have any available combination with 'Cream Pant'.\a\n";
		sleep(3);
	}
	if(S_Pink==1){
	cout<<"You Can Wear Pink Shirt With a Cream  Pant.\n";
	sleep(2);	
	}
	if(S_Maroon==1){
		cout<<"You Can Wear Maroon Shirt With a Cream  Pant.\n";
		sleep(2);
	}
	if(S_Navyblue==1){
		cout<<"You Can Wear Navy Blue Shirt With a Cream  Pant.\n";
		sleep(2);
	}
}

void Gray_Pant(){
	if(S_Purple==0 &&S_Red==0 &&S_Black==0 &&S_Blue==0 &&S_Aqua==0){
		cout<<"You dont have any available combination with 'Gray Pant'.\a\n";
	}
	if(S_Purple==1){
		cout<<"You Can Wear Purple Shirt With a Gray Pant.\n";
		sleep(2);
	}
	if(S_Red==1){
		cout<<"You Can Wear Red Shirt With a Gray Pant.\n";
		sleep(2);
	}
	if(S_Black==1){
		cout<<"You Can Wear Black Shirt With a Gray Pant.\n";
		sleep(2);
	}
	if(S_Blue==1){
		cout<<"You Can Wear Blue Shirt With a Gray Pant.\n";
		sleep(2);
	}
	if(S_Aqua==1){
		cout<<"You Can Wear Aqua Shirt With a Gray Pant.\n";
		sleep(2);
	}	
}

void NavyBlue_Pant(){
	if(S_White==0 &&S_Purple==0 &&S_Black==0 &&S_Maroon==0 &&S_Aqua==0 &&S_Gray==0){
		cout<<"You dont have any available combination with 'Navy Blue Pant'.\a\n";
		sleep(3);
	}
	if(S_White==1){
		cout<<"You Can Wear White Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
	if(S_Purple==1){
		cout<<"You Can Wear Purple Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
	if(S_Black==1){
		cout<<"You Can Wear Black Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
	if(S_Maroon==1){
		cout<<"You Can Wear Maroon Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
	if(S_Aqua==1){
		cout<<"You Can Wear Aqua Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
	if(S_Gray==1){
		cout<<"You Can Wear Gray Shirt With a Navy Blue Pant.\n";
		sleep(2);
	}
}

void Pant_Choice(){
	cout<<"\n";
	cout<<"Enter which pant combination would you like to see.\n";
	cout<<"\n";
	sleep(2);
	cout<<"1 for Khaki Pant.\n";
	sleep(1);
	cout<<"2 for Black Pant.\n";
	sleep(1);
	cout<<"3 for Cream Pant.\n";
	sleep(1);
	cout<<"4 for Gray Pant.\n";
	sleep(1);
	cout<<"5 for Navy Blue Pant.\n";
	sleep(1);
	cout<<"\n";
	cin>>P_Choice;
	cout<<"\n";
	switch (P_Choice)
	{
		case 1:
			if(P_Khaki==1){
				Khaki_Pant();
			}else{
				cout<<"You dont have Khaki Pant.\n\a";
			}
			break;
		case 2:
			if(P_Black==1){
				Black_Pant();
			}else{
				cout<<"You dont have Black Pant.\n\a";
			}
			break;
		case 3:
			if(P_Cream==1){
				Cream_Pant();
			}else{
				cout<<"You dont have Cream Pant.\n\a";
			}
			break;
		case 4:
			if(P_Gray==1){
				Gray_Pant();
			}else{
				cout<<"You dont have Gray Pant.\n\a";
			}
			break;
		case 5:
			if(P_NavyBlue==1){
				NavyBlue_Pant();
			}else{
				cout<<"You dont have Navy Blue Pant.\n\a";
			}
			break;
		default:
			break;
	}
	
}

void Change_Value(){
	cout<<"Press '1' to change your inventory of Pants.\n";
	sleep(1);
	cout<<"Press '2'to change your inventory of Shirts.\n";
	sleep(1);
	cin>>Change_inv;
	switch (Change_inv){
		case 1:
			Enter_Pants();
			break;
		case 2:
			Enter_Shirts();
			break;
		default:
			cout<<"Accessories Comming Soon!\a\n";
			break;
			
	}
}

int main()
{
	cout<<"\n";
	cout<<"Welcome to brain-less fashion!\n";
	cout<<"\n";
	for(;;){
	cout<<"\n";
	cout<<"Press the following keys to go to respective pages\n";
	cout<<"\n";
	sleep(2);
	cout<<"Press '1' to change your inventory wof Shirts or Pants!\n";
	sleep(2);
	cout<<"Press '2' to view possible combinations with your cloths!\n";
	cout<<"\n";
	cin>>main_manu;
	cout<<"\n";
	switch (main_manu){
	
	case 1:
		Change_Value();
		break;
	case 2:
		Pant_Choice();
		break;
	default:
		cout<<"You entered invalid option!\n\a";
		break;	
	}		
	}
	return 0;
}
