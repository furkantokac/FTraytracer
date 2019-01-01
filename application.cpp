#include "application.h"
#include "vec3.h"
#include <iostream>

using namespace std;

Application::Application()
{
}

int Application::run()
{
        Vec3 a(1, 2, 999);
        Vec3 b(a);

        cout << "Hello World!" << endl;
        cout << b.getZ() << endl;

        return 0;
}

