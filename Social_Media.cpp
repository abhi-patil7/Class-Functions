using namespace std;
#include<iostream>
#include<string.h>
struct SocialMedia
{
	char name[20];
	int mo_number;
	char messages[20];
	char bio[20];
	int size;
	
	SocialMedia()			// Default
	{
		strcpy(this->name,"Not Given");
		this->mo_number=0;
		strcpy(this->messages,"Not Given");
		strcpy(this->bio,"Not Given");
		this->size=0;
	}
	SocialMedia(char* name, int mo_number, char* message, char* bio, int size)
	{
		strcpy(this->name,name);
		this->mo_number=mo_number;
		strcpy(this->messages,message);
		strcpy(this->bio,bio);
		this->size=size;
	}
	void setName(char* name)
	{
		strcpy(this->name,name);
	}
	void setMo_Number(int mo_number)
	{
		this->mo_number=mo_number;
	}
	void setMessage(char* message)
	{
		strcpy(this->messages,message);
	}
	void setBio(char* bio)
	{
		strcpy(this->bio,bio);
	}
	void setSize(int size)
	{
		this->size=size;
	}
	char* getName()
	{
		return this->name;
	}
	int getMo_Number()
	{
		return this->mo_number;
	}
	char* getMessgae()
	{
		return this->messages;
	}
	char* getBio()
	{
		return this->bio;
	}
	int getSize()
	{
		return this->size;
	}
	void display()
	{
		cout<<"Name :"<<this->name;
		cout<<"\nMo_Number :"<<this->mo_number;
		cout<<"\nMessage :"<<this->messages;
		cout<<"\nBio :"<<this->bio;
		cout<<"\nSize :"<<this->size;
	}
};
struct Instagram:public SocialMedia
{
	int no_of_posts;
	int followers;
	int followings;
	
	Instagram():SocialMedia()
	{
		this->no_of_posts=0;
		this->followers=0;
		this->followings=0;
	}
	Instagram(char* name, int mo_number, char* message, char* bio, int size, int no_of_posts, int followers, int followings):SocialMedia(name,mo_number,message,bio,size)
	{
		this->no_of_posts=no_of_posts;
		this->followers=followers;
		this->followings=followings;
	}
	void setNo_Of_Posts(int no_of_posts)
	{
		this->no_of_posts=no_of_posts;
	}
	void setFollowers(int followers)
	{
		this->followers=followers;
	}
	void setFollowings(int followings)
	{
		this->followings=followings;
	}
	int getNo_Of_Posts(int no_of_posts)
	{
		return this->no_of_posts;
	}
	int getFollowers(int followers)
	{
		return this->followers;
	}
	int getFollowings(int following)
	{
		return this->followings;
	}
	void display()
	{
		cout<<"Name :"<<this->name;
		cout<<"\nMo_Number :"<<this->mo_number;
		cout<<"\nMessages :"<<this->messages;
		cout<<"\nBio :"<<this->bio;
		cout<<"\nSize :"<<this->size;
		cout<<"\nNo_Of_Posts :"<<this->no_of_posts;
		cout<<"\nFollowers :"<<this->followers;
		cout<<"\nFollowings :"<<this->followings;
	}
};
struct Telegram:public SocialMedia
{
	int no_of_channels;
	
	Telegram():SocialMedia()		// Default
	{
		this->no_of_channels=0;
	}
	Telegram(char* name, int mo_number, char* message, char* bio, int size, int no_of_channels):SocialMedia(name,mo_number,message,bio,size)
	{
		this->no_of_channels=no_of_channels;
	}
	void setNo_Of_Channels(int no_of_channels)
	{
		this->no_of_channels=no_of_channels;
	}
	int getNo_Of_Channels()
	{
		return this->no_of_channels;
	}
	void display()
	{
		cout<<"Name :"<<this->name;
		cout<<"\nMo_Number :"<<this->mo_number;
		cout<<"\nMessages :"<<this->messages;
		cout<<"\nBio :"<<this->bio;
		cout<<"\nSize :"<<this->size;
		cout<<"\nNo_Of_Channels :"<<this->no_of_channels;
	}
};
int main()
{
	cout<<"********************S1********************\n\n";
	cout<<"------------------------------------------\n";
	SocialMedia s1;
//	s1.display();
	s1.setName((char*)"Abhishek Patil");
	s1.setMo_Number(99887766);
	s1.setMessage((char*)"Hello");
	s1.setBio((char*)"Good Day");
	s1.setSize(500);
	s1.display();
	cout<<"\n------------------------------------------\n\n";
	cout<<"\n********************I1********************\n\n";
	cout<<"------------------------------------------\n";
	Instagram i1;
	//i1.display();
	i1.setName((char*)"Abhishek Patil");
	i1.setMo_Number(99887766);
	i1.setMessage((char*)"Hello");
	i1.setBio((char*)"Good Day");
	i1.setSize(500);
	i1.setNo_Of_Posts(13);
	i1.setFollowers(1000);
	i1.setFollowings(300);
	i1.display();
	cout<<"\n------------------------------------------\n\n";
	cout<<"\n********************T1********************\n\n";
	cout<<"\n------------------------------------------\n";
	Telegram t1;
	//t1.display();
	t1.setName((char*)"Abhishek Patil");
	t1.setMo_Number(99887766);
	t1.setMessage((char*)"Hello");
	t1.setBio((char*)"Good Day");
	t1.setSize(500);
	t1.setNo_Of_Channels(30);
	t1.display();
	cout<<"\n------------------------------------------\n";
}
