/*
Name: Sukanya Raj
File name: PlayList.h
Date: 9/25/18
Assignment: Project 2
Description: interface of class PlayList
*/

#ifndef PLAY_LIST_H_
#define PLAY_LIST_H_

#include "Set.h"
#include "Song.h"

class PlayList
{
  public:
    PlayList();
    
    PlayList(const Song& a_song);
    
    /**Gets the current number of entries in this set.
    Calls the function getCurrentSize() from class Set
    @return The integer number of entries currently in the set.*/
    int getNumberOfSongs() const;
    
    /**Checks whether this set is empty.
    Calls the function isEmpty() from class Set
    @return True if set is empty, or false if not.*/
    bool isEmpty() const;
    
    /**Adds a new entry to this set.
    Calls the function add(newEntry) from class Set
    @return True if addition was successful, or false if not.*/
    bool addSong(const Song& new_song);
    
    /**Removes a given entry from this set, if possible.
    Calls the function remove(anEntry) from class Set
    @return True if removal was successful, or false if not.*/
    bool removeSong(const Song& a_song);
    
    /**Removes all entries from this set.
    Calls the function clear() from class Set*/
    void clearPlayList();
    
    /**Displays all entries from this set*/
    void displayPlayList() const;
  
  private:
    Set<Song>playlist_; // playlist_ is a set of type Song
};
#endif
