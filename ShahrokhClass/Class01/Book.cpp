#include <iostream>
#include <string>

using namespace std;

const int LEN = 10;

struct Book{
    string book_name;
    string writer_name;
    double price;
};

void recieveInfo(Book &);
int getNumberOfBooks(string, const Book [],int);

int main(){
    string writer;
    Book book[LEN];
    for(int i=0;i<LEN;i++)
        recieveInfo(book[i]);
    cout << "Enter name of Writer : ";
    getline(cin,writer);
    cout << "Number of " << writer <<"'s books = " << getNumberOfBooks(writer,book,LEN);
    cin.get();
    cin.get();
}

void recieveInfo(Book &book){
    cout << "Enter Information of Book " << endl;
    cout << "-> Book's name : ";
    getline(cin,book.book_name);
    cout << "-> Writer of " << book.book_name << " : ";
    getline(cin,book.writer_name);
    cout << "-> Price of this book : ";
    cin >> book.price;
    cin.get();
    cout << endl;
}

int getNumberOfBooks(string writer, const Book book[],int l){
    int count = 0;
    for(int i=0;i<l;i++){
        if(writer==book[i].writer_name)
            count++;
    }
    return count;
}