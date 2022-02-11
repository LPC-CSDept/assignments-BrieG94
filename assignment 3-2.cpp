#include <iostream>
using namespace std;

int main ()
{
 int numFemale;
 int numMale;
 int total;
 int percentagetotal;


 double femalepercentage;
 double malepercentage;

 cout <<" How many female students are in the class: ";
 cin >> numFemale;

 cout << "How many male students are in the class: ";
 cin >> numMale;

 total = (numFemale + numMale);

 femalepercentage = (numFemale / total * 100);

 malepercentage = (numMale / total * 100);


 percentagetotal = (malepercentage + femalepercentage );

 cout << femalepercentage << malepercentage << endl;


}