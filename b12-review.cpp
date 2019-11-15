// b12 review for exam

// question 12
// counts how many words there are in one string by counting spaces
int wordCounter(char *str)
{
    int counter = 0;
    // count the spaces
    for(int i=0;i<strlen(str);i++)
    {
        if(str[i]==' ')
            counter++;
    }
    // return the # spaces +1
    return counter +1;
}

// question 16
// function to change values of struct
void changeResort(Resort &r) // strickly known as pass by reference
{
    cout << ;
    cin >> r.resortName;
}

//
void changeResort(Resort *r) // strickly known as pass by pointer
{
    cout << ;
    cin >> r->resortName;
}

// question 24
//
class Date
{
    private:
        int month;
        int day;
        int year;
    public:
        Date(int,int,int);
        void displayDate() const;
}
//
void Date::displayDate() const
{
    cout << month << "/" << day << "/" << year;
}
//
Date::Date(int m,int d,int y)
{
    if(d>31 || d<1)
    {
        cout << "Error, bad day!";
        day=0;
    }
    else
    {
        day=d;
    }
    if(m<1 || m>12)
    {
        cout << "Error, bad month!";
        month=0;
    }
    else
    {
        month=d;
    }
}
//
int main()
{
    date input(11,12,2019);
    input.displayDate();
}