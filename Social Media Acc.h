#ifndef Social
#define Social
#include <iostream>
using namespace std;

const int maxFollowers=10;
const int maxFollowed=10;
template<class T>
class SocialMediaAccount{

public:
    SocialMediaAccount();
    SocialMediaAccount(T user);
    void setFollowerCount(int n){this->followerCount=n;}
    void setHandler(T user){this->handler=user;}
    T getHandler(){return this->handler;}
    void setFollowedCount(int n){this->followedCount=n;}
    int getFollowerCount(){return this->followerCount;}
    int getFollowedCount(){return this->followedCount;}
    void setPrivate(bool privacy){this->privacy=privacy;}
    bool getPrivate(){return this->privacy;};
    void addFollower(T user);
    void addFollowed(T user);
        {
            if(this->followedCount<maxFollowed)
            {
                followed[followedCount]=user;
                this->followedCount++;
            }
        }


    void displayFollowers()
    {
        if(!this->privacy)
        {
            for(int i=0;i<this->followerCount;i++)
            {
                cout<<followers[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<"Account is protected can't see the required information\n";
        }
    }


    void displayFollowed()
    {
        if(!this->privacy)
            {
                for(int i=0;i<this->followedCount;i++)
                {
                    cout<<followed[i]<<" ";
                }
                cout<<endl;
            }
        else
        {
            cout<<"Account is protected can't see the required information\n";
        }
    }

private:
    T handler;
    int * followerCount, * followedCount;
    T followers[maxFollowers];
    T followed[maxFollowed];
    bool privacy;



};

#endif


/*

• T handler (this represents the account owner)
• T followers[maxFollowers ]
• T followed[ maxFollowed]
• int followerCount to keep track of your current number of followers.
• int followedCount to keep track of your current number of followed accounts.
*/
