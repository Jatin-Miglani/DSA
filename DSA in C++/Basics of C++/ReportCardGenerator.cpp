#include <iostream>
using namespace std;
int main(){
    string name{};
    cout<<"Enter your First name : ";
    cin>>name;
    string lname{};
    cout<<"Enter your Last name : ";
    cin>>lname;
    string fname{};
    cout<<"Enter your Father's First Name : ";
    cin>>fname;
    string flname{};
    cout<<"Enter your Father's Last Name : ";
    cin>>flname;
    int rollno{};
    cout<<"Enter your Unique id : ";
    cin>>rollno;
    string class1{};
    cout<<"Enter your Class and Section : ";
    cin>>class1;
    float m1{},m2{},m3{},m4{},m5{};
    cout<<"Enter all your marks out of Total Marks seperated by space here. The order is first Maths, English, Science, EVS, Computers : ";
    cin>>m1;
    cin>>m2;
    cin>>m3;
    cin>>m4;
    cin>>m5;
    float avgm{};
    avgm=(m1+m2+m3+m4+m5)/5;

    cout<<"You achieved "<<avgm<<" %"<<endl;

    cout<<"Here is your repost Card"<<endl;

    cout<<"==============================REPORT CARD=============================="<<endl;
    cout<<"----------------ST BLAH BLAH SCHOOL, Amritsar(14300X)------------------"<<endl;
    cout<<"= Name: "<<name<<" "<<lname<<endl;
    cout<<"= Father's Name: "<<fname<<" "<<flname<<endl;
    cout<<"= Roll no: "<<rollno<<endl;
    cout<<"= Class: "<<class1<<endl;
    cout<<"======================================================================="<<endl;
    cout<<"= Marks Achieved"<<endl;
    cout<<"= Maths: "<<m1<<endl;
    cout<<"= English: "<<m2<<endl;
    cout<<"= Science: "<<m3<<endl;
    cout<<"= EVS: "<<m4<<endl;
    cout<<"= Computer: "<<m5<<endl;
    cout<<"========================================================================"<<endl;
    cout<<"= Your %age is: "<<avgm<<endl;
    if(avgm<35.0){
        cout<<"=You're Considered to be fail"<<endl;
    }
    else{
        cout<<"= You're Pass"<<endl;
    }
    cout<<"========================================================================="<<endl;
    cout<<"= Grades Offered "<<endl;
    cout<<"= A+ means Excellent"<<endl;
    cout<<"= A means Very Good"<<endl;
    cout<<"= B+ means Good"<<endl;
    cout<<"= B means Better"<<endl;
    cout<<"= C+ means Can do Better"<<endl;
    cout<<"= C means Work Hard"<<endl;
    cout<<"= F means Fail"<<endl;


    if(avgm>=95.0){
        cout<<"= You recieved A+ "<<endl;
        
    }
    if(avgm>=85.0 && avgm<95.0){
        cout<<"= You recieved A "<<endl;
        
    }
    if(avgm>=75.0 && avgm<85.0){
        cout<<"= You recieved B+ "<<endl;
        
    }
    if(avgm>=65.0 && avgm<75.0){
        cout<<"= You recieved B "<<endl;
        
    }
    if(avgm>=55.0 && avgm<65.0){
        cout<<"= You recieved C+ "<<endl;
        
    }
    if(avgm>=35.0 && avgm<55.0){
        cout<<"= You recieved C "<<endl;
        
    }
    if(avgm<35.0){
        cout<<"= You recieved F "<<endl;
        
    }
    cout<<"=========================================================================="<<endl;

    cout<<"= ISSUED UNDER NAME OF PRINCIPAL"<<endl;
    cout<<"= "<<endl;
    cout<<"= Ariana Grande"<<endl;
    cout<<"= (Principal)"<<endl;
    cout<<"= Issued on 23/08/2022"<<endl;

    cout<<"==========================================================================="<<endl;

    
    return 0;





}