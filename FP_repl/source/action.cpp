#include "../header/action.h"

Action::Action()
{}
//--------------------------------------------------------------

Action::~Action()
{}
//--------------------------------------------------------------

void Action::exec(Node* n)
{
    std::cout << "EXEC" << std::endl;
    
    if(n == 0)
    {
        return;
    }
    
    // tree traversal here
}
//--------------------------------------------------------------