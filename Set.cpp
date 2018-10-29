/*
Name: Sukanya Raj
File name: Set.cpp
Date: 9/25/18
Assignment: Project 2
Description: implementation of class Set
*/

#include <iostream>
#include <vector>
#include "Set.h"
using namespace std;

/*Initializes private member variables*/
template<class ItemType>
Set<ItemType>::Set()
{
  item_count_ = 0;
  max_items_ = DEFAULT_SET_SIZE;
}

/*Gets the current number of entries in this set*/
template<class ItemType>
int Set<ItemType>::getCurrentSize() const
{
  return item_count_;
}

/*Checks whether this set is empty*/
template<class ItemType>
bool Set<ItemType>::isEmpty() const
{
  if(item_count_ == 0)
  {
    return true;
  }
  return false;
}

/*Adds a new entry to this set*/
template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry)
{
  if(item_count_ < max_items_ && getIndexOf(newEntry) == -1)
  {
    items_[item_count_] = newEntry;
    item_count_++;
    return true;
  }
  return false;
}

/*Removes a given entry from this set, if possible*/
template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry)
{
  if(item_count_ != 0)
  {
    int index = getIndexOf(anEntry);
    items_[index] = items_[item_count_-1];
    item_count_--;
    return true;
  }
  return false;
}

/*Removes all entries from this set*/
template<class ItemType>
void Set<ItemType>::clear() 
{
  item_count_ = 0;
}

/*Tests whether this set contains a given entry*/
template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const
{
  int index = getIndexOf(anEntry);
  if(index != -1)
  {
    return true;
  }
  return false;
}

/*Fills a vector with all entries that are in this set*/
template<class ItemType>
vector<ItemType> Set<ItemType>::toVector() const
{
  vector<ItemType> fillVector;
  for(int i = 0; i < item_count_; i++)
  {
    fillVector.push_back(items_[i]);
  }
  return fillVector;
}

/*Private member function
Gets the index of an entry, if possible*/
template<class ItemType>
int Set<ItemType>::getIndexOf(const ItemType& target) const
{
  for(int i = 0; i < item_count_; i++)
  {
    if(items_[i] == target)
      return i;
  }
  return -1;
}
