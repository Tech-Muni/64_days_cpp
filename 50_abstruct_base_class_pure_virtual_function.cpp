#include <iostream>
#include <cstring>
using namespace std;

class CWH
{
private:
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; //This is known as do nothing function or Pure virtual function
    // Now it's pure virtual function and **every inherited class should have dislpay function** otherwise compiler will give us error.
    // Abstract Base class is that class from which we can create new inherited class.
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title:- " << title << endl;
        cout << "Ratings:- " << rating << " out of 5 stars." << endl;
        cout << "Length of this video is:- " << videoLength << " minutes." << endl;
    }
};

class CWHText : public CWH
{
    int word;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        word = wc;
    }
    void display()
    {
        cout << "This is an amazing video with title:- " << title << endl;
        cout << "Rating of this article is:- " << rating << " out of 5 stars." << endl;
        cout << "No of word in this article is:- " << word << " words." << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;
    title = "Github Copilot... Boon or Curse";
    vlen = 12.56;
    rating = 4.89;
    CWHVideo vid(title, rating, vlen);
    title = "Should we learn C++?";
    rating = 3.72;
    words = 720;
    CWHText art(title, rating, words);
    CWH *tuts[2];
    tuts[0] = &vid;
    tuts[1] = &art;
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}