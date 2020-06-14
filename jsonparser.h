#ifndef _JSON_PARSER_
#define _JSON_PARSER_
#include <iostream>
#include <fstream>

class jsonparser
{
private:
    char** data; //to be changes with a polymorphic structure containing polymorphic structure
    unsigned int size;
    char* file_path;
    std::ofstream file_write;
    std::ifstream file_read;
public:
    jsonparser();
    jsonparser(const jsonparser&);
    jsonparser& operator=(const jsonparser&);
    ~jsonparser();

    bool validate();
    void print();
    void search(char*);
    void set(char*, char*);
    void create(char*, char*);
    void delete_function(char*);
    void move(char*, char*);

    void open(char*);
    void save();
    void saveas(char*);

};
#endif // _JSON_PARSER_
