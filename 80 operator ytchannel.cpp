#include <iostream>
#include <string>
using namespace std;
//doesn't work

struct YoutubeChannel{
		string Name;
		int SubscriberCount;
		YoutubeChanner(string name, int subscribercount){
			Name=name;
			SubscriberCount=subscribercount;
		}
		std::ostream& operator<<(ostream& cout, YoutubeChannel& ytchannel){
			cout<<"name: "<<ytchannel.Name<<endl;
			cout<<"subscriber count: "<<ytchannel.SubscriberCount<<endl;
		}
};
int main(){
	YoutubeChannel yt1=Youtubechannel("Antonis",5000);
	cout<<yt1;
	
	system("pause>0");
}
