#include <iostream>

using namespace std;

int main()
{
    int num;
    int guess;
    int tries=7;
    int level=1;
    std::cout<<"Enter Your Expected End Level : ";
    std::cin>>level;
    int cnt_level=1;
    int cnt_tries=7;
    int limit = 100;
    
    int correct=0;
    srand(time (NULL));
    num = (rand()%limit)+1;
    std::cout <<"****** round" <<cnt_level<<"NUMBER GUESSING GAME ****** \n";
    
    
    
    
    
    do{
        std::cout << "****numbers of tries**** \n";
        std::cout<<tries<<' '<<cnt_level<<'\n';
        std::cout<<"  ENTER your guess between (1-"<< limit<<"):  " ;
        std::cin>> guess ;
        tries--;

        if( guess >  num ){
            std::cout << " too high ! \n" ;
        }
        else if (guess <  num){
            std::cout<<"too low ! \n" ;
        }
        else if (guess==num){
            correct = 1 ;
            std::cout << " CORRECT ! # of tries : "<<tries<< '\n';
            std::cout << " Go To Next Level \n";
            cnt_tries+=7;
            tries=cnt_tries;
            limit*=10;
            cnt_level++;
             num = (rand()%limit)+1;
            guess=0;
        }
        if(tries<=0){
            cout<<"Try Again"<<'\n';
        }
        
    }while( guess != num && tries>0 && cnt_level<=level);
    std::cout << "********************************************\n";
    return 0;
}

