class Date
{
private:
    int month;
    int day;
    int year;
public:
    Date();
    Date(int m, int d, int y): month(m), day(d), year(y){}
    ~Date();
};

Date::Date(){

}

Date::~Date()
{
}
