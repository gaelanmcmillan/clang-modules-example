module; // Tell the compiler we have a module

#include <iostream>
#include <string>

/*
 * `#include` statements should be defined above the `export module` statement.
 * If the order of these blocks is reversed, the symbols from the `#include`'d headers
 * are then exported from the module defined in this file, which will lead to name-collisions
 * and other problems.
 */

export module hello;

/**
 * A module-private function
 * @param str
 * @return
 */
auto exclaim(const std::string& str) -> std::string {
    return str + '!';
}

/**
 * An exported function
 * @param name
 */
export
void hello(const std::string& name) {
    std::cout << "Hello " << exclaim(name) << " -- \n";

}


