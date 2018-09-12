#ifndef SONG_H_
#define SONG_H_

class Song
{
  public:
    Song();
    Song(const std::string& title, const std::string& author = "", const std::string& album = "");
    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setAlbum(std::string album);
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getAlbum() const;
    friend bool operator==(const Song& lhs, const Song& rhs);
  private:
    std::string title_;
    std::string author_;
    std::string album_;
};
#endif
