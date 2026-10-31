#include<iostream>
#include<memory>
using namespace std;

int main(){
    //lets see some unique_ptr first
    unique_ptr<int> p1=make_unique<int>(1);
    cout<<"Unique pointer: "<<*p1<<endl;

    //shared_ptr
    shared_ptr<int> p2=make_shared<int>(2);
    shared_ptr<int> p3=p2;

    cout<< "Shared pointer: "<< *p2 <<endl;
    cout<<"Reference count: "<< p2.use_count() <<endl;

    //weak_ptr
    weak_ptr<int> p4=p2;
    cout<<"weak pointer: ";

    if(auto temp =p4.lock()){
        cout<<*temp<<endl;
    }
    return 0;
}
