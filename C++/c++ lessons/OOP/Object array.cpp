#include<iostream>
using namespace std;
class Song{
private:
    string title;
    string album;
    string singer;
public:
    Song(){
        title = "unknown title";
        album = "unknown album";
        singer = "unknown singer";
    }
    /// getter/setter
    void setTitle(string input){
        this->title = input;
    }
    string getTitle(){
        return this->title;
    }
    void setAlbum(string input){
        this->album = input;
    }
    string getAlbum(){
        return this->album;
    }
    void setSinger(string input){
        this->singer = input;
    }
    string getSinger(){
        return this->singer;
    }
    void showData(){
        cout<<this->title<<"\t";
        cout<<getAlbum()<<"\t";
        cout<<getSinger()<<"\n";
    }
    bool findData(string _title){
        if(this->title == _title)
            return true;
        else
            return false;
    }
};
int main(){
    /// create object array
    Song songs[3];
    string uTitle,uAlbum,uSinger;
    /// data init
    for(int i = 0;i < 3;i++){
        cout<<"\nEnter data for song - "<<(i + 1);
        cout<<"\nTitle: ";
        getline(cin,uTitle);
        cout<<"Album: ";
        getline(cin,uAlbum);
        cout<<"Singer: ";
        getline(cin,uSinger);

        songs[i].setTitle(uTitle);
        songs[i].setAlbum(uAlbum);
        songs[i].setSinger(uSinger);
    }
    /// display
    cout<<"\n\n_______Song Lists_______\n\n";
    cout<<"Song Title\t Album Name\t Singer\n";
    for(int i = 0;i < 3;i++){
        /// Song s = songs[i];
        /// s.showData();
        songs[i].showData();
    }
    /// search
    cout<<"\nEnter title to search: ";
    getline(cin,uTitle);
    int index = -1;
    for(int i = 0;i < 3;i++){
        if(songs[i].findData(uTitle)){
            index = i;
            break;
        }
    }
    if(index == -1)
        cout<<"\""<<uTitle<<"\" is not found!\n";
    else{
        cout<<"Album: "<<songs[index].getAlbum();
        cout<<"\nSinger: "<<songs[index].getSinger();
    }

    return 0;
}
