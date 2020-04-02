//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::display_forward()
{
    cout << "Programming Languages Top Ten List\n";
    for(int i = 1; i < _list.size(); i++)
    {
        cout << i << ") " << get(i).text << " ("<<get(i).url<<")\n";
    }
}

void TopTenList::display_backward()
{
    cout << "Programming Languages Top Ten List Backwards\n";
    for(int i = _list.size(); i>=1; i--)
    {
        cout << i << ") "<<get(i).text<<" ("<<get(i).url<<")\n";
    }
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list.at(index-1) = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index-1);
}
