#include <bits/stdc++.h>

using namespace std;

class library
{
public:
    int id;
    int price;
    int pages;
    int roll_no;
    char student_name[50];
    char author_name[50];
    char book_name[50];

    void set_data();
    void display_data() const;
};

void library :: set_data()
{
    cout<<"enter the book id : ";
    cin>>id;
    cout<<"enter the roll number of the student : ";
    cin>>roll_no;
    cout<<"enter the student name : ";
    cin.getline(student_name,50,'$');
    cout<<"enter the author name : ";
    cin.getline(author_name,50,'$');
    cout<<"enter the book name : ";
    cin.getline(book_name,50,'$');
    cout<<"enter the book pages : ";
    cin>>pages;
    cout<<"enter the book price : ";
    cin>>price;

}

void library :: display_data() const
{
    cout<<"book id : "<<id<<endl;
    cout<<"student name : "<<student_name<<endl;
    cout<<"student roll number : "<<roll_no<<endl;
    cout<<"enter the author name : "<<author_name<<endl;
    cout<<"enter the book name : "<<book_name<<endl;
    cout<<"enter the book pages : "<<pages<<endl;
    cout<<"enter the book price : "<<price<<endl;
}

int main()
{
    library lib[50];
    int input=0;
    int cnt=0;

    while(input!=3)
    {
        cout<<"enter number 1 to input the book details "<<endl;
        cout<<"enter number 2 to display the book details "<<endl;
        cout<<"enter number 3 to quit from the loop "<<"\n\n\n";
        cin>>input;
        system("cls");

        switch(input)
        {
           case 1 : cout<<"input details are :"<<endl;
                     lib[cnt].set_data();
                     cnt++;
                     cout<<endl;
                     break;
           case 2 : cout<<"display details are :"<<endl;
                    for(int i=0;i<cnt;i++)
                    {
                       lib[i].display_data();
                       cout<<endl;
                    }
                    cout<<"===================================="<<endl<<endl;
                     break;
           case 3 : cout<<"quit from the loop"<<endl;
                    exit(0);
                    cout<<endl;
                    break;
           default :cout<<"you may have entered the wrong value "<<endl;
                    break;
        }
    }

    return 0;
}
