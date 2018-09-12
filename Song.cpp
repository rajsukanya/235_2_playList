#include <iostream>
#include "Song.h"

Song::Song()
{
  std::cout << "SONG CONSTRUCTOR" <<std::endl;
}

Song::Song(const std::string& title, const std::string& author, const std::string& album)
{
  std::cout << "SONG PARAMETERIZED CONSTRUCTOR" <<std::endl;
}

void Song::setTitle(std::string title)
{
  std::cout << "SONG setTitle" <<std::endl;
}

void Song::setAuthor(std::string author)
{
  std::cout << "SONG setAuthor" <<std::endl;
}

void Song::setAlbum(std::string album)
{
  std::cout << "SONG setAlbum" <<std::endl;
}

std::string Song::getTitle() const
{
  return "song getitle";
  //std::cout << "SONG getTitle" <<std::endl;
}

std::string Song::getAuthor() const
{
  return "song getauthor";
  //std::cout << "SONG getAuthor" <<std::endl;
}

std::string Song::getAlbum() const
{
  return "song getalbum";
  //std::cout << "SONG getAlbum" <<std::endl;
}

bool operator==(const Song& lhs, Song& rhs)
{
  std::cout << "SONG FRIEND FUNCTION" <<std::endl;
}
