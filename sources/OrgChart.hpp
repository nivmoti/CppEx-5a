#pragma once

#include <string>
using namespace std;


namespace ariel{
    
    
      class OrgChart
    {
        
    private:
     
         

	// fields
      string name;
    public:
       OrgChart();
        ~OrgChart(){

        }
        OrgChart& add_root(string name);
        OrgChart& add_sub(string sup,string cur);
        friend std::ostream& operator<<(std::ostream& os, const OrgChart& dt);
        
        class iterator
        {
            
        private:
            OrgChart* pointer_to_current_chart;
        public:
             iterator(OrgChart* ptr =nullptr);
             ~iterator(){

             }
            string& operator*() const;
            string* operator->() const;
            iterator& operator++();
            const iterator operator++(int);
		
           bool operator==(const iterator& rhs) const;
           bool operator!=(const iterator& rhs) const;
		   int size();
		   friend std::ostream& operator<<(std::ostream& os, const iterator& dt);

        };
        
         iterator begin();
	
	     iterator end();

        iterator begin_level_order();
        iterator end_level_order();
        iterator begin_reverse_order();
        iterator reverse_order();
        iterator begin_preorder();
        iterator end_preorder();
        
        
    };
    
    

}