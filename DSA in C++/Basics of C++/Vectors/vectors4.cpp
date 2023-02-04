#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> vector1;
    vector <int> vector2;
    vector1.push_back(10);
    vector1.push_back(20);
    cout<<"Now the first element is "<<vector1.at(0)<<endl;
    cout<<"Now the second element is "<<vector1.at(1)<<endl;
    cout<<"The size of vector1 is "<<vector1.size()<<endl;
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<"Now the first element is "<<vector2.at(0)<<endl;
    cout<<"Now the second element is "<<vector2.at(1)<<endl;
    cout<<"The size of vector2 is "<<vector2.size()<<endl;
    vector <vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<"Elements of vector_2d are"<<endl;

    cout<<"1 element "<<vector_2d[0][0]<<endl;
    cout<<"2 element "<<vector_2d[0][1]<<endl;
    cout<<"3 element "<<vector_2d[1][0]<<endl;
    cout<<"4 element "<<vector_2d[1][1]<<endl;

    vector1.at(0)=1000;
    cout<<" NowElements of vector_2d are"<<endl;

    cout<<"1 element "<<vector_2d[0][0]<<endl;
    cout<<"2 element "<<vector_2d[0][1]<<endl;
    cout<<"3 element "<<vector_2d[1][0]<<endl;
    cout<<"4 element "<<vector_2d[1][1]<<endl;

    cout<<"Elements of vector1 are"<<endl;

    cout<<"Now the first element is "<<vector1.at(0)<<endl;
    cout<<"Now the second element is "<<vector1.at(1)<<endl;

    cout<<"The size of 2d vector is "<<vector_2d.size()<<endl;

    return 0;








}