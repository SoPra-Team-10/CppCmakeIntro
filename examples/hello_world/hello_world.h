#include <string>

class HelloWorld {
    public:
        HelloWorld(const std::string &name);

        void sayHello() const;
    private:
        std::string name;
};
