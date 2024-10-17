
using namespace std;
namespace mymath{
    int sqrt(int n){
        if (n==0 || n==1)
        {
            return n;
        }
        int check=1;
        int i=1;
        while (check<=n)
        {
            i++;
            check=i*i;
        }
        return i-1;
        
        
    }
}
