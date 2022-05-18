#include "OrgChart.hpp"

using namespace std;

namespace ariel
{
    OrgChart::iterator::iterator(OrgChart *ptr)//: pointer_to_current_chart(ptr){}
    {
        this->pointer_to_current_chart = ptr;
    }
    string& OrgChart::iterator::operator*() const
    {
        return this->pointer_to_current_chart->name;
    }
    string* OrgChart::iterator::operator->() const
    {
       
        return &(this->pointer_to_current_chart->name);
    }
    OrgChart::iterator& OrgChart::iterator::operator++()//++i
    {
        return *this;
    }
    const OrgChart::iterator OrgChart::iterator::operator++(int)
    {
        return *this;
    }
    bool OrgChart::iterator::operator==(const OrgChart::iterator& iter) const
    {
        return false;
    }
    bool OrgChart::iterator::operator!=(const OrgChart::iterator& iter) const
    {
        return false;
    }
    int OrgChart::iterator::size()
    {
        return 0;
    }
    ostream& operator<<(ostream& output, const  OrgChart::iterator &iterator)
    {
        return output;
    }
}