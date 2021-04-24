//Ex.2B.cpp Oscar Villagrana
// This program checks your grades


#include <iostream>
using namespace std;


int main()
{

    int num_assgmts = 0
    int total = 0
    int score = 0
    int avrg_score = 0
    
    cout << "How many assignments are there?: " << endl;
    cin << num_assgmts << endl;

    for ( int i = 1; i < num_assgmts + 1; ++1)
    {        
        cout << "What was your grade for assignment number " << i << " ? " << endl;
        cin >> real_score;
        int real_score = '0';
        while (real_score <= 0 && real_score >= 100)
        {
            cout << "Thats not a real score " << endl;
            cout << "What was your real grade for that assignment? " << endl;
            cin >> real_score;
        }
        total + real_score = total
    }



    // print out the total points scored and average score
    cout << "Total points: " << total << endl;
    total % num_assgmts = avrg_score
    cout << "Average Score: " << avrg_score << endl;

    // print out letter grade for the average score
    // standard grading formila:

    if (avrg_score <= 90 && >= 100)
        cout << "You get an A! Way to go " << endl;
    if (avrg_score <= 80 && >= 100)
        cout << "You get an B! That works " << endl;
    if (avrg_score <= 70 && >= 100)
        cout << "You get an C! Fair enough " << endl;
    if (avrg_score <= 60 && >= 100)
        cout << "You get an D! Good try " << endl;
    if (avrg_score >= 59 && >= 0)
        cout << "You get an F! Bummer " << endl;

}



    
