#include <iostream>
#include "PlayList.h"
using namespace std;

PlayList::PlayList()
{
  cout << "PLAYLIST CONSTRUCTOR" <<endl;
}

PlayList::PlayList(const Song& a_song)
{
  cout << "PLAYLIST PARAMETERIZED CONSTRUCTOR" <<endl;
}

int PlayList::getNumberOfSongs() const
{
  cout << "PLAYLIST getNumberOfSongs" <<endl;
  return 4;
}

bool PlayList::isEmpty() const
{
  cout << "PLAYLIST isEmpty" <<endl;
  return false;
}

bool PlayList::addSong(const Song& new_song)
{
  cout << "PLAYLIST addSong" <<endl;
}

bool PlayList::removeSong(const Song& a_song)
{
  cout << "PLAYLIST removeSong" <<endl;
}

void PlayList::clearPlayList()
{
  cout << "PLAYLIST clearPlayList" <<endl;
}

void PlayList::displayPlayList() const
{
  cout << "PLAYLIST displayPlayList" <<endl;
}
