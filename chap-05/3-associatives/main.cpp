#include "keys.h"
#include <map>
#include <string>

int main()
{
    using Owner = std::pair<std::string, std::string>;
    std::map<ComparableDog, Owner> owners_by_dog;

    ComparableDog medor{"medor", "labrador"};
    ComparableDog gus{"gus", "bordercollie"};
    ComparableDog zim{"zim", "poodle"};
    ComparableDog flippy{"flippy", "spaniel"};

    owners_by_dog.insert(std::make_pair(medor, Owner{"Claire", "David"}));
    owners_by_dog.insert_or_assign(gus, Owner{"Marc", "Zipstein"});
    owners_by_dog.emplace(zim, Owner{"Céline", "Noël"});
    owners_by_dog.try_emplace(flippy, "Vincent", "Nozick");

    owners_by_dog.emplace(gus, Owner{"Claire", "David"});
    // -> gus is still owned by Marc (emplace does not modify values with existing keys, neither does insert or try_emplace)

    owners_by_dog.insert_or_assign(gus, Owner{"Vincent", "Nozick"});
    // -> gus is now owned by Vincent (insert_or_assign reassign values with existing keys)

    return 0;
}