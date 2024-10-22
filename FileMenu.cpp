#include<iostream>
#include<fstream>
using namespace std;
class FileMenu:public fstream{
    string path;
    string fileName;
    string totalPath;
    ofstream file;
    ifstream fileR;
    public:
    FileMenu(string path,string fileName){
        cout<<"Running File Constructor"<<endl;
        this->path=path;
        this->fileName=fileName;
        this->totalPath=path+fileName;
    }
      bool fileExist(){
        fileR.open(totalPath);
        if(!fileR){
        cout<<"File Not Found"<<endl;
        return false;
        }
        fileR.close();
        return true;
    }
    void createFile(){
        if (!fileExist())
        {
            cout<<"File Already Exists"<<endl;
            return;
        }
        
        file.open(totalPath,ios::out);
        cout<<"File Created"<<endl;
    }

    void writeFile(char data[]){
         if (!fileExist())
        {
            appendFile(data);
            return;
        }
        file.open(totalPath,ios::out);
        file<<data<<endl;
        file.close();
    }
  
    void readFile(){
        if(!fileExist())return;
        fileR.open(totalPath);
        char c;
        char str[200];
        int i;
        while (fileR>>noskipws>>c)
        {
            // str[i++]=c;
            cout<<c;
        }
        cout<<str;
        fileR.close();// i an fine
        
    }
    
    void appendFile(char data[]){
        if(!fileExist())return;
        file.open(totalPath,ios::app);
        file<<data;
        file.close();
    }
    void  searchData(string word){
        if(!fileExist())return;
        fileR.open(totalPath);
        char c[500];
        int i=0;
        while (!fileR.eof())
        {
           fileR>>c[i++];
        }
        cout<<c;

        
    }
    void exit(){
        file.close();
        cout<<"File Closed";
    }
    
    
};
int main() {
    FileMenu f("D://","menu1.txt");
    char c[]="I am Fine1";
    char c1[]="Appedning This char";
    // f.writeFile(c);
    // f.appendFile(c1);
    // f.appendFile(c1) ;
    f.readFile();
    // cout<<endl;
    f.searchData("f");
    // cout<<endl;
    return 0;
}