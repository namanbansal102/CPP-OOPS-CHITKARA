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
        file.open(totalPath,ios::out);
        cout<<"File Created"<<endl;
    }

    void writeFile(char data[]){
        file.open(totalPath,ios::out);
        file<<data<<endl;
        file.close();
    }
  
    void readFile(){
        if(!fileExist())return;
        fileR.open(totalPath);
        while (!fileR.eof())
        {
            char c;
            fileR>>c;
            cout<<c;
        }
        fileR.close();
    }
    
    void appendFile(char data[]){
        if(!fileExist())return;
        file.open(totalPath,ios::app);
        file<<data;
        file.close();
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
    f.writeFile(c);
    // f.appendFile(c1);
    // f.appendFile(c1) ;
    f.readFile();
    cout<<endl;
    return 0;
}