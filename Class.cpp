//HackerRank
//C++ [Classes]
//Class

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:

int a,st;
string fn,ln;

void set_age(int age)
{
a=age;
}

void set_standard(int std)
{
st=std;
}

void set_first_name(string fnm)
{
fn=fnm;
}

void set_last_name(string lnm)
{
ln=lnm;
}

int get_age()
{
return a;
}

string get_last_name()
{
return ln;
}

string get_first_name()
{
return fn;
}

int get_standard()
{
return st;
}

string to_string()
{
string s=std::to_string(a)+","+fn+","+ln+","+std::to_string(st);
return s;
}
};

int main()
{
int age, standard;
string first_name, last_name;
cin>>age>>first_name>>last_name>>standard;

Student st;
st.set_age(age);
st.set_standard(standard);
st.set_first_name(first_name);
st.set_last_name(last_name);

cout<<st.get_age()<<"\n";
cout<<st.get_last_name()<<", "<<st.get_first_name()<<"\n";
cout<<st.get_standard()<<"\n";
cout<<"\n";
cout<<st.to_string();

return 0;
}