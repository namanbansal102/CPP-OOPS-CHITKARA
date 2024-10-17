#include<iostream>
using namespace std;
class Cricket{
    protected:
    int score;
    int players;
    void score_play(){
        cout<<"Score is:"<<score;
    } 
};
class T20:Cricket{
    void increment_score_t20(){
        score++;
    }

};
class OneDay:Cricket{
    void increment_players_Oneday(){
        players++;
    }
};
class TestMatch:Cricket{
    void total_score_display(){
        cout<<"Score is:"<<score;

        cout<<"Player is:"<<players;
    }
};
int main() {
        cout<<"Cricket Class";
        const int var1=10;
        const int* ptr1=&var1;
        cout<<"the old VALUE of ptr1:"<<*ptr1<<endl;
        int *q=(int*)&c;
        return 0;
    }