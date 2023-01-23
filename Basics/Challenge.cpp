#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    vector <int> list{};
    char selection{};
    do{
        cout<<"Press P for printing the list"<<endl;
        cout<<"Press A for adding the list"<<endl;
        cout<<"Press M for finding the mean of the list"<<endl;
        cout<<"Press S for finding the smallest of the list"<<endl;
        cout<<"Press L for finding the largest of the list"<<endl;
        cout<<"Press F for finding the Item of the list"<<endl;

        cout<<"Press Q for Exit"<<endl;
        cout<<endl;
        cout<<"Enter your selection ";
        cin>>selection;
        
        if(selection=='p'|| selection=='P'){
            if(list.size()==0){
                cout<<"The list is empty"<<endl;
                cout<<endl;
            }
            else{cout<<"[";
                for(auto num: list){
                    
                    cout<<num<<" ";
                    
                }
                cout<<"]";
                cout<<endl;
            }
        }
        if(selection=='A'|| selection=='a'){
            int number{};
            cout<<"Enter how many numbers you want to add :";
            cin>>number;
            int i{1};
            int numb{};
            do{
                cout<<"Enter "<<i<<" number :";
                cin>>numb;
                list.push_back(numb);
                i++;
            }while(i<=number);
            cout<<list.size()<<" is the size of list"<<endl;
        }
        if(selection=='m'|| selection=='M'){
            if(list.size()==0){
                cout<<"Your list is empty"<<endl;
                cout<<endl;
                
            }
            else{
                int sum{0};
                double avg{};
                for(auto num:list){
                    sum=sum+num;
                    avg=(double)(sum)/(list.size());
                
                }
                cout<<fixed<<setprecision(1);
                cout<<"The sum of all the numbers in this list is :"<<sum<<endl;
                cout<<"The average of all the numbers in this list is :"<<avg<<endl;
            }
            
        }
        if(selection=='l'|| selection=='L'){
            if(list.size()==0){
                cout<<"Your list is empty"<<endl;
                cout<<endl;
                
            }
            else{
                int largest;
                largest=list[0];
                for(auto num: list){
                    if(largest<num){
                        largest=num;
                    }
                    
                    else{
                        continue;
                    }
                }
                cout<<"Largest is "<<largest<<endl;
            }
            
        }
        if(selection=='S'|| selection=='s'){
            if(list.size()==0){
                cout<<"Your list is empty"<<endl;
                cout<<endl;
                
            }
            else{
                int smallest;
                smallest=list[0];
                for(auto num : list){
                    if(smallest>num){
                        smallest=num;

                    }
                    else{
                        continue;

                    }
                }
                cout<<"smallest is "<<smallest<<endl;
                }
                
                
            
        }
        
        if(selection=='F'|| selection=='f'){
            if(list.size()==0){
                cout<<"The list is empty"<<endl;
                cout<<endl;
            }
            else{
                int search{};
                cout<<"Enter the element for searching :";
                cin>>search;
                for(auto num: list){
                    if(search==num){
                        cout<<"Yes its present";
                        int i{0};
                        for(i;i<list.size();i++){
                            if(list[i]==search){
                                cout<<"The index of "<<num<<" is "<<i<<endl;
                                break;
                            }
                            else{
                                continue;
                            }
                        }
                    }
                }
                }
            }
    }while(selection!='q' && selection!='Q');
}