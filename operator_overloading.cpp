#include<bits/stdc++.h>
using namespace std;
//members of structure are public by default; members of classes are private by default
struct YouTubeChannel
{
    string Name;
    int SubscriberCount;

    //Constructor
    YouTubeChannel(string name,int scount)
    {
        Name=name;
        SubscriberCount=scount;
    }

    bool operator==(YouTubeChannel channelname)
    {
        return this->Name==channelname.Name;
    }
};
//operator overloading for "<<"
//cout is of the type ostream;ytChannel of the type YouTubeChannel
//Both the variables are passed by reference
void operator<<(ostream& COUT, YouTubeChannel &ytChannel)

{
    COUT<< "Name: "<<ytChannel.Name<<endl;
    COUT<<"Sub Count: "<<ytChannel.SubscriberCount<<endl;
}
struct MyCollection
{
    list<YouTubeChannel>myChannels;

    //member function
    //operator overloading for +=
    void operator+=(YouTubeChannel& channel)
    {
        this->myChannels.push_back(channel); //this refer to current myChannels
    }

    //operator overloading for -=
        void operator-=(YouTubeChannel& channel)
    {
        //this function will give error because internally remove uses == to compare,so we need to overload == in YouTubeChannel
        this->myChannels.remove(channel); //this refer to current myChannels
    }

};

//operator overloading for << in myCollections
ostream& operator<<(ostream& COUT, MyCollection& myCollection) {
    for (YouTubeChannel ytChannel : myCollection.myChannels)
        COUT << ytChannel ;
    return COUT;
}

int main()
{
    YouTubeChannel yt1=YouTubeChannel("Siddhant",100);
    YouTubeChannel yt2=YouTubeChannel("Shweta",200);
    cout << yt1; //Prints the Name & Subscriber
    MyCollection mycollection;
    mycollection += yt1; //adding yt1 to my collection
    mycollection += yt2; //adding yt2 to my collection
    mycollection -= yt2; //adding yt2 to my collection
    cout << mycollection;
    return 0;
}