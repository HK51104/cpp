#include<iostream>
#include<cstring>

using namespace std;

class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r)
    {
        title=s;
        rating=r;
    }
    virtual void visplay()
    {

    }
};

class CWHVideo:public CWH
{
    float videolength;
    public:
    CWHVideo(string s,float r,int vl): CWH(s,r)
    {
        videolength=vl;
    }
    void display()
    {
        cout<<"This is an amazing video with title"<<title<<endl;
        cout<<"Ratings: "<<rating<<"out of 5 stars "<<endl;
        cout<<"Length of the video is :"<<videolength<<"minutes"<<endl;
    }
};

class CWHText:public CWH
{
    int words;
    public:
    CWHText(char *s,float r,int wc): CWH(s,r)
    {
        words=wc;
    }
    void display()
    {
        cout<<"This is an amazing text tutorial with title"<<title<<endl;
        cout<<"Ratings of this text tutorial:"<<rating<<"out of 5 stars"<<endl;
        cout<<"No. of words in this text tutorial is :"<<words<<"words"<<endl;

    }
};

int main(int argc, char const *argv[])
{
    string title;
    float rating,vl;
    int words;
// for CWH video
title="This is Django Tutorial";
vl=4.56;
rating=4.89;
CWHVideo DjVideo(title,rating,vl);
DjVideo.display();

title="This is Django Text";
words=433;
rating=4.19;
CWHText DjText(title,rating,words);
DjText.display();
    

    return 0;
}

