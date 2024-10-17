    #include<iostream>
    using namespace std;
    int main() {
    int *stars=new int;
    *stars=5000;
    delete stars;
    cout<<"Stars "<<*stars<<endl;
    *stars=700;
    cout<<"Stars "<<*stars<<endl;
    delete stars;
    stars=NULL;
    cout<<stars;
    
     return 0;
    }