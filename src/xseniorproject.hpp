#pragma once

class Xseniorproject : public std::exception
    {
    public:
                            Xseniorproject() throw() {}
                            Xseniorproject(const std::string s) throw() : _msg() {_msg = s;}
        virtual             ~Xseniorproject() throw() {}
        const char *        what() const throw() {return _msg.c_str();}

    private:

        std::string         _msg;
    };
