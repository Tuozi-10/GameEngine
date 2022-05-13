#include "WindowDefinition.h"

WindowDefinition* GetWindowDefinition()
{
    WindowDefinition *definition = new WindowDefinition();

    cout << "Configuring Window Definition .. \n";
    cout << "name:";
    cin >> definition->name;
    cout << "window name : " << definition->name << "\n";

    cout << "set size x:";
    cin >> definition->size[0];
    
    cout << "\nset size y";
    cin >> definition->size[1];

    cout << "\nsize x: " << definition->size[0] << " y:" << definition->size[1] << "\n";

    return definition;
}