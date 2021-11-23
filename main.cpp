#include <iostream>

using namespace std;

int maxFollowers=100;
int maxFollowed=100;


template <typename T>
class SocialMediaAccoun
{


    private:
        T handler;
        T * followers;
        T * followed;
        int followerCount;
        int followedCount;
        bool privacy;

    public:


        SocialMediaAccount(T handler)
        {
            this->handler=handler;
            this->followerCount=0;
            this->followedCount=0;
            this->privacy=true;
            followers=new T [maxFollowers];
            followed=new T [maxFollowed];
        }

        void setFollowerCount(int n)
        {
            this->followerCount=n;
        }
        void setHandler(T user)
        {
            this->handler=user;
        }

        T getHandler()
        {
            return this->handler;
        }

        void setFollowedCount(int n)
        {
            this->followedCount=n;
        }

        int getFollowerCount()
        {
            return this->followerCount;
        }

        int getFollowedCount()
        {
            return this->followedCount;
        }

        void setPrivate(bool privacy)
        {
            this->privacy=privacy;
        }
        bool getPrivate()
        {
            return this->privacy;
        }

        void addFollower(T user)
        {
            if(this->followerCount<maxFollowers)
                {
                    followers[followerCount]=user;
                    this->followerCount++;
                }
        }

        void addFollowed(T user)
        {
            if(this->followedCount<maxFollowed)
                {
                    followed[followedCount]=user;
                    this->followedCount++;
                }
        }

        void displayFollowers()
        {
            if(this->privacy)
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
            if(this->privacy)
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
};

int main()
    {
        SocialMediaAccount<int> s(4);
        s.addFollower(1);
        s.addFollower(2);
        s.addFollower(11);
        s.addFollowed(1);
        s.addFollowed(6);
        s.addFollowed(7);
        s.displayFollowed();
        s.setPrivate(false);
        s.displayFollowers();
return 0;
}
