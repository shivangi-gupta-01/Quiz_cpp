#include <iostream>
using namespace std;
int playQuiz(){
    char c;
    char option;
    int score=0;

    // some instructions for the user-----
    cout<<"------Welcome to Quiz Game--------"<<endl;
    cout<<"====Please Follow the Given Instructions==="<<endl;
    cout<<" --> Quiz contains 10 questions"<<endl;
    cout<<" --> 1 mark will be awarded for each correct answer"<<endl;
    cout<<" --> No negative markng"<<endl;
    cout<<" --> Press s to start the quiz"<<endl;
    cout<<" please select option a,b,c"<<endl;
    cout<<"---------------------------------------"<<endl;
    // initialising the game-
    cin>>c;
    if(c=='s'|| c=='S'){
        cout<<"Q1 What is the capital of India"<<endl;
        cout<<"(a)Gujrat (b)Delhi (c)Jhansi "<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score++;
        }
        cout<<"Q2 Who is the prime minister of India"<<endl;
        cout<<"(a)Modi (b)adityanath (c)Yogi "<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score++;
        }
        cout<<"Q3 What is the National Bird of India"<<endl;
        cout<<"(a)Parrot (b)Cow (c)Peacock "<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score++;
        }
        cout<<"Q4 What is the National animal of India"<<endl;
        cout<<"(a)Tiger (b)lion (c)Dog "<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score++;
        }
        cout<<"Q5 What is the National Flower of India"<<endl;
        cout<<"(a)Rose (b)Lily (c)Lotus "<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score++;
        }
        cout<<"Q6 Who is the chief minister of UP"<<endl;
        cout<<"(a)Yogi (b)Mohan (c)kejriwal "<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score++;
        }
        cout<<"Q7 What is the capital of MP"<<endl;
        cout<<"(a)Bhopal (b)Gwalior (c)Jhansi "<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score++;
        }
        cout<<"Q8 What is the capital of UP"<<endl;
        cout<<"(a)Kanpur (b)Lukhnow (c)Jhansi "<<endl;
        cin>>option;
        if(option=='b'|| option=='B'){
            score++;
        }
        cout<<"Q9 What is the capital of Jharkhand"<<endl;
        cout<<"(a)Ranchi (b)Ramgarh (c)Plamu "<<endl;
        cin>>option;
        if(option=='a'|| option=='A'){
            score++;
        }
        cout<<"Q10 Who is the leader of congress"<<endl;
        cout<<"(a)Modi (b)Sonia (c)Rahul "<<endl;
        cin>>option;
        if(option=='c'|| option=='C'){
            score++;
        }
    }\
    // This condition is used if the user has enterd another character 
    else{
        cout<<"You have entered wrong value, please enter s "<<endl;
        playQuiz();
    }
    return score;
}
int main(){
    int playQuiz(void);
    int finalresult=0;
    play:
    finalresult=playQuiz();
    // Printing the Final score
    char playAgain;
    cout<<"Your final score is "<<finalresult<<endl;
    if(finalresult>4){
        cout<<"Pass"<<endl;
        // if the user wants to replay the quiz
        cout<<"Do you want to play again y or n ?"<<endl;
        cin>>playAgain;
        if(playAgain=='y'|| playAgain=='Y'){
        goto play;
        }
        else{
            cout<<"Thank you....."<<endl;
        }
    }
    else{
        cout<<"!!!! Fail !!!!"<<endl;
        cout<<"Do you want to play again y or n ?"<<endl;
        cin>>playAgain;
        if(playAgain=='y'|| playAgain=='Y'){
        goto play;
        }
        else{
            cout<<"Thank you....."<<endl;
        }
    }
}