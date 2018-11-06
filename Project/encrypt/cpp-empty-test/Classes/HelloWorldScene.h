#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

struct OneFileInfor
{
	int m_id;
	int m_StartPos;
	int m_Size;
	std::string m_Path;
	char m_data[];
};

class HelloWorld : public cocos2d::Layer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* scene();
    
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);

private:
	void InitUPKFileSystem();

	cocos2d::Data GetDataFromUPK(const char* filepath); 

public:
	std::vector<OneFileInfor> m_allFileInforVec;
};




#endif // __HELLOWORLD_SCENE_H__
