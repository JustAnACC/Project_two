#include "jsonparser.h"
#include <iostream>
#include <string.h>
#include <fstream>

jsonparser::jsonparser()
{
    data = nullptr;
    size = 0;
    file_path = nullptr;
}
jsonparser::jsonparser(const jsonparser& given)
{

}
jsonparser& jsonparser::operator=(const jsonparser& given)
{
    return *this;
}
jsonparser::~jsonparser()
{
    for (unsigned int i = 0;i < size; ++i)
    {
        delete[] data[i];
    }
    delete[] file_path;
}

bool jsonparser::validate()
{
    //TO DO
    return false;
}
void jsonparser::print()
{
    //tab counter to be added for proper output
    std::cout<<'{'<<std::endl;
    //++counter;
    for(unsigned int i = 0; i < size; ++i)
    {
        //std::cout<<data.print(counter);
    }
    std::cout<<std::endl<<'}'<<std::endl;

}
void jsonparser::search(char* key)
{
    bool is_there = false;
    for(unsigned int i = 0; i < size; ++i)
    {
        //is_there=data[i].search(key);
        if(is_there)
        {
            //print the found detail
        }
    }
}
void jsonparser::set(char* path, char* given_data)
{
    /*if(missing_attribute_on_path())
    {
        std::cerr<<"Incorrect path";
    }
    else
    {
        set_different_value_to_attribute
    }*/
}
void jsonparser::create(char* path, char* given_data)
{
    /*if(there_is_an_attribute_on_path())
    {
        std::cerr<<"Incorrect path";
    }
    else
    {
        create_attribute
    }*/
}
void jsonparser::delete_function(char* key)
{
    /*if(key_not_found())
    {
        std::cerr<<"Wrong key given";
    }
    else
    {
        delete_functionality
    }*/
}
void jsonparser::move(char*, char*)
{

}

void jsonparser::open(char* path)
{
    (*this).save();
    if(file_write.is_open())
    {
        file_write.close();
    }
    if(file_read.is_open())
    {
        file_read.close();
    }
    delete[] file_path;
    file_path = new char[strlen(path)+1];
    strcpy(file_path,path);
    file_write.open(path);
    file_read.open(path);
}
void jsonparser::save()
{
    //TO DO
}
void jsonparser::saveas(char*)
{
    //TO DO
}
