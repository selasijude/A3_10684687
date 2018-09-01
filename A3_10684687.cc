#include <iostream>

using namespace std;

int main()
{
    int mrk;
    cout <<"Welcome to my grading system"<< endl;
    cout<<endl;

    cout<<"Kindly enter your Exam sxore"<<endl;
    cin>>mrk;

    if(mrk >= 80 && mrk<= 100)
    {
        cout<<"You had an 'A'"<<endl;
    }

    else if(mrk >= 75 && mrk<= 79)
    {
        cout<<"You had a 'B+'"<<endl;
    }

    else if(mrk >= 70 && mrk<= 74)
    {
        cout<<"You had a 'B'"<<endl;
    }

    else if(mrk >= 65 && mrk<= 69)
    {
        cout<<"You had a 'c+'"<<endl;
    }

    else if(mrk >= 60 && mrk<= 64)
    {
        cout<<"You had a 'C'"<<endl;
    }

    else if(mrk >= 55 && mrk<= 59)
    {
        cout<<"You had a 'D+'"<<endl;
    }

    else if(mrk >= 50 && mrk<= 54)
    {
        cout<<"You had a 'D'"<<endl;
    }

    else if(mrk >= 45 && mrk<= 49)
    {
        cout<<"You had an 'E'"<<endl;
    }
    else if(mrk >= 0 && mrk<= 44)
    {
        cout<<"You had an 'F'"<<endl;
    }
    else {
        cout<<"Wrong Input"<<endl;
    }


    return 0;
}
