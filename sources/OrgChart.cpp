#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::OrgChart()
    {
        this->name="";
    }

    OrgChart& OrgChart::add_root(string newRoot)
    {
        return *this;
    }

    OrgChart& OrgChart::add_sub(string from, string to)
    {
        return *this;
    }
    
    ostream& operator<<(ostream& output, const OrgChart &org)
    {
        return output;
    }

    OrgChart::iterator OrgChart::begin_level_order()
    {
        iterator temp{this};
        return temp;
    }

    OrgChart::iterator OrgChart::end_level_order()
    {
        iterator temp{this};
        return temp;
    }

     OrgChart::iterator OrgChart::begin_reverse_order()
    {
        iterator temp{this};
        return temp;
    }

     OrgChart::iterator OrgChart::reverse_order()
    {
         iterator temp{this};
        return temp;
    }

    OrgChart::iterator OrgChart::begin_preorder()
    {
        iterator temp{this};
        return temp;
    }

     OrgChart::iterator OrgChart::end_preorder()
    {
        iterator temp{this};
        return temp;
    }

    OrgChart::iterator OrgChart::begin()
    {
         iterator temp{this};
        return temp;
    }
     OrgChart::iterator OrgChart::end()
    {
        iterator temp{this};
        return temp;
    }
}