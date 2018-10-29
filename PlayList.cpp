/*
Name: Sukanya Raj
File name: PlayList.cpp
Date: 9/25/18
Assignment: Project 2
Description: implementation of class PlayList
*/

#include <iostream>
#include "PlayList.h"
using namespace std;

PlayList::PlayList()
{
}

/*Adds a song to the set*/
PlayList::PlayList(const Song& a_song)
{
  playlist_.add(a_song);
}

/*Gets the current number of entries in this set.
Calls the function getCurrentSize() from class Set*/
int PlayList::getNumberOfSongs() const
{
  return playlist_.getCurrentSize();
}

/*Checks whether this set is empty.
Calls the function isEmpty from class Set*/
bool PlayList::isEmpty() const
{
  return playlist_.isEmpty();
}

/*Adds a new entry to this set.
Calls the function add(newEntry) from class Set*/
bool PlayList::addSong(const Song& new_song)
{
  return playlist_.add(new_song);
}

/*Removes a given entry from this set, if possible.
Calls the function remove(anEntry) from class Set*/
bool PlayList::removeSong(const Song& a_song)
{
  return playlist_.remove(a_song);
}

/*Removes all entries from this set.
Calls the function clear from class Set*/
void PlayList::clearPlayList()
{
  playlist_.clear();
}

/*Displays all entries from this set.
Calls the function toVector from class Set 
and stores the contents into a temporary vector 
to display all entries of the set */
void PlayList::displayPlayList() const
{
  vector<Song> v = playlist_.toVector();
  
  for(size_t i = 0; i < v.size(); i++)
  {
    cout << " * " << "Title: " << v[i].getTitle() << " * " << "Author: " << v[i].getAuthor() << " * " << "Album: " << v[i].getAlbum() << " * " <<endl;
  }
  cout << "End of playlist" <<endl;
}
