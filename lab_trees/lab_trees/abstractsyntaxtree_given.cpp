#include "abstractsyntaxtree.h"

AbstractSyntaxTree::AbstractSyntaxTree(AbstractSyntaxTree::Node* node)
    : BinaryTree<std::string>(node)
{ /* nothing */
  std::cout << "AST ctor called with" << getRoot() << std::endl;

}
