#include "node.h"

class queue {
    private:
        node *front;
        node *back;
        node *temp;
    public:
        queue();
        void add(int new_value);
        int remove();
        int peek_front();
        int peek_back();
};
