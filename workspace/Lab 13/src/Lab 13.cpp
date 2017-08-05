// Example program

#include <iostream>

#include <string>

#include <iomanip>

using namespace std;

void scorecard(int Scoring1[3], string &Names2);

void card(int Name[3], int &I, string &Names, int &Scoring);

int main()

{

    string name;

    int name1[3];

cout<<"Enter name of player: "<<endl;

cin>>name;

cout<<"Enter the number of strokes for each hole."<<endl;

for(int i=1; i<=3; i++)

{

cout<<"hole["<<i<<"]:"<<endl;

cin>>name1[i];

card(name1[i], i,name);

}



return 0;

}

void scorecard(int Scoring1[3], string &Names2)

{

    int total=0;

    int total1=0;

    cout<<Names2<<", here is your scorecard:"<<endl;

    cout<<"Hole :  ";



for(int y=1; y<=3; y++)

{

cout<<y<<"    ";

}

cout<<endl;

cout<<"-----------------"<<endl;

cout<<"Score :  ";

cout<<setw(3)<<Scoring1[i];

for(int k=1; k<=3; k++)

{

total=total+Scoring1[k];

if(Scoring1[k]==1)

{

total1=total1+Scoring1[k];

}

}

cout<<endl<<"Your total is "<<total<<endl;

if(total1>0)

cout<<"You scored "<<total1<<" holes-in-one."<<endl;



}

void card(int Name[I], int &I, string &Names, int &Scoring)

{

  //Name=Scoring[I];

  cout<<Name[I];

  if(I==3)

  scorecard(Scoring, Names);

}
