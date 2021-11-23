#ifndef Twitter_h
#define Twitter_h

#include"Social Media Acc.h"
template<class T>
class Twitter:public SocialMediaAccount<T>{

public:
    Twitter();
    Twitter(T user);
    void RT();
private:
    int retweetCount;

};

#endif
