#include <iostream>

class String{
    char* str;
    size_t length=0;
public: String(){str= nullptr;}
    int size(const char* str){
        size_t length=0;
        while(str[length]!='\n'){
            length++;
        }
        return length;
    }
    String(const char * str1){
        length=size(str1);
       str=new char[length];
        for(int i=0; i<length;i++){
            str[i]=str1[i];
        }
    }
    String(const String& string){
        length=size(string.str);
        str=new char[length];
        for(int i=0; i<length;i++){
            str[i]=string.str[i];
        }
    };
    ~String(){
        delete[]str;
    }
    String& String::operator=(const String& string){
        if(this==&string){
            return *this;
        }
        delete[]str;
        length=size(string.str);
        str =new char[length];
        for(int i=0; i<length;i++){
            str[i]=string.str[i];
        }
        return *this;
    }
    bool operator==(const char* str1,const char* & str2){
        bool comp= true;
        for(int i=0;i<length;i++) {
        if(str1[i]==str2[i])
        { continue;}
            comp=false;
            break;
        }
        return comp;
    }
    String& String::find(const char str1, const String& string){
        unsigned int distance=0;
        for(int i =distance;i<length;i++){
            if(string.str[i]==str1[i])
        }


    }







};


int main() {
    char* str={"sdfghewrtfguyhjikuyt"};
    //std::cout<<str<<std::endl;

    return 0;

}