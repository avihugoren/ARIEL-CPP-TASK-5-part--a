//
// Created by avihu on 24/05/2021.
//

#include <clocale>
#include <iosfwd>

#ifndef BINARYTREE_BINARYTREE_HPP
#define BINARYTREE_BINARYTREE_HPP

#endif //BINARYTREE_BINARYTREE_HPP
namespace ariel {
    template<class T>
    class BinaryTree {
    private:

        class my_node {
        public:
            T data;
            my_node *left = NULL;
            my_node *right = NULL;

            my_node(T x) : data(x), left(NULL), right(NULL) {}
        };

        my_node *root;

        class iterator {
        public:
            my_node *current_node_ptr;

            iterator(my_node *ptr = NULL)
                    : current_node_ptr(ptr) {
            }

            T &operator*() const {
                return current_node_ptr->data;
            }
            int size()
            {
                return 0;
            }
            iterator &operator++() {
                return *this;
            }
             T* operator->() const
            {
                return &(current_node_ptr->data);
            }
            const iterator operator++(int) {
                iterator tmp = *this;
                current_node_ptr = current_node_ptr->left;
                return tmp;
            }

            bool operator==(const iterator &rhs) const {
                return current_node_ptr == rhs.current_node_ptr;
            }

            bool operator!=(const iterator &rhs) const {
                return current_node_ptr != rhs.current_node_ptr;
            }
        };  // END OF CLASS ITERATOR

    public:
        BinaryTree() {

        }

        ~BinaryTree() {

        }

        BinaryTree<T> &add_root(T r) {
            return *this;
        }

        BinaryTree<T> &add_left(T e, T a) {
            return *this;
        }

        BinaryTree<T> &add_right(T e, T a) {
            return *this;
        }

        iterator begin() {
            return iterator(root);
        }

        iterator end() {
            return iterator(root);
        }

        iterator end_preorder() {
            return iterator(root);
        }

        iterator begin_preorder() {
            return iterator(root);
        }

        iterator end_inorder() {
            return iterator(root);
        }

        iterator begin_inorder() {
            return iterator(root);
        }

        iterator end_postorder() {
            return iterator(root);
        }

        iterator begin_postorder() {
            return iterator(root);
        }

        friend std::ostream &operator<<(std::ostream &output, const BinaryTree<T> &bt) {
            return output;
        }
    };
}

