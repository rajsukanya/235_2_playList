#include <iostream>
#include "Set.h"
using namespace std;

/**Gets the current number of entries in this set
@return The integer number of entries currently in the set.*/
template<class ItemType>
int Set<ItemType>::getCurrentSize() const
{
  cout << "SET CURRENT SIZE" <<endl;
}

/**Checks whether this set is empty.
@return True if the set is empty, or false if not.*/
template<class ItemType>
bool Set<ItemType>::isEmpty() const
{
  cout << "SET IS EMPTY" <<endl;
}

/**Adds a new entry to this set.
@post If successful, newEntry is stored in the set and the count of items in the set has increased by 1.
@param newEntry The object to be added as a new entry.
@return True if addition was successful, or false if not.*/
template<class ItemType>
bool Set<ItemType>::add(const ItemType& newEntry)
{
  cout << "SET ADD" <<endl;
}

/**Removes a given entry from this set, if possible.
@post If successful, anEntry has been removed from the set and the count of tiems in the set has decreased by 1.
@param anEntry The entry to be removed.
@return True if removal was sucessful, or false if not.*/
template<class ItemType>
bool Set<ItemType>::remove(const ItemType& anEntry)
{
  cout << "SET REMOVE" <<endl;
}

/**Removes all entries from this set.
@post set contains no items, and the count of items is 0.*/
template<class ItemType>
void Set<ItemType>::clear() 
{
  cout << "CLEAR" <<endl;
}

/**Tests whether this set contains a given entry.
@param anEntry The entry to locate.
@return True if set contains anEntry, or false otherwise.*/
template<class ItemType>
bool Set<ItemType>::contains(const ItemType& anEntry) const
{
  cout << "SET CONTAINS" <<endl;
}

/**Fills a vector with all entries that are in this set.
@return A vector containing all the entries in the set.*/
template<class ItemType>
vector<ItemType> Set<ItemType>::toVector() const
{
  cout << "SET VECTOR" <<endl;
}
