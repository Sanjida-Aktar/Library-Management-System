#include<iostream>
using namespace std;

class Book{
    protected:
    int bookid;
    string title;
    string author;

    public:
    virtual void set_inputBook(int id, string t, string a) {
        bookid = id;
        title = t;
        author = a;
    }

    virtual void display() {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

class Accademic_Book : public Book{
    protected:
    string subject;
    int semester;

    public:
    Accademic_Book();

    void set_inputBook(int id,string t, string a, string s, int semester): Book(id,t,a) {
        this->subject = s;
        this->semester = semester;                  
    }

    void display() override {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Subject: " << subject << endl;
        cout << "Semester: " << semester << endl;
    }
};

class Story_Book : public Book{
    protected:
    string genre;
    int rating;

    public:
    Story_Book();

    void set_input_Book(string t, string a, string g, int r): Book(0,t,a) {
        this->genre = g;
        this->rating = r;
    }
       

    void display() override {
        cout << "Book ID: " << bookid << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Genre: " << genre << endl;
        cout << "Rating: " << rating << endl;
    }
};



int main(){
    Book *book;
    Accademic_Book ab;
    Story_Book sb; 

    cout<<"1. Add Accademic Book"<<endl;
    cout<<"2. Add Story Book"<<endl;
    cout<<"3. Display Book Details"<<endl;
    cout<<"4. Exit"<<endl;
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
    ab.set_input_Book();
    book = &ab;
        break;
    case 2:
    sb.set_input_Book();
    book = &sb;
        break;
    case 3:
    book->display();
        break;
    case 4:
    cout << "Exiting..." << endl;
        break;
    default:
        break;
    }
     
    return 0;
}