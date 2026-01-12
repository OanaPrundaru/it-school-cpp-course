//#include <complex>
//#include <iostream>
//#include <limits>
//#include <climits>
 
//int main(int, char**)
//{
   // int a = 20 , b =75

       // std::complex < float > a(20);
       // std::complex < float > b(75);
    //
      //  std::cout<<"Rezultatul este : "<<std::endl;
     //   std::cout<< a << " * " << b << " = " << a * b << '\n';
       
      //  std::cout<<"Min size :" <<std::numeric_limits<int>::min()<<std::endl;
      //  std::cout<<"Max size :" <<std::numeric_limits<int>::max()<<std::endl;

        
    //if ((a*b) >=std::min)
        //std::cout<<"Erorr"<<std::endl;
    
    //else
       // std::cout<<""<<std::endl;
    
     //if ((a*b) >=std::max)
       // std::cout<<"Erorr"<<std::endl;
    
    //else
       // std::cout<<""<<std::endl;    

       // std::cout<<"Rezultatul impartirii cu 0 este :"<<std::endl;
        //std::cout<< a << " * " << b << " = " << a * b <<"/"<< 0 <<" = " << (a*b) / 0 <<'\n' ;
    
    //return 0;
    
//}




/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// #include <iostream>
// #include <cmath>
// #include <math.h>

// //std::pow
// //std::sqrt 

// #define BUFFER_MAX_LEN 256

// struct Point {
//     int x;
//     int y;
// };
    
// struct Triangle {
//     Point p_1;
//     Point p_2;
//     Point p_3;
// };

// void printPoint(Point p){
//     std::cout << "Point (" << p.x << " , " << p.y << ")" << std::endl; 
// }
// void printTriangle(Triangle t){
//     printPoint(t.p_1);
//     printPoint(t.p_2);
//     printPoint(t.p_3);
// }

// bool is_point_origin(Point p_1){
//     return( p_1.x == 0 && p_1.y == 0);
// }

// float TriangleIsValid(Triangle t)
// {
//     float det = t.p_1.x * (t.p_2.y - t.p_3.y) +
//               t.p_2.x * (t.p_2.y - t.p_1.y) +
//               t.p_3.x * (t.p_1.y - t.p_2.y);
//     return fabs(det) > 1e-12;
//     }
    
// int main()
// {
//    Point p_1;
//    p_1.x = 2;
//    p_1.y = 5;
   
//    Point p_2;
//    p_2.x = 3;
//    p_2.y = 9;
   
//    Point p_3;
//    p_3.x = 15;
//    p_3.y = 1;
   
//    printPoint(p_3);
   
//    Triangle t;
   
//    t.p_1.x = 12;
//    t.p_1.y = 2;
//    t.p_2.x = 13;
//    t.p_2.y = 15;
//    t.p_3.x = 8;
//    t.p_3.y = 5;
   
//    printTriangle(t);
   
//    std::cout << is_point_origin(p_1)<< std::endl;
//    std::cout <<TriangleIsValid(t) <<std::endl;
// return 0;
   
// }

#include <stdlib.h>


// node structure

typedef struct sl_list_node {
    struct sl_list_node * next; // pointer to next node
    int value; // node value
} sl_list_node_t;

// list structure

typedef struct sl_list {
    sl_list_node_t * head; // pointer to list head
    sl_list_node_t * tail; // pointer to list tail
    unsigned int len; // number of nodes in list
} sl_list_t;

//new node
typedef struct sl_list_node_new{
    struct sl_list_node_new * next; 
    int value;
} sl_list_node_new;

// create new empy list
sl_list_t* list_new(void) {
    sl_list_t *list_new = (sl_list_t*)malloc(sizeof(sl_list_t));
    if (list_new) {
        list_new->head = NULL;
        list_new->tail = NULL;
        list_new->len = 0;
    }
    return list_new;
}

