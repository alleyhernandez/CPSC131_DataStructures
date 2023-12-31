//  Alley Hernandez
//  CWID: 887879294
//  Due Date: 10/07/2023
//  Edited:   10/09/2023
//  Fall 2023 CPSC 131-14
//  Description:    In this project, you'll develop vector operations for a management system
//                  using a provided starter template.Add the specified functions from the
//                  document without altering the main function, which contains test cases.
//
//  About the Project:  CSUF aims to create an inventory and appointment management system
//                      or tracking donations and assisting students. New students are tasked
//                      with designing this system. The pantry management requests features
//                      for managing inventory and appointments. You need to develop
//                      functions to enhance the system's capabilities. Two template classes
//                      for the inventory system are provided.
//                      Item - A template class defining an item with properties: name,
//                      expiration, category, and quantity.
//                      Inventory - Manages operations with a vector storing Item objects.

#include<iostream>
#include<string>
#include<vector>
#include <iomanip>
template <typename T> class Item{
    public:
        T name;
        T expiration;
        T category;
        int quantity;
        Item(T n, T e, T c, int q){
            name = n;
            expiration = e;
            category = c;
            quantity = q;
        }
};

//  THIS IS OUR INVENTORY CLASS
//  The Inventory Class manages operations using a vector of 'Item' objects.
//
//  Our Inventory Class has the following functions:
//      - Add New Item (addNewItem()): Adds an item to the vector. If the item exists,
//      show "Item is already present in inventory".
//      - Increase Quantity (increaseQuantity()): Increases an item's quantity. Takes parameters:
//      item name and quantity.
//      - Update Item (updateItem()): Modifies an item's quantity, expiration, and
//      category. If the item isn't in the inventory, raise an exception "Item not
//      found".
//      - Remove Item (removeItem()): Deletes an item by name. If the item isn't
//      there, raise an exception "Item not found".
//      - Total (Total()): Computes the total count of items.
//      - Search Item (searchItem()): Searches for an item by name. If not found, throw "Item
//      not found!!".
//
template<typename T>

class Inventory
{
    private:
        std::vector<Item<T>> items;
           
    public:
        // Write Your code

        //  THIS IS OUR 'addNewItem' FUNCTION
        //  addNewItem(): Adds an item to the vector. If the item
        //                exists, show "Item is already present in
        //                inventory".
        void addNewItem(const Item<T> &newItem)
        {
            for(const auto& item : items)
            {
                if(item.name == newItem.name)
                {
                    std::cout << "Item is already present in inventory" << std::endl;
                    return;
                }
            }
    
            items.push_back(newItem);
        }
    
        //  THIS IS OUR 'increaseQuantity' FUNCTION
        //  increaseQuantity(): Increases an item's quantity. Takes
        //                      parameters: item name and quantity.
        void increaseQuantity(T itemName, int quantity)
        {
            for (auto& item : items)
            {
                if (item.name == itemName)
                {
                    item.quantity += quantity;
                    return;
                }
            }
            std::cout << "Item not found" << std::endl;
        }
    
        // THIS IS OUR 'updateItem' FUNCTION
        // updateItem(): Modifies an item's quantity, expiration, and
        //               category. If the item isn't in the inventory,
        //               raise an exception "Item not found".
        void updateItem(T itemName, T expiration, T category, int quantity)
        {
            for(auto& item : items)
            {
                if (item.name == itemName)
                {
                    item.expiration = expiration;
                    item.category = category;
                    item.quantity = quantity;
                    return;
                }
            }
            throw "Item not found";
        }
    
        // THIS IS OUR 'removeItem' FUNCTION
        // removeItem(): Deletes an item by name. If the item isn't
        //               there, raise an exception "Item not found".
        void removeItem(T itemmName)
        {
            for (size_t i = 0; i < items.size(); i++)
            {
                if(items[i].name == itemmName)
                {
                    items.erase(items.begin() + i);
                    return;
                }
            }
            throw "Item not found";
        }
        
        // THIS IS OUR 'Total' FUNCTION
        // Total(): Computes the total count of items.
        int Total() const
        {
            int sum = 0;
            for(const auto& item : items)
            {
                sum += item.quantity;
            }
            std::cout << "Total items in inventory: " << sum << std::endl;
            return sum;
        }
    
        // THIS IS OUR 'searchItem' FUNCTION
        // searchItem(): Searches for an item by name. If not found, throw "Item not found"
        void searchItem(T itemNamee) const
        {
            for (const auto& item : items)
            {
                if (item.name == itemNamee)
                {
                    std::cout << "Item found: " << itemNamee << std::endl;
                    return;
                }
            }
            throw "Item not found";
        }
        
    
        void displayItems(){
            std::cout<<"-------Inventory-------"<<std::endl;
            std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Expiration"<<std::setw(15)<<"Quantity"<<std::setw(10)<<"Category"<<std::endl;
            for(int i=0; i<items.size();i++){
                std::cout<<std::left << std::setw(20)<<items[i].name<<std::setw(15)<<items[i].expiration<<std::setw(15)<<items[i].quantity<<std::setw(15)<<items[i].category<<std::endl;
            }
        }
};

