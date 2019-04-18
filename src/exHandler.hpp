#pragma once

class eX : public std::exception
    {
    public:
                            eX() throw() {}
                            eX(const std::string s) throw() : _msg() {_msg = s;}
        virtual             ~eX() throw() {}
        const char *        what() const throw() {return _msg.c_str();}

    private:

        std::string         _msg;
    };