int main(){
// push node to the right (before head), return node address or NULL

sl_list_node_t * list_rpush(sl_list_t * self, sl_list_node_t * node) {
    if (self == NULL || node == NULL) {
        return NULL;
    }

    node->next = NULL;

    if (self->len == 0 || self->head == NULL) {
        self->head = node;
        self->tail = node;
    } 
    else {
        self->tail->next = node;
         self->tail = node;
    }
    self->len++;
    return node;
}

// push node to the left (after tail), return node address or NULL

sl_list_node_t * list_lpush(sl_list_t * self, sl_list_node_t * node) {
    if (self == NULL || node == NULL) {
    return NULL;
    }
    node->next = self->head;
    self->head = node;

    if (self->len == 0) {
    self->tail = node;
    }
    self->len++;
    return node;
}
// find node with value, return node address or NULL

sl_list_node_t * list_find(sl_list_t * self, int value) {
    if (self == NULL || self->head == NULL) {
    return NULL;
    }
   
sl_list_node_t *current = self->head;
    while (current != NULL) {
        if (current->value == value) {
            return current;
        }
    current = current->next;
    }
    return NULL;

// return node address at index,, return node address or NULL

sl_list_node_t * list_at(sl_list_t * self, int index) {
    if (self == NULL || index < 0 || (unsigned int)index >= self->len) {
        return NULL;
    }
sl_list_node_t *current = self->head;
    int current_index = 0;
    while (current != NULL) {
        if (current_index == index) {
            return current; // Am găsit nodul la indexul cerut
        }
        
        current = current->next;
        current_index++;
    }
    return NULL;
}

// pop node to the right (head node), return node address or NULL

sl_list_node_t * list_rpop(sl_list_t * self) {
    if (self == NULL || self->len == 0 || self->head == NULL) {
        return NULL;
    }

sl_list_node_t *node_to_return = self->tail;
    if (self->len == 1) {
        self->head = NULL;
        self->tail = NULL;
    } 
    else {
        sl_list_node_t *current = self->head;
        while (current->next != self->tail) {
            current = current->next;
        }

        current->next = NULL;  
        self->tail = current;  
    }
   self->len--;
    return node_to_return;
}
// pop node to the left (tail node), return node address or NULL

sl_list_node_t * list_lpop(sl_list_t * self) {
    if (self == NULL || self->len == 0 || self->head == NULL) {
        return NULL;
    }
sl_list_node_t *node_to_return = self->head;
    self->head = self->head->next;
    if (self->head == NULL) {
        self->tail = NULL;
    }
    self->len--;
    node_to_return->next = NULL;
    return node_to_return;
}

// remove node from list

void list_remove(sl_list_t * self, sl_list_node_t * node) {
    if (self == NULL || node == NULL || self->len == 0) {
        return;
    }
    if (self->head == node) {
        self->head = node->next;

    if (self->tail == node) {
            self->tail = NULL;
        }
        self->len--;
        node->next = NULL;
        return;
    }
    sl_list_node_t *current = self->head;
    while (current != NULL && current->next != node) {
        current = current->next;
    }
    if (current != NULL) {
        current->next = node->next;
        if (self->tail == node) {
            self->tail = current;
        }
        self->len--;
        node->next = NULL; 
    }
}

// free all nodes from list

void list_destroy(sl_list_t * self) {
    if (self == NULL) {
        return;
    }
    sl_list_node_t *current = self->head;
    sl_list_node_t *next_node;

    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    self->head = NULL;
    self->tail = NULL;
    self->len = 0;
    free(self);
}

// print all nodes in list

#include <stdio.h>

void print_list(sl_list_t * self) {
    if (self == NULL) {
        printf("Lista nu exista (NULL).\n");
        return;
    }
    if (self->head == NULL) {
        printf("Lista este goala (len: 0).\n");
        return;
    }
    sl_list_node_t *current = self->head;
    
    printf("Lista (len: %u): ", self->len);
    
    while (current != NULL) {
        printf("[%d]", current->value);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    
    printf(" -> NULL\n");
}

return;
}