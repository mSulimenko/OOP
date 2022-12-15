#ifndef UNTITLED_SAVER_H
#define UNTITLED_SAVER_H
#include "fstream"
#include <iostream>

class Saver{
private:
public:
    int hash(char c){
        return ((int)c)%13;
    }
    void make_hash(std::string path){
        std::ifstream file;
        file.open(path, std::ios_base::in);
        char c; int hash_sum = 0;
        while(file.get(c)){
            hash_sum+=hash(c);
        }
        file.close();
        std::ofstream file_out;
        file_out.open(path, std::ios_base::app);
        file_out<<'#';
        file_out<<hash_sum;
        file_out.close();
    }
    int check_hash(std::string path){

        std::ifstream file;
        file.open(path, std::ios_base::in);
        char c; int hash_sum = 0;
        file.get(c);
        while(c!='#'){
            hash_sum+=hash(c);
            file.get(c);
        }
        int old_hash;
        file>>old_hash;
        if(old_hash!=hash_sum){
            std::cout<<"error";
            return -1;
        }
        return 0;
    }
};
#endif //UNTITLED_SAVER_H
