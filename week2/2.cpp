//DO NOT EDIT////////////////////
class BlogPost : public Book { //
/////////////////////////////////
  public:
    BlogPost(string t, string a, string g, string w, int wc, int pv) : Book(t, a, g) {
      website = w;
      word_count = wc;
      page_views = pv;
    }
  
    string GetWebsite() {
      return website;
    }

    void SetWebsite(string new_website) {
      website = new_website;
    }

    int GetWordCount() {
      return word_count;
    }

    void SetWordCount(int new_word_count) {
      word_count = new_word_count;
    }

    int GetPageViews() {
      return page_views;
    }

    void SetPageViews(int new_page_views) {
      page_views = new_page_views;
    }

  private:
    string website;
    int word_count;
    int page_views;
};