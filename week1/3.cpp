  public:
    Song(string ar, string t, string al) {
      artist = ar;
      title = t;
      album = al;
    }
  
    string GetArtist() {
      return artist;
    }

    void SetArtist(string new_artist) {
      artist = new_artist;
    }

    string GetTitle() {
      return title;
    }

    void SetTitle(string new_title) {
      title = new_title;
    }

    string GetAlbum() {
      return album;
    }

    void SetAlbum(string new_album) {
      album = new_album;
    }

    int GetPlayCount() {
      return play_count;
    }

    double GetMoneyEarned() {
      return money_earned;
    }

    double GetPayRate() {
      return pay_rate;
    }

    void Play(int count) {
      for (int i = 0; i < count; i++) {
        UpdatePlayCount();
        UpdateMoneyEarned();
      }
    }
  
    void Stats() {
      cout << artist << endl;
      cout << title << endl;
      cout << album << endl;
      cout << play_count << endl;
      cout << pay_rate << endl;
      cout << money_earned << endl;
    }