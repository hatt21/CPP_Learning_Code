#pragma once

#include <iostream>
#include <string>

struct Content
{
    ~Content() { std::cout << "Content deleted" << std::endl; }

    Content(const Content& content)
        : name { content.name }
    {
        std::cout << "Content copied" << std::endl;
    }

    Content(const std::string& name)
        : name { name }
    {
        std::cout << "Content created" << std::endl;
    }

    std::string name;
};

class Box
{
public:
    ~Box() { std::cout << "Box deleted" << std::endl; }
    Box(const std::string& name)
        : _content { name }
    {
        std::cout << "Box created" << std::endl;
    }

    Content& get_content() { return _content; }

private:
    Content _content;
};
