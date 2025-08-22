#include <string>

class Authenticable{
    private:
        std::string password;
    public:
        // Constructor
        Authenticable(std::string password);
        bool authenticationPermition(std::string password) const;
        void login(std::string password);
};
