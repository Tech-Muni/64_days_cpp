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
    virtual void display() {}
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
    // for code with harry video.
    title = "Github Copilot... Boon or Curse";
    vlen = 12.56;
    rating = 4.89;
    CWHVideo vid(title, rating, vlen);
    // vid.display(); //it's run directly.

    title = "Should we learn C++?";
    rating = 3.72;
    words = 720;
    CWHText art(title, rating, words);
    // art.display(); //it's run directly.
    CWH *tuts[2];
    tuts[0] = &vid;
    tuts[1] = &art;
    // if virtual is not present then the don't give desired output.
    tuts[0]->display();
    tuts[1]->display();
    return 0;
}

/*
    Rules of Virtual Function.
        1. They Cannot be Static.
        2. They are accessed by object pointers.
        3. Virtual functions can be a friend of another class.
        4. A function in base class might not be in used.
        5. If a virtual function is defined in base class, then there is no necessity of redefining it in derived class.
*/