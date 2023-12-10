#include<iostream>
#include<string>

using namespace std;

string kategoriBMI(float BMI) {
	if (BMI < 18.5)
		return "underweight";
	else if (BMI >= 18.5 && BMI <= 24.9)
		return "normal";
	else if (BMI >= 25 && BMI <= 29.9)
		return "overweight";
	else
		return "obesitas";
}

int main(){
	string nama;
	float bb, tb;
	
	cout<<"Masukkan nama anda : ";
	cin>>nama;
	cout<<"Berapa berat badan anda (kg): ";
	cin>>bb;
	cout<<"Berapa tinggi badan anda (meter) : ";
	cin>>tb;
	
	float BMI = bb / (tb*tb);
	
	cout<< "Hallo " << nama << ", dengan berat badan " << bb << " kg dan tinggi " << tb << " meter, maka BMI anda termasuk kategori "<< kategoriBMI(BMI) << endl;
	
}
