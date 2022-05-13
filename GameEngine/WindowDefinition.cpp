#include "WindowDefinition.h"

WindowDefinition* GetWindowDefinition()
{
    WindowDefinition *definition = new WindowDefinition();

    cout << "Configuring Window Definition .. \nname:";
    cin >> definition->name;
    cout << "window name : " << definition->name << "\nset size x:";
    cin >> definition->size[0];
    cout << "set size y:";
    cin >> definition->size[1];
    cout << "\nsize x: " << definition->size[0] << " y:" << definition->size[1] << "\n";

    return definition;
}