// - Appointment: This class defines an appointment with properties like
//                name, date, time, and CWID (student ID).
template<typename T>class Appointment{
    public:
        T c_name;
        T ap_date;
        T ap_time;
        T CWID;
        Appointment(T n, T d, T t, T cw){
            c_name = n;
            ap_date = d;
            ap_time = t;
            CWID = cw;
        }
};
// THIS IS OUR APPOINTMENT SYSTEM CLASS
//
//          - AppointmentSystem:  This class manages appointments. It has a
//                                list storing all appointments.
//          - Schedule: A function to add an appointment. If a student with the same CWID
//                      already has an appointment, a message "You have already scheduled
//                      an appointment!!!" will be displayed.
//          - Total_appointments: A function that counts appointments on a specific
//                                date and time.
//          - Remove recent: A function to delete the latest booked appointment.

template<typename T>class AppointmentSystem{
        public:
        // Write Your code
        std::vector<Appointment<T>> ap;
        // THIS IS OUR 'schedule' FUNCTION
        //  schedule:   A function to add an appointment. If a student with the same CWID
        //              already has an appointment, a message "You have already scheduled
        //              an appointment!!!" will be displayed.
        void schedule(Appointment<T> &newAp)
        {
            for (int i = 0; i <ap.size(); i++)
            {
                if(ap[i].CWID == newAp.CWID)
                {
                std::cout<<"You already have a scheduled appointment!!!"<< std::endl;
                return;
                }
            }
            ap.push_back(newAp);
        }
    
        // THIS IS OUR 'Total_appointments' Function
        // Total_appointments:  A function that counts appointments on a specific
        //                      date and time.
        void Total_appointments(T date, T time)
        {
            int sum = 0;
            for (int i = 0; i < ap.size(); i++)
            {
                if(ap[i].ap_date == date && ap[i].ap_time == time)
                {
                    sum++;
                }
            }
            std::cout<< "You have " << sum << "appointments at " << time << "on " << date;
        }
        
        // THIS IS OUR 'removeRecent' Function
        // removeRecent:   A function to delete the latest booked appointment.
        void removeRecent()
        {
            {
            ap.pop_back();
            std::cout << std::endl << "you have removed the most recent appointment" << std::endl;
            }
        
        }
        void display(){
            std::cout<<"-------Appointments-------"<<std::endl;
            std::cout<<std::left<<std::setw(20)<<"Name"<<std::setw(15)<<"Date"<<std::setw(15)<<"Time"<<std::setw(15)<<"CWID"<<std::endl;
            for(int i=0; i<ap.size();i++){
                std::cout<<std::left << std::setw(20)<<ap[i].c_name<<std::setw(15)<<ap[i].ap_date<<std::setw(15)<<ap[i].ap_time<<std::setw(15)<<ap[i].CWID<<std::endl;
            }
        }
};
int main(){
    // Remove comments and run following test cases
    Inventory<std::string> i1;
    Item<std::string> I1("Protien Bar","05/09/2023","Snacks",4);
    i1.addNewItem(I1);
    Item<std::string> I2("Milk","05/12/2023","Regular",2);
    i1.addNewItem(I2);
    Item<std::string> I3("Cerels","09/12/2023","Snacks",5);
    i1.addNewItem(I3);
    i1.displayItems();
    i1.updateItem("Milk","09/24/2023","Regular",3);
    i1.displayItems();
    i1.increaseQuantity("Cerels",10);
    i1.displayItems();
    try{
        i1.updateItem("bar","09/12/2023","Snacks",3);
    }
    catch(const char* msg){
        std::cout <<msg << std::endl;
    }
    i1.displayItems();
    i1.updateItem("Cerels","09/27/2023","Regular",4);
    i1.displayItems();
    i1.Total();
    try{
        i1.removeItem("Bread");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    try{
        i1.removeItem("Milk");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    i1.displayItems();
    try{
        i1.searchItem("Cerels");
    }
    catch(const char* msg){
        std::cout<<msg<<std::endl;
    }
    Appointment<std::string> a1("John Bob","09/12/2023","9:30AM","889456723");
    Appointment<std::string> a2("Jim Lee","09/12/2023","10:30AM","883476923");
    Appointment<std::string> a3("Chris Lynn","09/12/2023","12:00PM","879455714");
    Appointment<std::string> a4("Arnav Shah","09/12/2023","12:00PM","879459583");
    AppointmentSystem<std::string> s1;
    s1.schedule(a1);
    s1.schedule(a2);
    s1.schedule(a3);
    s1.schedule(a4);
    s1.display();
    s1.Total_appointments("09/12/2023","12:00PM");
    Appointment<std::string> a5("Chris Lynn","09/12/2023","12:00PM","879455714");
    s1.schedule(a4);
    s1.removeRecent();
    s1.display();
}
