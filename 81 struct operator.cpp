#include <iostream>
#include <string>
using namespace std;

struct YouTubeChannel{
	string Name;
	int SubscribersCount;
	
	YouTubeChannel(string name, int subscriberscount){
		Name=name;
		SubscribersCount=subscriberscount;
	}
};
void operator<<(ostream& COUT, YouTubeChannel& ytChannel){
	COUT<<"name: "<<ytChannel.Name<<endl;
	COUT<<"subscribers: "<<ytChannel.SubscribersCount<<endl;
}
int main(){
	YouTubeChannel yt1("Beauty of art", 5000);
	cout<<yt1;
	
	system("pause>0");
}
