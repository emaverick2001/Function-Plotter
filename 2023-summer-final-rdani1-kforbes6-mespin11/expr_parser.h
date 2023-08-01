// Maverick Espinosa mespin11
// Ria Dani rdani1
// Katharine Forbes kforbes6
#ifndef FN_PARSER_H
#define FN_PARSER_H

#include <iostream>
#include <deque>
#include "expr.h"

class ExprParser {
private:
  // value semantics are prohibited
  ExprParser(const ExprParser &);
  ExprParser &operator=(const ExprParser &);

  // Helper function that parses expressions in prefix notation from a deque of tokens
  Expr* parsePfxExpr(std::deque<std::string>& tokens);

  // Helper function to check if a string is numeric
  bool is_numeric(const std::string& str);

public:
  ExprParser();
  ~ExprParser();
  
  Expr *parse(std::stringstream &in);
};

#endif // FN_PARSER_H

